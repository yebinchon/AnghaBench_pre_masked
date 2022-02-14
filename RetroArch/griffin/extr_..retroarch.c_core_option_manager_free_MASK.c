
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; struct TYPE_4__* opts; scalar_t__ conf; int * vals; struct TYPE_4__* key; struct TYPE_4__* info; struct TYPE_4__* desc; int * val_labels; } ;
typedef TYPE_1__ core_option_manager_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(core_option_manager_t *VAR_0)
{
   size_t VAR_1;

   if (!VAR_0)
      return;

   for (VAR_1 = 0; VAR_1 < VAR_0->size; VAR_1++)
   {
      if (VAR_0->opts[VAR_1].desc)
         FUNC_1(VAR_0->opts[VAR_1].desc);
      if (VAR_0->opts[VAR_1].info)
         FUNC_1(VAR_0->opts[VAR_1].info);
      if (VAR_0->opts[VAR_1].key)
         FUNC_1(VAR_0->opts[VAR_1].key);

      if (VAR_0->opts[VAR_1].vals)
         FUNC_2(VAR_0->opts[VAR_1].vals);
      if (VAR_0->opts[VAR_1].val_labels)
         FUNC_2(VAR_0->opts[VAR_1].val_labels);

      VAR_0->opts[VAR_1].desc = ((void*)0);
      VAR_0->opts[VAR_1].info = ((void*)0);
      VAR_0->opts[VAR_1].key = ((void*)0);
      VAR_0->opts[VAR_1].vals = ((void*)0);
   }

   if (VAR_0->conf)
      FUNC_0(VAR_0->conf);
   FUNC_1(VAR_0->opts);
   FUNC_1(VAR_0);
}
