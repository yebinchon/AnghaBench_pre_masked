
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__** x96_subband_samples; } ;
typedef TYPE_1__ DCACoreDecoder ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(DCACoreDecoder *VAR_3)
{
    int VAR_4, VAR_5;



    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
        for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
            FUNC_0(VAR_3->x96_subband_samples[VAR_4][VAR_5] - VAR_0);

    FUNC_1();
}
