
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
 int FUNC_2 (char*,float,float,float,float) ;

void FUNC_3()
{
    box VAR_0 = {0, 0, 1, 1};
    box VAR_1= {0+.0001, 0, 1, 1};
    box VAR_2= {0, 0+.0001, 1, 1};
    box VAR_3= {0, 0, 1+.0001, 1};
    box VAR_4= {0, 0, 1, 1+.0001};

    box VAR_5 = {.5, .5, .2, .2};
    dbox VAR_6 = FUNC_1(VAR_0,VAR_5);
    FUNC_2("Inter: %f %f %f %f\n", VAR_6.dx, VAR_6.dy, VAR_6.dw, VAR_6.dh);
    float VAR_7 = FUNC_0(VAR_0, VAR_5);
    float VAR_8 = FUNC_0(VAR_1, VAR_5);
    float VAR_9 = FUNC_0(VAR_2, VAR_5);
    float VAR_10 = FUNC_0(VAR_3, VAR_5);
    float VAR_11 = FUNC_0(VAR_4, VAR_5);
    VAR_8 = (VAR_8 - VAR_7)/(.0001);
    VAR_9 = (VAR_9 - VAR_7)/(.0001);
    VAR_10 = (VAR_10 - VAR_7)/(.0001);
    VAR_11 = (VAR_11 - VAR_7)/(.0001);
    FUNC_2("Inter Manual %f %f %f %f\n", VAR_8, VAR_9, VAR_10, VAR_11);
}
