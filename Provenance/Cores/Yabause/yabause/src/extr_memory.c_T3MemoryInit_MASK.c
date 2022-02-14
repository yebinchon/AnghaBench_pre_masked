
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {int * base_mem; int * mem; } ;
typedef TYPE_1__ T3Memory ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_1__*) ;

T3Memory * FUNC_2(u32 VAR_0)
{
   T3Memory * VAR_1;

   if ((VAR_1 = (T3Memory *) FUNC_0(1, sizeof(T3Memory))) == ((void*)0))
      return ((void*)0);

   if ((VAR_1->base_mem = (u8 *) FUNC_0(VAR_0, sizeof(u8))) == ((void*)0))
   {
      FUNC_1(VAR_1);
      return ((void*)0);
   }

   VAR_1->mem = VAR_1->base_mem + VAR_0;

   return VAR_1;
}
