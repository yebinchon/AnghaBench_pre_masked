
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct string_list {size_t size; TYPE_3__* elems; } ;
struct TYPE_13__ {int state_slot; } ;
struct TYPE_10__ {int savestate_auto_index; } ;
struct TYPE_14__ {TYPE_4__ ints; TYPE_1__ bools; } ;
typedef TYPE_5__ settings_t ;
struct TYPE_11__ {char const* savestate; } ;
struct TYPE_15__ {TYPE_2__ name; } ;
typedef TYPE_6__ global_t ;
typedef int elem_base ;
struct TYPE_12__ {char* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,unsigned int) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_5__*,int ,unsigned int) ;
 TYPE_5__* VAR_3 ;
 int FUNC_3 (struct string_list*) ;
 struct string_list* FUNC_4 (char*,int ,int *) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char*,char const*,size_t) ;
 int FUNC_7 (char*) ;
 TYPE_6__ VAR_4 ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char const*) ;
 char* FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char const*,int *,int ) ;

__attribute__((used)) static void FUNC_13(void)
{
   size_t VAR_5;
   char *VAR_6 = ((void*)0);
   char *VAR_7 = ((void*)0);

   size_t VAR_8 = VAR_2 * sizeof(char);
   struct string_list *VAR_9 = ((void*)0);
   unsigned VAR_10 = 0;
   settings_t *VAR_11 = VAR_3;
   global_t *VAR_12 = &VAR_4;

   if (!VAR_12 || !VAR_11->bools.savestate_auto_index)
      return;

   VAR_6 = (char*)FUNC_1(VAR_2, sizeof(*VAR_6));







   FUNC_6(VAR_6, VAR_12->name.savestate,
         VAR_8);

   VAR_9 = FUNC_4(VAR_6, VAR_0, ((void*)0));

   FUNC_7(VAR_6);

   if (!VAR_9)
      return;

   VAR_7 = (char*)FUNC_1(VAR_2, sizeof(*VAR_7));

   FUNC_5(VAR_7, VAR_12->name.savestate,
         VAR_8);

   for (VAR_5 = 0; VAR_5 < VAR_9->size; VAR_5++)
   {
      unsigned VAR_13;
      char VAR_14[128] = {0};
      const char *VAR_15 = ((void*)0);
      const char *VAR_16 = VAR_9->elems[VAR_5].data;

      FUNC_5(VAR_14, VAR_16, sizeof(VAR_14));

      if (FUNC_11(VAR_14, VAR_7) != VAR_14)
         continue;

      VAR_15 = VAR_16 + FUNC_10(VAR_16);
      while ((VAR_15 > VAR_16) && FUNC_8((int)VAR_15[-1]))
         VAR_15--;

      VAR_13 = (unsigned)FUNC_12(VAR_15, ((void*)0), 0);
      if (VAR_13 > VAR_10)
         VAR_10 = VAR_13;
   }

   FUNC_3(VAR_9);
   FUNC_7(VAR_7);

   FUNC_2(VAR_11, VAR_11->ints.state_slot, VAR_10);

   FUNC_0("%s: #%d\n",
         FUNC_9(VAR_1),
         VAR_10);
}
