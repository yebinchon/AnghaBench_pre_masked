
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int (* imdct_half ) (TYPE_6__*,int*,int*,int) ;} ;
struct TYPE_11__ {int (* imdct_half ) (int *,int*,int*) ;} ;
struct TYPE_13__ {int* buf_mdct; int mdct_ld; TYPE_3__ mdct; TYPE_6__* mdct480; TYPE_2__* oc; } ;
struct TYPE_12__ {int* coeffs; int* ret; int* saved; } ;
struct TYPE_9__ {scalar_t__ frame_length_short; } ;
struct TYPE_10__ {TYPE_1__ m4ac; } ;
typedef TYPE_4__ SingleChannelElement ;
typedef int INTFLOAT ;
typedef TYPE_5__ AACContext ;


 int FUNC_0 (int,int const) ;
 int* FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int*,int*,int const) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (TYPE_6__*,int*,int*,int) ;
 int FUNC_5 (int *,int*,int*) ;

__attribute__((used)) static void FUNC_6(AACContext *VAR_2, SingleChannelElement *VAR_3)
{
    INTFLOAT *VAR_4 = VAR_3->coeffs;
    INTFLOAT *VAR_5 = VAR_3->ret;
    INTFLOAT *VAR_6 = VAR_3->saved;
    INTFLOAT *VAR_7 = VAR_2->buf_mdct;
    int VAR_8;
    const int VAR_9 = VAR_2->oc[1].m4ac.frame_length_short ? 480 : 512;
    const int VAR_10 = VAR_9 >> 1;
    const int VAR_11 = VAR_9 >> 2;
    const INTFLOAT *const VAR_12 = VAR_9 == 480 ? FUNC_1(VAR_0) :
                                           FUNC_1(VAR_1);






    for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8+=2) {
        INTFLOAT VAR_13;
        VAR_13 = VAR_4[VAR_8 ]; VAR_4[VAR_8 ] = -VAR_4[VAR_9 - 1 - VAR_8]; VAR_4[VAR_9 - 1 - VAR_8] = VAR_13;
        VAR_13 = -VAR_4[VAR_8 + 1]; VAR_4[VAR_8 + 1] = VAR_4[VAR_9 - 2 - VAR_8]; VAR_4[VAR_9 - 2 - VAR_8] = VAR_13;
    }

    if (VAR_9 == 480)
        VAR_2->mdct480->imdct_half(VAR_2->mdct480, VAR_7, VAR_4, 1);
    else

        VAR_2->mdct.imdct_half(&VAR_2->mdct_ld, VAR_7, VAR_4);






    for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8+=2) {
        VAR_7[VAR_8] = -VAR_7[VAR_8];
    }







    for (VAR_8 = VAR_11; VAR_8 < VAR_10; VAR_8 ++) {
        VAR_5[VAR_8 - VAR_11] = FUNC_0( VAR_7[ VAR_10 - 1 - VAR_8] , VAR_12[VAR_8 - VAR_11]) +
                      FUNC_0( VAR_6[ VAR_8 + VAR_10] , VAR_12[VAR_8 + VAR_9 - VAR_11]) +
                      FUNC_0(-VAR_6[VAR_9 + VAR_10 - 1 - VAR_8] , VAR_12[VAR_8 + 2*VAR_9 - VAR_11]) +
                      FUNC_0(-VAR_6[ 2*VAR_9 + VAR_10 + VAR_8] , VAR_12[VAR_8 + 3*VAR_9 - VAR_11]);
    }
    for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8 ++) {
        VAR_5[VAR_11 + VAR_8] = FUNC_0( VAR_7[ VAR_8] , VAR_12[VAR_8 + VAR_10 - VAR_11]) +
                      FUNC_0(-VAR_6[ VAR_9 - 1 - VAR_8] , VAR_12[VAR_8 + VAR_10 + VAR_9 - VAR_11]) +
                      FUNC_0(-VAR_6[ VAR_9 + VAR_8] , VAR_12[VAR_8 + VAR_10 + 2*VAR_9 - VAR_11]) +
                      FUNC_0( VAR_6[2*VAR_9 + VAR_9 - 1 - VAR_8] , VAR_12[VAR_8 + VAR_10 + 3*VAR_9 - VAR_11]);
    }
    for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8 ++) {
        VAR_5[VAR_10 + VAR_11 + VAR_8] = FUNC_0( VAR_7[ VAR_8 + VAR_10] , VAR_12[VAR_8 + VAR_9 - VAR_11]) +
                           FUNC_0(-VAR_6[VAR_10 - 1 - VAR_8] , VAR_12[VAR_8 + 2*VAR_9 - VAR_11]) +
                           FUNC_0(-VAR_6[VAR_9 + VAR_10 + VAR_8] , VAR_12[VAR_8 + 3*VAR_9 - VAR_11]);
    }


    FUNC_3(VAR_6 + VAR_9, VAR_6, 2 * VAR_9 * sizeof(*VAR_6));
    FUNC_2( VAR_6, VAR_7, VAR_9 * sizeof(*VAR_6));
}
