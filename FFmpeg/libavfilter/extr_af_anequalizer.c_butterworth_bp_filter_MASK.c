
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
 int FUNC_0 (TYPE_2__*,double,double,double,double,double,double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double,double) ;
 double FUNC_4 (double) ;
 double FUNC_5 (double) ;
 double FUNC_6 (double) ;

__attribute__((used)) static void FUNC_7(EqualizatorFilter *VAR_1,
                                  int VAR_2, double VAR_3, double VAR_4,
                                  double VAR_5, double VAR_6, double VAR_7)
{
    double VAR_8, VAR_9, VAR_10, VAR_11;
    double VAR_12;
    int VAR_13 = VAR_2 % 2;
    int VAR_14 = (VAR_2 - VAR_13) / 2;
    int VAR_15;

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

    VAR_12 = FUNC_5((VAR_5 * VAR_5 - VAR_6 * VAR_6) / (VAR_6 * VAR_6 - VAR_7 * VAR_7));
    VAR_8 = FUNC_3(VAR_5, 1.0 / VAR_2);
    VAR_10 = FUNC_3(VAR_7, 1.0 / VAR_2);
    VAR_11 = FUNC_3(VAR_12, -1.0 / VAR_2) * FUNC_6(VAR_4/2);
    VAR_9 = FUNC_1(VAR_3);

    for (VAR_15 = 1; VAR_15 <= VAR_14; VAR_15++) {
        double VAR_16 = (2.0 * VAR_15 - 1) / VAR_2;
        double VAR_17 = FUNC_4(VAR_0 * VAR_16 / 2.0);
        double VAR_18 = VAR_11 * VAR_11 + 2 * VAR_17 * VAR_11 + 1;

        FUNC_0(&VAR_1->section[VAR_15 - 1], VAR_11, VAR_17, VAR_8, VAR_10, VAR_18, VAR_9);
    }
}
