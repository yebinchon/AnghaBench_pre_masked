
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_6__ {scalar_t__ nb_subs; int current_sub_idx; TYPE_1__* subs; } ;
struct TYPE_5__ {scalar_t__ pts; int stream_index; scalar_t__ duration; } ;
typedef TYPE_2__ FFDemuxSubtitlesQueue ;
typedef int AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,scalar_t__) ;

int FUNC_2(FFDemuxSubtitlesQueue *VAR_4, AVFormatContext *VAR_5, int VAR_6,
                            int64_t VAR_7, int64_t VAR_8, int64_t VAR_9, int VAR_10)
{
    if (VAR_10 & VAR_0) {
        return FUNC_0(VAR_2);
    } else if (VAR_10 & VAR_1) {
        if (VAR_8 < 0 || VAR_8 >= VAR_4->nb_subs)
            return FUNC_0(VAR_3);
        VAR_4->current_sub_idx = VAR_8;
    } else {
        int VAR_11, VAR_12 = FUNC_1(VAR_4, VAR_8);
        int64_t VAR_13;

        if (VAR_12 < 0)
            return VAR_12;
        for (VAR_11 = VAR_12; VAR_11 < VAR_4->nb_subs && VAR_4->subs[VAR_11].pts < VAR_7; VAR_11++)
            if (VAR_6 == -1 || VAR_4->subs[VAR_11].stream_index == VAR_6)
                VAR_12 = VAR_11;
        for (VAR_11 = VAR_12; VAR_11 > 0 && VAR_4->subs[VAR_11].pts > VAR_9; VAR_11--)
            if (VAR_6 == -1 || VAR_4->subs[VAR_11].stream_index == VAR_6)
                VAR_12 = VAR_11;

        VAR_13 = VAR_4->subs[VAR_12].pts;
        if (VAR_13 < VAR_7 || VAR_13 > VAR_9)
            return FUNC_0(VAR_3);


        for (VAR_11 = VAR_12 - 1; VAR_11 >= 0; VAR_11--) {
            int64_t VAR_14 = VAR_4->subs[VAR_11].pts;
            if (VAR_4->subs[VAR_11].duration <= 0 ||
                (VAR_6 != -1 && VAR_4->subs[VAR_11].stream_index != VAR_6))
                continue;
            if (VAR_14 >= VAR_7 && VAR_14 > VAR_13 - VAR_4->subs[VAR_11].duration)
                VAR_12 = VAR_11;
            else
                break;
        }






        if (VAR_6 == -1)
            while (VAR_12 > 0 && VAR_4->subs[VAR_12 - 1].pts == VAR_4->subs[VAR_12].pts)
                VAR_12--;

        VAR_4->current_sub_idx = VAR_12;
    }
    return 0;
}
