
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int w; int h; int c; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (TYPE_1__,TYPE_1__,int,int) ;
 int FUNC_1 (TYPE_1__,double) ;
 int FUNC_2 (TYPE_1__) ;
 TYPE_1__ FUNC_3 (int,int,int ) ;
 TYPE_1__ FUNC_4 (TYPE_1__,int,int) ;

image FUNC_5(image VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3 = VAR_0.w;
    int VAR_4 = VAR_0.h;
    if (((float)VAR_1/VAR_0.w) < ((float)VAR_2/VAR_0.h)) {
        VAR_3 = VAR_1;
        VAR_4 = (VAR_0.h * VAR_1)/VAR_0.w;
    } else {
        VAR_4 = VAR_2;
        VAR_3 = (VAR_0.w * VAR_2)/VAR_0.h;
    }
    image VAR_5 = FUNC_4(VAR_0, VAR_3, VAR_4);
    image VAR_6 = FUNC_3(VAR_1, VAR_2, VAR_0.c);
    FUNC_1(VAR_6, .5);


    FUNC_0(VAR_5, VAR_6, (VAR_1-VAR_3)/2, (VAR_2-VAR_4)/2);
    FUNC_2(VAR_5);
    return VAR_6;
}
