
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_12__ {int has_cue; } ;
typedef TYPE_3__ mkv_track ;
struct TYPE_13__ {int num_entries; TYPE_5__* entries; } ;
typedef TYPE_4__ mkv_cues ;
struct TYPE_14__ {scalar_t__ pts; int stream_idx; scalar_t__ tracknum; scalar_t__ cluster_pos; scalar_t__ relative_pos; int duration; } ;
typedef TYPE_5__ mkv_cuepoint ;
typedef int int64_t ;
typedef int ebml_master ;
struct TYPE_15__ {TYPE_2__** streams; int * pb; int * priv_data; } ;
struct TYPE_11__ {TYPE_1__* codecpar; } ;
struct TYPE_10__ {scalar_t__ codec_type; } ;
typedef int MatroskaMuxContext ;
typedef int AVIOContext ;
typedef TYPE_6__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int **,int *) ;
 int FUNC_5 (int *,int ,scalar_t__) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int **,int *,int ) ;

__attribute__((used)) static int64_t FUNC_8(AVFormatContext *VAR_10, mkv_cues *VAR_11, mkv_track *VAR_12, int VAR_13)
{
    MatroskaMuxContext *VAR_14 = VAR_10->priv_data;
    AVIOContext *VAR_15, *VAR_16 = VAR_10->pb;
    int64_t VAR_17;
    int VAR_18, VAR_19, VAR_20;

    VAR_17 = FUNC_2(VAR_16);
    VAR_20 = FUNC_7(VAR_16, &VAR_15, VAR_14, VAR_4);
    if (VAR_20 < 0)
        return VAR_20;

    for (VAR_18 = 0; VAR_18 < VAR_11->num_entries; VAR_18++) {
        ebml_master VAR_21, VAR_22;
        mkv_cuepoint *VAR_23 = &VAR_11->entries[VAR_18];
        uint64_t VAR_24 = VAR_23->pts;
        int VAR_25 = 0;


        for (VAR_19 = 0; VAR_19 < VAR_13; VAR_19++)
            VAR_12[VAR_19].has_cue = 0;
        for (VAR_19 = 0; VAR_19 < VAR_11->num_entries - VAR_18 && VAR_23[VAR_19].pts == VAR_24; VAR_19++) {
            int VAR_26 = VAR_23[VAR_19].stream_idx;

            FUNC_1(VAR_26 >= 0 && VAR_26 < VAR_13);
            if (VAR_12[VAR_26].has_cue && VAR_10->streams[VAR_26]->codecpar->codec_type != VAR_0)
                continue;
            VAR_12[VAR_26].has_cue = 1;
            VAR_25 ++;
        }

        VAR_21 = FUNC_6(VAR_15, VAR_8, FUNC_0(VAR_25));
        FUNC_5(VAR_15, VAR_5, VAR_24);



        for (VAR_19 = 0; VAR_19 < VAR_13; VAR_19++)
            VAR_12[VAR_19].has_cue = 0;
        for (VAR_19 = 0; VAR_19 < VAR_11->num_entries - VAR_18 && VAR_23[VAR_19].pts == VAR_24; VAR_19++) {
            int VAR_27 = VAR_23[VAR_19].stream_idx;

            if (VAR_12[VAR_27].has_cue && VAR_10->streams[VAR_27]->codecpar->codec_type != VAR_0)
                continue;
            VAR_12[VAR_27].has_cue = 1;
            VAR_22 = FUNC_6(VAR_15, VAR_7, VAR_9);
            FUNC_5(VAR_15, VAR_6 , VAR_23[VAR_19].tracknum );
            FUNC_5(VAR_15, VAR_1 , VAR_23[VAR_19].cluster_pos);
            FUNC_5(VAR_15, VAR_3, VAR_23[VAR_19].relative_pos);
            if (VAR_23[VAR_19].duration != -1)
                FUNC_5(VAR_15, VAR_2 , VAR_23[VAR_19].duration);
            FUNC_3(VAR_15, VAR_22);
        }
        VAR_18 += VAR_19 - 1;
        FUNC_3(VAR_15, VAR_21);
    }
    FUNC_4(VAR_16, &VAR_15, VAR_14);

    return VAR_17;
}
