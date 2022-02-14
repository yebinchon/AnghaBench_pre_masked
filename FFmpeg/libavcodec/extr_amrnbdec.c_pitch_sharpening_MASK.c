
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef enum Mode { ____Placeholder_Mode } Mode ;
struct TYPE_6__ {int * pitch_gain; int beta; int pitch_lag_int; } ;
struct TYPE_5__ {int pitch_fac; int pitch_lag; } ;
typedef TYPE_1__ AMRFixed ;
typedef TYPE_2__ AMRContext ;


 int FUNC_0 (int ,double) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,double,int ) ;

__attribute__((used)) static void FUNC_2(AMRContext *VAR_3, int VAR_4, enum Mode VAR_5,
                             AMRFixed *VAR_6)
{



    if (VAR_5 == VAR_0)
        VAR_3->beta = FUNC_0(VAR_3->pitch_gain[4], 1.0);

    VAR_6->pitch_lag = VAR_3->pitch_lag_int;
    VAR_6->pitch_fac = VAR_3->beta;




    if (VAR_5 != VAR_1 || VAR_4 & 1)
        VAR_3->beta = FUNC_1(VAR_3->pitch_gain[4], 0.0, VAR_2);
}
