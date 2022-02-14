
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* trailer; scalar_t__ trailer_is_malloced; struct TYPE_4__* fdt; scalar_t__ fdt_is_malloced; } ;
typedef TYPE_1__ DTBLOB_T ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(DTBLOB_T *VAR_0)
{
   if (VAR_0)
   {
      if (VAR_0->fdt_is_malloced)
         FUNC_0(VAR_0->fdt);
      if (VAR_0->trailer_is_malloced)
         FUNC_0(VAR_0->trailer);
      FUNC_0(VAR_0);
   }
}
