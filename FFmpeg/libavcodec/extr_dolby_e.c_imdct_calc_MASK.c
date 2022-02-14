
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* imdct; } ;
struct TYPE_10__ {size_t imdct_idx; int imdct_phs; } ;
struct TYPE_9__ {int (* imdct_half ) (TYPE_1__*,float*,float*) ;int (* imdct_calc ) (TYPE_1__*,float*,float*) ;} ;
typedef TYPE_1__ FFTContext ;
typedef TYPE_2__ DBEGroup ;
typedef TYPE_3__ DBEContext ;


 int FUNC_0 (int ) ;
 int* VAR_0 ;
 int FUNC_1 (TYPE_1__*,float*,float*) ;
 int FUNC_2 (TYPE_1__*,float*,float*) ;
 int FUNC_3 (TYPE_1__*,float*,float*) ;

__attribute__((used)) static void FUNC_4(DBEContext *VAR_1, DBEGroup *VAR_2, float *VAR_3, float *VAR_4)
{
    FFTContext *VAR_5 = &VAR_1->imdct[VAR_2->imdct_idx];
    int VAR_6 = 1 << VAR_0[VAR_2->imdct_idx];
    int VAR_7 = VAR_6 >> 1;
    int VAR_8;

    switch (VAR_2->imdct_phs) {
    case 0:
        VAR_5->imdct_half(VAR_5, VAR_3, VAR_4);
        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
            VAR_3[VAR_7 + VAR_8] = VAR_3[VAR_7 - VAR_8 - 1];
        break;
    case 1:
        VAR_5->imdct_calc(VAR_5, VAR_3, VAR_4);
        break;
    case 2:
        VAR_5->imdct_half(VAR_5, VAR_3 + VAR_7, VAR_4);
        for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
            VAR_3[VAR_8] = -VAR_3[VAR_6 - VAR_8 - 1];
        break;
    default:
        FUNC_0(0);
    }
}
