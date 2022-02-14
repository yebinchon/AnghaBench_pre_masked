
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* int64_t ;
struct TYPE_6__ {int duration; int metadata; } ;
struct TYPE_5__ {int time_scale; void*** movie_display_matrix; void* duration; TYPE_3__* fc; int trex_data; } ;
typedef TYPE_1__ MOVContext ;
typedef int MOVAtom ;
typedef int AVIOContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int ,char*,int) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,void*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_9(MOVContext *VAR_3, AVIOContext *VAR_4, MOVAtom VAR_5)
{
    int VAR_6;
    int64_t VAR_7;
    int VAR_8 = FUNC_2(VAR_4);
    FUNC_4(VAR_4);

    if (VAR_8 == 1) {
        VAR_7 = FUNC_6(VAR_4);
        FUNC_6(VAR_4);
    } else {
        VAR_7 = FUNC_5(VAR_4);
        FUNC_5(VAR_4);
    }
    FUNC_8(&VAR_3->fc->metadata, VAR_7, VAR_3->fc);
    VAR_3->time_scale = FUNC_5(VAR_4);
    if (VAR_3->time_scale <= 0) {
        FUNC_0(VAR_3->fc, VAR_0, "Invalid mvhd time scale %d, defaulting to 1\n", VAR_3->time_scale);
        VAR_3->time_scale = 1;
    }
    FUNC_0(VAR_3->fc, VAR_1, "time scale = %i\n", VAR_3->time_scale);

    VAR_3->duration = (VAR_8 == 1) ? FUNC_6(VAR_4) : FUNC_5(VAR_4);


    if (VAR_3->time_scale > 0 && !VAR_3->trex_data)
        VAR_3->fc->duration = FUNC_1(VAR_3->duration, VAR_2, VAR_3->time_scale);
    FUNC_5(VAR_4);

    FUNC_3(VAR_4);

    FUNC_7(VAR_4, 10);


    for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
        VAR_3->movie_display_matrix[VAR_6][0] = FUNC_5(VAR_4);
        VAR_3->movie_display_matrix[VAR_6][1] = FUNC_5(VAR_4);
        VAR_3->movie_display_matrix[VAR_6][2] = FUNC_5(VAR_4);
    }

    FUNC_5(VAR_4);
    FUNC_5(VAR_4);
    FUNC_5(VAR_4);
    FUNC_5(VAR_4);
    FUNC_5(VAR_4);
    FUNC_5(VAR_4);
    FUNC_5(VAR_4);

    return 0;
}
