
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double phase; double amount; scalar_t__ offset; int pwidth; } ;
typedef TYPE_1__ LFOContext ;


 scalar_t__ FUNC_0 (double,int ) ;
 double FUNC_1 (int,scalar_t__) ;
 double VAR_0 ;
 double FUNC_2 (double,int) ;
 double FUNC_3 (double) ;

__attribute__((used)) static double FUNC_4(LFOContext *VAR_1)
{
    double VAR_2 = FUNC_1(100., VAR_1->phase / FUNC_1(1.99, FUNC_0(0.01, VAR_1->pwidth)) + VAR_1->offset);
    double VAR_3;

    if (VAR_2 > 1)
        VAR_2 = FUNC_2(VAR_2, 1.);

    VAR_3 = FUNC_3((VAR_2 * 360.) * VAR_0 / 180);

    return VAR_3 * VAR_1->amount;
}
