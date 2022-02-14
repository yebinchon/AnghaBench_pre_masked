
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int w; int h; } ;
typedef TYPE_1__ image ;


 TYPE_1__ FUNC_0 (TYPE_1__,int,int,int,int) ;
 int FUNC_1 (TYPE_1__) ;
 TYPE_1__ FUNC_2 (TYPE_1__,int,int) ;

image FUNC_3(image VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3 = (VAR_0.w < VAR_0.h) ? VAR_0.w : VAR_0.h;
    image VAR_4 = FUNC_0(VAR_0, (VAR_0.w - VAR_3) / 2, (VAR_0.h - VAR_3)/2, VAR_3, VAR_3);
    image VAR_5 = FUNC_2(VAR_4, VAR_1, VAR_2);
    FUNC_1(VAR_4);
    return VAR_5;
}
