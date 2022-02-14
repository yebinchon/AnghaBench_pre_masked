
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int h; int w; int c; int data; } ;
typedef TYPE_1__ image ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int) ;

image FUNC_2(image VAR_0)
{
    image VAR_1 = VAR_0;
    VAR_1.data = FUNC_0(VAR_0.h*VAR_0.w*VAR_0.c, sizeof(float));
    FUNC_1(VAR_1.data, VAR_0.data, VAR_0.h*VAR_0.w*VAR_0.c*sizeof(float));
    return VAR_1;
}
