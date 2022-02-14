
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double phase; int mode; double amount; scalar_t__ offset; int pwidth; } ;
typedef TYPE_1__ SimpleLFO ;


 scalar_t__ FUNC_0 (double,int ) ;
 double FUNC_1 (int,scalar_t__) ;
 double VAR_0 ;





 int FUNC_2 (int ) ;
 double FUNC_3 (double,int) ;
 double FUNC_4 (double) ;

__attribute__((used)) static double FUNC_5(SimpleLFO *VAR_1)
{
    double VAR_2 = FUNC_1(100, VAR_1->phase / FUNC_1(1.99, FUNC_0(0.01, VAR_1->pwidth)) + VAR_1->offset);
    double VAR_3;

    if (VAR_2 > 1)
        VAR_2 = FUNC_3(VAR_2, 1.);

    switch (VAR_1->mode) {
    case 130:
        VAR_3 = FUNC_4(VAR_2 * 2 * VAR_0);
        break;
    case 128:
        if (VAR_2 > 0.75)
            VAR_3 = (VAR_2 - 0.75) * 4 - 1;
        else if (VAR_2 > 0.25)
            VAR_3 = -4 * VAR_2 + 2;
        else
            VAR_3 = VAR_2 * 4;
        break;
    case 129:
        VAR_3 = VAR_2 < 0.5 ? -1 : +1;
        break;
    case 131:
        VAR_3 = VAR_2 * 2 - 1;
        break;
    case 132:
        VAR_3 = 1 - VAR_2 * 2;
        break;
    default: FUNC_2(0);
    }

    return VAR_3 * VAR_1->amount;
}
