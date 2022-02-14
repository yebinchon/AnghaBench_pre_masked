
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_7__ {scalar_t__ start_dts; scalar_t__ frag_start; scalar_t__ end_pts; int nb_frag_info; unsigned int track_id; unsigned int timescale; TYPE_2__* frag_info; scalar_t__ entry; TYPE_1__* cluster; } ;
struct TYPE_6__ {scalar_t__ time; scalar_t__ offset; int size; scalar_t__ duration; } ;
struct TYPE_5__ {scalar_t__ cts; scalar_t__ dts; unsigned int flags; } ;
typedef TYPE_3__ MOVTrack ;
typedef int AVIOContext ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,unsigned int) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int *,char*) ;
 int FUNC_9 (int *,scalar_t__) ;

__attribute__((used)) static int FUNC_10(AVIOContext *VAR_3,
                              MOVTrack *VAR_4, int VAR_5, int VAR_6)
{
    int64_t VAR_7 = FUNC_2(VAR_3), VAR_8, VAR_9;
    int64_t VAR_10, VAR_11, VAR_12;
    unsigned VAR_13;
    int VAR_14, VAR_15;

    if (VAR_4->entry) {
        VAR_15 = 1;
        VAR_10 = VAR_4->start_dts + VAR_4->frag_start +
                            VAR_4->cluster[0].cts;
        VAR_11 = VAR_4->end_pts -
                   (VAR_4->cluster[0].dts + VAR_4->cluster[0].cts);
        VAR_13 = VAR_4->cluster[0].flags & VAR_1;


        if (VAR_10 < 0) {
            VAR_11 += VAR_10;
            VAR_10 = 0;
        }
    } else {
        VAR_15 = VAR_4->nb_frag_info;
        if (VAR_15 <= 0)
            return 0;
        VAR_10 = VAR_4->frag_info[0].time;
    }

    FUNC_6(VAR_3, 0);
    FUNC_8(VAR_3, "sidx");
    FUNC_3(VAR_3, 1);
    FUNC_5(VAR_3, 0);
    FUNC_6(VAR_3, VAR_4->track_id);
    FUNC_6(VAR_3, VAR_4->timescale);
    FUNC_7(VAR_3, VAR_10);
    VAR_8 = FUNC_2(VAR_3);
    FUNC_7(VAR_3, 0);
    FUNC_4(VAR_3, 0);

    FUNC_4(VAR_3, VAR_15);
    for (VAR_14 = 0; VAR_14 < VAR_15; VAR_14++) {
        if (!VAR_4->entry) {
            if (VAR_14 > 1 && VAR_4->frag_info[VAR_14].offset != VAR_4->frag_info[VAR_14 - 1].offset + VAR_4->frag_info[VAR_14 - 1].size) {
               FUNC_0(((void*)0), VAR_0, "Non-consecutive fragments, writing incorrect sidx\n");
            }
            VAR_11 = VAR_4->frag_info[VAR_14].duration;
            VAR_5 = VAR_4->frag_info[VAR_14].size;
            VAR_13 = 1;
        }
        FUNC_6(VAR_3, (0 << 31) | (VAR_5 & 0x7fffffff));
        FUNC_6(VAR_3, VAR_11);
        FUNC_6(VAR_3, (VAR_13 << 31) | (0 << 28) | 0);
    }

    VAR_9 = FUNC_2(VAR_3);
    VAR_12 = VAR_7 + VAR_6 - VAR_9;
    FUNC_1(VAR_3, VAR_8, VAR_2);
    FUNC_7(VAR_3, VAR_12);
    FUNC_1(VAR_3, VAR_9, VAR_2);
    return FUNC_9(VAR_3, VAR_7);
}
