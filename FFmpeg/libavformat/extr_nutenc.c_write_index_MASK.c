
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_11__ {int nb_streams; } ;
struct TYPE_10__ {scalar_t__ sp_count; TYPE_7__* avf; TYPE_2__* stream; int syncpoints; int max_pts; int max_pts_tb; } ;
struct TYPE_9__ {scalar_t__* keyframe_pts; } ;
struct TYPE_8__ {int pos; } ;
typedef TYPE_1__ Syncpoint ;
typedef TYPE_2__ StreamContext ;
typedef TYPE_3__ NUTContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_7__*,int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,TYPE_1__*,int ,void**) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int VAR_2 ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (TYPE_3__*,int ,int *,int ) ;

__attribute__((used)) static int FUNC_8(NUTContext *VAR_3, AVIOContext *VAR_4) {
    int VAR_5;
    Syncpoint VAR_6= { .pos= 0 };
    Syncpoint *VAR_7[2] = { ((void*)0) };
    int64_t VAR_8 = FUNC_4(VAR_4);
    int64_t VAR_9;

    FUNC_7(VAR_3, VAR_3->max_pts_tb, VAR_4, VAR_3->max_pts);

    FUNC_6(VAR_4, VAR_3->sp_count);

    for (VAR_5=0; VAR_5<VAR_3->sp_count; VAR_5++) {
        FUNC_3(VAR_3->syncpoints, &VAR_6, VAR_2, (void**)VAR_7);
        FUNC_6(VAR_4, (VAR_7[1]->pos >> 4) - (VAR_6.pos>>4));
        VAR_6.pos = VAR_7[1]->pos;
    }

    for (VAR_5=0; VAR_5<VAR_3->avf->nb_streams; VAR_5++) {
        StreamContext *VAR_10= &VAR_3->stream[VAR_5];
        int64_t VAR_11= -1;
        int VAR_12, VAR_13;
        for (VAR_12=0; VAR_12<VAR_3->sp_count; VAR_12++) {
            int VAR_14;
            int VAR_15 = 0;

            if (VAR_12 && VAR_10->keyframe_pts[VAR_12] == VAR_10->keyframe_pts[VAR_12-1]) {
                FUNC_1(VAR_3->avf, VAR_0, "Multiple keyframes with same PTS\n");
                VAR_10->keyframe_pts[VAR_12] = VAR_1;
            }

            VAR_14 = (VAR_10->keyframe_pts[VAR_12] != VAR_1) ^ (VAR_12+1 == VAR_3->sp_count);
            for (; VAR_12<VAR_3->sp_count && (VAR_10->keyframe_pts[VAR_12] != VAR_1) == VAR_14; VAR_12++)
                VAR_15++;

            FUNC_6(VAR_4, 1 + 2*VAR_14 + 4*VAR_15);
            for (VAR_13= VAR_12 - VAR_15; VAR_13<=VAR_12 && VAR_13<VAR_3->sp_count; VAR_13++) {
                if (VAR_10->keyframe_pts[VAR_13] == VAR_1)
                    continue;
                FUNC_0(VAR_10->keyframe_pts[VAR_13] > VAR_11);
                FUNC_6(VAR_4, VAR_10->keyframe_pts[VAR_13] - VAR_11);
                VAR_11 = VAR_10->keyframe_pts[VAR_13];
            }
        }
    }

    VAR_9 = FUNC_4(VAR_4) - VAR_8 + 8 + 4;

    FUNC_5(VAR_4, 8 + VAR_9 + FUNC_2(VAR_9) / 7 + 1 + 4*(VAR_9 > 4096));

    return 0;
}
