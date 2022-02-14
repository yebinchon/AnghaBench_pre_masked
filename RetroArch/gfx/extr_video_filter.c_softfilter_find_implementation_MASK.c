
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct softfilter_implementation {int short_ident; } ;
struct TYPE_5__ {unsigned int num_plugs; TYPE_1__* plugs; } ;
typedef TYPE_2__ rarch_softfilter_t ;
struct TYPE_4__ {struct softfilter_implementation const* impl; } ;


 scalar_t__ FUNC_0 (int ,char const*) ;

__attribute__((used)) static const struct softfilter_implementation *
FUNC_1(rarch_softfilter_t *VAR_0, const char *VAR_1)
{
   unsigned VAR_2;

   for (VAR_2 = 0; VAR_2 < VAR_0->num_plugs; VAR_2++)
   {
      if (FUNC_0(VAR_0->plugs[VAR_2].impl->short_ident, VAR_1))
         return VAR_0->plugs[VAR_2].impl;
   }

   return ((void*)0);
}
