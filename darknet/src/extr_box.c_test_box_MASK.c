
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {float dx; float dy; float dw; float dh; } ;
typedef TYPE_1__ dbox ;
struct TYPE_9__ {double member_0; double member_1; int member_2; int member_3; } ;
typedef TYPE_2__ box ;


 float FUNC_0 (TYPE_2__,TYPE_2__) ;
 TYPE_1__ FUNC_1 (TYPE_2__,TYPE_2__) ;
 int FUNC_2 (char*,float,...) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5()
{
    FUNC_3();
    FUNC_4();
    box VAR_0 = {0, 0, 1, 1};
    box VAR_1= {0+.00001, 0, 1, 1};
    box VAR_2= {0, 0+.00001, 1, 1};
    box VAR_3= {0, 0, 1+.00001, 1};
    box VAR_4= {0, 0, 1, 1+.00001};

    box VAR_5 = {.5, 0, .2, .2};

    float VAR_6 = FUNC_0(VAR_0,VAR_5);
    VAR_6 = (1-VAR_6)*(1-VAR_6);
    FUNC_2("%f\n", VAR_6);
    dbox VAR_7 = FUNC_1(VAR_0, VAR_5);
    FUNC_2("%f %f %f %f\n", VAR_7.dx, VAR_7.dy, VAR_7.dw, VAR_7.dh);

    float VAR_8 = FUNC_0(VAR_1, VAR_5);
    float VAR_9 = FUNC_0(VAR_2, VAR_5);
    float VAR_10 = FUNC_0(VAR_3, VAR_5);
    float VAR_11 = FUNC_0(VAR_4, VAR_5);
    VAR_8 = ((1-VAR_8)*(1-VAR_8) - VAR_6)/(.00001);
    VAR_9 = ((1-VAR_9)*(1-VAR_9) - VAR_6)/(.00001);
    VAR_10 = ((1-VAR_10)*(1-VAR_10) - VAR_6)/(.00001);
    VAR_11 = ((1-VAR_11)*(1-VAR_11) - VAR_6)/(.00001);
    FUNC_2("manual %f %f %f %f\n", VAR_8, VAR_9, VAR_10, VAR_11);
}
