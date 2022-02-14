
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* firstsynonym; int context; struct TYPE_4__* next; } ;
typedef TYPE_1__ bot_synonymlist_t ;
struct TYPE_5__ {char* string; double weight; struct TYPE_5__* next; } ;
typedef TYPE_2__ bot_synonym_t ;
typedef int FILE ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,char*,...) ;

void FUNC_2(bot_synonymlist_t *VAR_0)
{
 FILE *VAR_1;
 bot_synonymlist_t *VAR_2;
 bot_synonym_t *VAR_3;

 VAR_1 = FUNC_0();
 if (!VAR_1) return;
 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
 {
         FUNC_1(VAR_1, "%ld : [", VAR_2->context);
  for (VAR_3 = VAR_2->firstsynonym; VAR_3; VAR_3 = VAR_3->next)
  {
   FUNC_1(VAR_1, "(\"%s\", %1.2f)", VAR_3->string, VAR_3->weight);
   if (VAR_3->next) FUNC_1(VAR_1, ", ");
  }
  FUNC_1(VAR_1, "]\n");
 }
}
