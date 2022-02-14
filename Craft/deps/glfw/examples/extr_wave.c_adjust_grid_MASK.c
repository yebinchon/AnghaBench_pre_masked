
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {float z; } ;


 int VAR_0 ;
 int VAR_1 ;
 double** VAR_2 ;
 TYPE_1__* VAR_3 ;

void FUNC_0(void)
{
    int VAR_4;
    int VAR_5, VAR_6;

    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
    {
        for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
        {
            VAR_4 = VAR_6 * VAR_1 + VAR_5;
            VAR_3[VAR_4].z = (float) (VAR_2[VAR_5][VAR_6] * (1.0 / 50.0));
        }
    }
}
