
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_21__ {int duration; int time_base; int index; TYPE_2__* codecpar; TYPE_4__* priv_data; } ;
struct TYPE_20__ {int metadata_sets_count; int partitions_count; int fc; TYPE_5__* partitions; TYPE_1__** metadata_sets; } ;
struct TYPE_19__ {scalar_t__ body_sid; int edit_unit_byte_count; int index_duration; scalar_t__ index_sid; int index_edit_rate; scalar_t__ index_start_position; scalar_t__ type; } ;
struct TYPE_16__ {int length; } ;
struct TYPE_18__ {scalar_t__ body_sid; TYPE_3__ first_essence_klv; } ;
struct TYPE_17__ {scalar_t__ wrapping; scalar_t__ body_sid; scalar_t__ index_sid; } ;
struct TYPE_15__ {scalar_t__ codec_type; int channels; int codec_id; } ;
struct TYPE_14__ {scalar_t__ type; } ;
typedef TYPE_4__ MXFTrack ;
typedef TYPE_5__ MXFPartition ;
typedef int MXFMetadataSet ;
typedef TYPE_6__ MXFIndexTableSegment ;
typedef TYPE_7__ MXFContext ;
typedef TYPE_8__ AVStream ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char*,int ,int) ;
 TYPE_6__* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (TYPE_7__*,TYPE_6__*) ;
 int FUNC_7 (int **,int) ;

__attribute__((used)) static int FUNC_8(MXFContext *VAR_5, AVStream *VAR_6)
{
    MXFTrack *VAR_7 = VAR_6->priv_data;
    MXFIndexTableSegment *VAR_8 = ((void*)0);
    MXFPartition *VAR_9 = ((void*)0);
    int VAR_10 = 0;
    int VAR_11 = 0;
    int VAR_12, VAR_13;

    if (!VAR_7 || VAR_7->wrapping != VAR_2)
        return 0;


    for (VAR_12 = 0; VAR_12 < VAR_5->metadata_sets_count; VAR_12++) {
        if (VAR_5->metadata_sets[VAR_12]->type == VAR_4) {
            MXFIndexTableSegment *VAR_14 = (MXFIndexTableSegment*)VAR_5->metadata_sets[VAR_12];
            if (VAR_14->body_sid == VAR_7->body_sid)
                return 0;
        }
    }


    for (VAR_12 = 0; VAR_12 < VAR_5->partitions_count; VAR_12++) {

        if (VAR_5->partitions[VAR_12].body_sid != VAR_7->body_sid)
            continue;

        VAR_9 = &VAR_5->partitions[VAR_12];
        VAR_10++;
    }


    if (VAR_10 != 1)
        return 0;

    if (VAR_6->codecpar->codec_type == VAR_0 && FUNC_5(VAR_6->codecpar->codec_id)) {
        VAR_11 = (FUNC_1(VAR_6->codecpar->codec_id) * VAR_6->codecpar->channels) >> 3;
    } else if (VAR_6->duration > 0 && VAR_9->first_essence_klv.length > 0 && VAR_9->first_essence_klv.length % VAR_6->duration == 0) {
        VAR_11 = VAR_9->first_essence_klv.length / VAR_6->duration;
    }

    if (VAR_11 <= 0)
        return 0;

    FUNC_3(VAR_5->fc, VAR_1, "guessing index for stream %d using edit unit byte count %d\n", VAR_6->index, VAR_11);

    if (!(VAR_8 = FUNC_4(sizeof(*VAR_8))))
        return FUNC_0(VAR_3);

    if ((VAR_13 = FUNC_6(VAR_5, VAR_8))) {
        FUNC_7((MXFMetadataSet**)&VAR_8, 1);
        return VAR_13;
    }



    if (!VAR_7->index_sid)
        VAR_7->index_sid = VAR_7->body_sid;

    VAR_8->type = VAR_4;

    VAR_8->edit_unit_byte_count = VAR_11;
    VAR_8->index_start_position = 0;
    VAR_8->index_duration = VAR_6->duration;
    VAR_8->index_edit_rate = FUNC_2(VAR_6->time_base);
    VAR_8->index_sid = VAR_7->index_sid;
    VAR_8->body_sid = VAR_9->body_sid;
    return 0;
}
