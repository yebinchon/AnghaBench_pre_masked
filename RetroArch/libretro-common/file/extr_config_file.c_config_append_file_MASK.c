
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * entries; TYPE_1__* tail; } ;
typedef TYPE_2__ config_file_t ;
struct TYPE_6__ {int * next; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (char const*) ;

bool FUNC_2(config_file_t *VAR_0, const char *VAR_1)
{
   config_file_t *VAR_2 = FUNC_1(VAR_1);
   if (!VAR_2)
      return 0;

   if (VAR_2->tail)
   {
      VAR_2->tail->next = VAR_0->entries;
      VAR_0->entries = VAR_2->entries;
      VAR_2->entries = ((void*)0);
   }

   FUNC_0(VAR_2);
   return 1;
}
