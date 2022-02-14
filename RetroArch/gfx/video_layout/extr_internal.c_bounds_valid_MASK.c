
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ w; scalar_t__ h; } ;
typedef TYPE_1__ video_layout_bounds_t ;



bool FUNC_0(const video_layout_bounds_t *VAR_0)
{
   return (VAR_0->w > 0 && VAR_0->h > 0);
}
