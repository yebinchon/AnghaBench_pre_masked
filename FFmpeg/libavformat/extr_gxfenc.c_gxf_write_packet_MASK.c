
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_16__ {TYPE_3__** streams; int * pb; TYPE_2__* priv_data; } ;
struct TYPE_15__ {size_t stream_index; int size; int data; } ;
struct TYPE_14__ {TYPE_1__* codecpar; } ;
struct TYPE_13__ {int flt_entries_nb; unsigned int* flt_entries; int packet_count; scalar_t__ nb_fields; } ;
struct TYPE_12__ {scalar_t__ codec_id; scalar_t__ codec_type; } ;
typedef TYPE_2__ GXFContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVPacket ;
typedef int AVIOContext ;
typedef TYPE_5__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*,int ,char*) ;
 int FUNC_1 (unsigned int**,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*,int) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_6, AVPacket *VAR_7)
{
    GXFContext *VAR_8 = VAR_6->priv_data;
    AVIOContext *VAR_9 = VAR_6->pb;
    AVStream *VAR_10 = VAR_6->streams[VAR_7->stream_index];
    int64_t VAR_11 = FUNC_2(VAR_9);
    int VAR_12 = 0;
    unsigned VAR_13 = FUNC_2(VAR_9) / 1024;
    int VAR_14;

    FUNC_6(VAR_9, VAR_5);
    if (VAR_10->codecpar->codec_id == VAR_2 && VAR_7->size % 4)
        VAR_12 = 4 - VAR_7->size % 4;
    else if (VAR_10->codecpar->codec_type == VAR_0)
        VAR_12 = VAR_4 - VAR_7->size;
    FUNC_5(VAR_6, VAR_7, VAR_7->size + VAR_12);
    FUNC_3(VAR_9, VAR_7->data, VAR_7->size);
    FUNC_7(VAR_9, VAR_12);

    if (VAR_10->codecpar->codec_type == VAR_1) {
        if (!(VAR_8->flt_entries_nb % 500)) {
            int VAR_15;
            if ((VAR_15 = FUNC_1(&VAR_8->flt_entries,
                                         VAR_8->flt_entries_nb + 500,
                                         sizeof(*VAR_8->flt_entries))) < 0) {
                VAR_8->flt_entries_nb = 0;
                VAR_8->nb_fields = 0;
                FUNC_0(VAR_6, VAR_3, "could not reallocate flt entries\n");
                return VAR_15;
            }
        }
        VAR_8->flt_entries[VAR_8->flt_entries_nb++] = VAR_13;
        VAR_8->nb_fields += 2;
    }

    FUNC_8(VAR_9, VAR_11);

    VAR_8->packet_count++;
    if (VAR_8->packet_count == 100) {
        if ((VAR_14 = FUNC_4(VAR_6, 0)) < 0)
            return VAR_14;
        VAR_8->packet_count = 0;
    }

    return 0;
}
