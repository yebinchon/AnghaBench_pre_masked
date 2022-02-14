
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ w; scalar_t__ h; scalar_t__ c; int data; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (TYPE_1__,TYPE_1__,int,int ) ;
 TYPE_1__ FUNC_1 (TYPE_1__) ;
 int FUNC_2 (TYPE_1__,TYPE_1__,int ,int ) ;
 int FUNC_3 (int,int,int ,int) ;
 TYPE_1__ FUNC_4 (scalar_t__,scalar_t__,scalar_t__) ;

image FUNC_5(image VAR_0, image VAR_1, int VAR_2)
{
    if(VAR_0.w == 0) return FUNC_1(VAR_1);
    image VAR_3 = FUNC_4(VAR_0.w + VAR_1.w + VAR_2, (VAR_0.h > VAR_1.h) ? VAR_0.h : VAR_1.h, (VAR_0.c > VAR_1.c) ? VAR_0.c : VAR_1.c);
    FUNC_3(VAR_3.w*VAR_3.h*VAR_3.c, 1, VAR_3.data, 1);
    FUNC_2(VAR_0, VAR_3, 0, 0);
    FUNC_0(VAR_1, VAR_3, VAR_0.w + VAR_2, 0);
    return VAR_3;
}
