
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int * inner_filter_signal; int outer_filter_signal; } ;
typedef TYPE_1__ QMFAnalysis ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int *,int *,int *) ;

__attribute__((used)) static void FUNC_1(QMFAnalysis *VAR_2,
                                   int32_t VAR_3[4],
                                   int32_t VAR_4[4])
{
    int32_t VAR_5[4];
    int VAR_6;


    for (VAR_6 = 0; VAR_6 < 2; VAR_6++)
        FUNC_0(VAR_2->outer_filter_signal,
                                    VAR_1, 23,
                                    &VAR_3[2*VAR_6],
                                    &VAR_5[0+VAR_6],
                                    &VAR_5[2+VAR_6]);


    for (VAR_6 = 0; VAR_6 < 2; VAR_6++)
        FUNC_0(VAR_2->inner_filter_signal[VAR_6],
                                    VAR_0, 23,
                                    &VAR_5[2*VAR_6],
                                    &VAR_4[2*VAR_6+0],
                                    &VAR_4[2*VAR_6+1]);
}
