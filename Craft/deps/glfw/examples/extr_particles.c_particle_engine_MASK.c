
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int active; } ;


 float VAR_0 ;
 int VAR_1 ;
 float VAR_2 ;
 int FUNC_0 (TYPE_1__*,double) ;
 float VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (TYPE_1__*,float) ;

__attribute__((used)) static void FUNC_2(double VAR_5, float VAR_6)
{
    int VAR_7;
    float VAR_8;


    while (VAR_6 > 0.f)
    {

        VAR_8 = VAR_6 < VAR_2 ? VAR_6 : VAR_2;

        for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
            FUNC_1(&VAR_4[VAR_7], VAR_8);

        VAR_3 += VAR_8;


        while (VAR_3 >= VAR_0)
        {
            VAR_3 -= VAR_0;


            for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
            {
                if (!VAR_4[VAR_7].active)
                {
                    FUNC_0(&VAR_4[VAR_7], VAR_5 + VAR_3);
                    FUNC_1(&VAR_4[VAR_7], VAR_3);
                    break;
                }
            }
        }

        VAR_6 -= VAR_8;
    }
}
