
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int w; int h; int c; int data; } ;
typedef TYPE_1__ image ;


 TYPE_1__ FUNC_0 (TYPE_1__,int ,int,int,int) ;
 float FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__) ;

int FUNC_4(image VAR_0, image VAR_1, int VAR_2, int VAR_3)
{
    if(VAR_2 == VAR_3) return VAR_2;
    int VAR_4 = FUNC_2((VAR_2 + VAR_3) / 2.);
    image VAR_5 = FUNC_0(VAR_1, 0, VAR_4, VAR_1.w, VAR_1.h);
    image VAR_6 = FUNC_0(VAR_1, 0, VAR_4+1, VAR_1.w, VAR_1.h);
    float VAR_7 = FUNC_1(VAR_5, VAR_0.data, VAR_0.w*VAR_0.h*VAR_0.c, 10);
    float VAR_8 = FUNC_1(VAR_6, VAR_0.data, VAR_0.w*VAR_0.h*VAR_0.c, 10);
    FUNC_3(VAR_5);
    FUNC_3(VAR_6);
    if(VAR_7 < VAR_8) return FUNC_4(VAR_0, VAR_1, VAR_2, VAR_4);
    else return FUNC_4(VAR_0, VAR_1, VAR_4+1, VAR_3);
}
