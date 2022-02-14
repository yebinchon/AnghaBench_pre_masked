
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int a0; int b0; } ;
struct TYPE_4__ {TYPE_2__* section; } ;
typedef TYPE_1__ EqualizatorFilter ;


 double VAR_0 ;
 int FUNC_0 (TYPE_2__*,double,double,double,double,double,double,double,double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double,double) ;
 double FUNC_4 (double) ;
 double FUNC_5 (int) ;
 double FUNC_6 (double) ;

__attribute__((used)) static void FUNC_7(EqualizatorFilter *VAR_1,
                                 int VAR_2, double VAR_3, double VAR_4,
                                 double VAR_5, double VAR_6, double VAR_7)
{
    double VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    double VAR_15;
    int VAR_16 = VAR_2 % 2;
    int VAR_17 = (VAR_2 - VAR_16) / 2;
    int VAR_18;

    if (VAR_5 == 0 && VAR_7 == 0) {
        VAR_1->section[0].a0 = 1;
        VAR_1->section[0].b0 = 1;
        VAR_1->section[1].a0 = 1;
        VAR_1->section[1].b0 = 1;
        return;
    }

    VAR_5 = FUNC_2(VAR_5/20);
    VAR_6 = FUNC_2(VAR_6/20);
    VAR_7 = FUNC_2(VAR_7/20);

    VAR_15 = FUNC_5((VAR_5*VAR_5 - VAR_6*VAR_6) / (VAR_6*VAR_6 - VAR_7*VAR_7));
    VAR_11 = FUNC_3(VAR_7,1.0/VAR_2);
    VAR_12 = FUNC_3(1.0/VAR_15 + FUNC_5(1 + 1/(VAR_15*VAR_15)), 1.0/VAR_2);
    VAR_13 = FUNC_3(VAR_5/VAR_15 + VAR_6 * FUNC_5(1 + 1/(VAR_15*VAR_15)), 1.0/VAR_2);
    VAR_8 = 0.5 * (VAR_12 - 1.0/VAR_12);
    VAR_9 = 0.5 * (VAR_13 - VAR_11*VAR_11*(1/VAR_13));
    VAR_14 = FUNC_6(VAR_4/2);
    VAR_10 = FUNC_1(VAR_3);

    for (VAR_18 = 1; VAR_18 <= VAR_17; VAR_18++) {
        double VAR_19 = (2.0*VAR_18-1.0)/VAR_2;
        double VAR_20 = FUNC_1(VAR_0*VAR_19/2.0);
        double VAR_21 = FUNC_4(VAR_0*VAR_19/2.0);
        double VAR_22 = (VAR_8*VAR_8 + VAR_20*VAR_20)*VAR_14*VAR_14 + 2.0*VAR_8*VAR_21*VAR_14 + 1;

        FUNC_0(&VAR_1->section[VAR_18 - 1], VAR_8, VAR_20, VAR_14, VAR_11, VAR_21, VAR_9, VAR_22, VAR_10);
    }
}
