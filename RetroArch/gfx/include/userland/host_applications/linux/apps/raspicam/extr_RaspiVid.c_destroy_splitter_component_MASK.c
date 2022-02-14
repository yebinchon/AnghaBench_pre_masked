
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * output; } ;
struct TYPE_4__ {TYPE_2__* splitter_component; scalar_t__ splitter_pool; } ;
typedef TYPE_1__ RASPIVID_STATE ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(RASPIVID_STATE *VAR_1)
{

   if (VAR_1->splitter_pool)
   {
      FUNC_1(VAR_1->splitter_component->output[VAR_0], VAR_1->splitter_pool);
   }

   if (VAR_1->splitter_component)
   {
      FUNC_0(VAR_1->splitter_component);
      VAR_1->splitter_component = ((void*)0);
   }
}
