
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int w; int h; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (TYPE_1__,TYPE_1__,int,int) ;
 int FUNC_1 (TYPE_1__) ;
 TYPE_1__ FUNC_2 (TYPE_1__,int,int) ;

void FUNC_3(image VAR_0, int VAR_1, int VAR_2, image VAR_3)
{
    int VAR_4 = VAR_0.w;
    int VAR_5 = VAR_0.h;
    if (((float)VAR_1/VAR_0.w) < ((float)VAR_2/VAR_0.h)) {
        VAR_4 = VAR_1;
        VAR_5 = (VAR_0.h * VAR_1)/VAR_0.w;
    } else {
        VAR_5 = VAR_2;
        VAR_4 = (VAR_0.w * VAR_2)/VAR_0.h;
    }
    image VAR_6 = FUNC_2(VAR_0, VAR_4, VAR_5);
    FUNC_0(VAR_6, VAR_3, (VAR_1-VAR_4)/2, (VAR_2-VAR_5)/2);
    FUNC_1(VAR_6);
}
