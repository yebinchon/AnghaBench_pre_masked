
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * fullpath; scalar_t__ content_icon; scalar_t__ icon; scalar_t__ y; scalar_t__ x; scalar_t__ zoom; scalar_t__ label_alpha; scalar_t__ alpha; } ;
typedef TYPE_1__ stripes_node_t ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static stripes_node_t *FUNC_1(void)
{
   stripes_node_t *VAR_0 = (stripes_node_t*)FUNC_0(sizeof(*VAR_0));

   VAR_0->alpha = VAR_0->label_alpha = 0;
   VAR_0->zoom = VAR_0->x = VAR_0->y = 0;
   VAR_0->icon = VAR_0->content_icon = 0;
   VAR_0->fullpath = ((void*)0);

   return VAR_0;
}
