
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int w; int h; int c; int data; } ;
typedef TYPE_1__ image ;


 TYPE_1__ FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_1__,float,float,float) ;
 int FUNC_2 (TYPE_1__) ;
 TYPE_1__ FUNC_3 (TYPE_1__) ;
 TYPE_1__ FUNC_4 (char*,int ,int ,int) ;
 float FUNC_5 (int ,int) ;
 int FUNC_6 (char*,float,...) ;
 float FUNC_7 (float) ;
 float FUNC_8 (float,float) ;
 TYPE_1__ FUNC_9 (TYPE_1__,int ,double,int,int,int,int) ;
 int FUNC_10 (TYPE_1__,char*,int) ;

void FUNC_11(char *VAR_0)
{
    image VAR_1 = FUNC_4(VAR_0, 0,0, 3);
    float VAR_2 = FUNC_5(VAR_1.data, VAR_1.w*VAR_1.h*VAR_1.c);
    FUNC_6("L2 Norm: %f\n", VAR_2);
    image VAR_3 = FUNC_3(VAR_1);

    image VAR_4 = FUNC_0(VAR_1);
    image VAR_5 = FUNC_0(VAR_1);
    image VAR_6 = FUNC_0(VAR_1);
    image VAR_7 = FUNC_0(VAR_1);
    FUNC_1(VAR_4, .1, 1.5, 1.5);
    FUNC_1(VAR_5, -.1, .66666, .66666);
    FUNC_1(VAR_6, .1, 1.5, .66666);
    FUNC_1(VAR_7, .1, .66666, 1.5);


    FUNC_10(VAR_1, "Original", 1);
    FUNC_10(VAR_3, "Gray", 1);
    FUNC_10(VAR_4, "C1", 1);
    FUNC_10(VAR_5, "C2", 1);
    FUNC_10(VAR_6, "C3", 1);
    FUNC_10(VAR_7, "C4", 1);
}
