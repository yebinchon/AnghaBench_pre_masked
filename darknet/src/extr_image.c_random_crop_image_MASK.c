
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ h; scalar_t__ w; } ;
typedef TYPE_1__ image ;


 TYPE_1__ FUNC_0 (TYPE_1__,int,int,int,int) ;
 int FUNC_1 (int ,scalar_t__) ;

image FUNC_2(image VAR_0, int VAR_1, int VAR_2)
{
    int VAR_3 = FUNC_1(0, VAR_0.w - VAR_1);
    int VAR_4 = FUNC_1(0, VAR_0.h - VAR_2);
    image VAR_5 = FUNC_0(VAR_0, VAR_3, VAR_4, VAR_1, VAR_2);
    return VAR_5;
}
