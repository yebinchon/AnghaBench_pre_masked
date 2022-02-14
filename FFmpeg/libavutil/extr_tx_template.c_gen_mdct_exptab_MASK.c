
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {double re; double im; } ;
struct TYPE_4__ {TYPE_3__* exptab; } ;
typedef TYPE_1__ AVTXContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (int,int) ;
 double FUNC_2 (double const) ;
 int FUNC_3 (double) ;
 double FUNC_4 (double const) ;
 double FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(AVTXContext *VAR_2, int VAR_3, double VAR_4)
{
    const double VAR_5 = (VAR_4 < 0 ? VAR_3 : 0) + 1.0/8.0;

    if (!(VAR_2->exptab = FUNC_1(VAR_3, sizeof(*VAR_2->exptab))))
        return FUNC_0(VAR_0);

    VAR_4 = FUNC_5(FUNC_3(VAR_4));
    for (int VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
        const double VAR_7 = VAR_1 * (VAR_6 + VAR_5) / VAR_3;
        VAR_2->exptab[VAR_6].re = FUNC_2(VAR_7) * VAR_4;
        VAR_2->exptab[VAR_6].im = FUNC_4(VAR_7) * VAR_4;
    }

    return 0;
}
