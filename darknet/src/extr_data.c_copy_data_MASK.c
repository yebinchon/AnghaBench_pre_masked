
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* y; void* X; int boxes; int num_boxes; scalar_t__ shallow; int h; int w; int member_0; } ;
typedef TYPE_1__ data ;


 void* FUNC_0 (void*) ;

data FUNC_1(data VAR_0)
{
    data VAR_1 = {0};
    VAR_1.w = VAR_0.w;
    VAR_1.h = VAR_0.h;
    VAR_1.shallow = 0;
    VAR_1.num_boxes = VAR_0.num_boxes;
    VAR_1.boxes = VAR_0.boxes;
    VAR_1.X = FUNC_0(VAR_0.X);
    VAR_1.y = FUNC_0(VAR_0.y);
    return VAR_1;
}
