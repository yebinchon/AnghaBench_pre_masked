
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double** gain; } ;
typedef TYPE_1__ PanContext ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(const PanContext *VAR_1)
{
    int VAR_2, VAR_3;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        int VAR_4 = 0;

        for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
            double VAR_5 = VAR_1->gain[VAR_2][VAR_3];



            if (VAR_5 != 0. && VAR_5 != 1.)
                return 0;

            if (VAR_5 && VAR_4++)
                return 0;
        }
    }
    return 1;
}
