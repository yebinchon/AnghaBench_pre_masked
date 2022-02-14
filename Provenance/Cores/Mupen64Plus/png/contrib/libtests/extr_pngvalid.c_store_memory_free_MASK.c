
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ max; int current; int store; int mark; } ;
typedef TYPE_1__ store_pool ;
struct TYPE_7__ {scalar_t__ mark; scalar_t__ size; TYPE_1__* pool; } ;
typedef TYPE_2__ store_memory ;
typedef int png_const_structp ;
typedef scalar_t__ png_bytep ;
typedef scalar_t__ png_alloc_size_t ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;

__attribute__((used)) static void
FUNC_3(png_const_structp VAR_0, store_pool *VAR_1, store_memory *VAR_2)
{




   if (VAR_2->pool != VAR_1)
      FUNC_2(VAR_1->store, VAR_0, "memory corrupted (pool)");

   else if (FUNC_1(VAR_2->mark, VAR_1->mark, sizeof VAR_2->mark) != 0)
      FUNC_2(VAR_1->store, VAR_0, "memory corrupted (start)");


   else
   {
      png_alloc_size_t VAR_3 = VAR_2->size;

      if (VAR_3 > VAR_1->max)
         FUNC_2(VAR_1->store, VAR_0, "memory corrupted (size)");

      else if (FUNC_1((png_bytep)(VAR_2+1)+VAR_3, VAR_1->mark, sizeof VAR_1->mark)
         != 0)
         FUNC_2(VAR_1->store, VAR_0, "memory corrupted (end)");


      else
         {
         VAR_1->current -= VAR_3;
         FUNC_0(VAR_2);
         }
   }
}
