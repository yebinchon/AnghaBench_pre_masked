
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ chd; struct TYPE_4__* hunkmem; } ;
typedef TYPE_1__ chdstream_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(chdstream_t *VAR_0)
{
   if (VAR_0)
   {
      if (VAR_0->hunkmem)
         FUNC_1(VAR_0->hunkmem);
      if (VAR_0->chd)
         FUNC_0(VAR_0->chd);
      FUNC_1(VAR_0);
   }
}
