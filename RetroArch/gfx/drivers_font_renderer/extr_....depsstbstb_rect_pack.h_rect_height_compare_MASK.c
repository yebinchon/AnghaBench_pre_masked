
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ h; scalar_t__ w; } ;
typedef TYPE_1__ stbrp_rect ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
   stbrp_rect *VAR_2 = (stbrp_rect *) VAR_0;
   stbrp_rect *VAR_3 = (stbrp_rect *) VAR_1;
   if (VAR_2->h > VAR_3->h)
      return -1;
   if (VAR_2->h < VAR_3->h)
      return 1;
   return (VAR_2->w > VAR_3->w) ? -1 : (VAR_2->w < VAR_3->w);
}
