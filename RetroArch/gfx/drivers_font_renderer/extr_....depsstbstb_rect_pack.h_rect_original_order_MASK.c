
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ was_packed; } ;
typedef TYPE_1__ stbrp_rect ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
   stbrp_rect *VAR_2 = (stbrp_rect *) VAR_0;
   stbrp_rect *VAR_3 = (stbrp_rect *) VAR_1;
   return (VAR_2->was_packed < VAR_3->was_packed) ? -1 : (VAR_2->was_packed > VAR_3->was_packed);
}
