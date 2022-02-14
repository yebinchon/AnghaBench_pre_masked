
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned long context; TYPE_1__* firstsynonym; struct TYPE_6__* next; } ;
typedef TYPE_2__ bot_synonymlist_t ;
struct TYPE_7__ {int string; struct TYPE_7__* next; } ;
typedef TYPE_3__ bot_synonym_t ;
struct TYPE_5__ {int string; TYPE_3__* next; } ;


 int FUNC_0 (char*,int ,int ) ;
 TYPE_2__* VAR_0 ;

void FUNC_1(char *VAR_1, unsigned long int VAR_2)
{
 bot_synonymlist_t *VAR_3;
 bot_synonym_t *VAR_4;

 for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next)
 {
  if (!(VAR_3->context & VAR_2)) continue;
  for (VAR_4 = VAR_3->firstsynonym->next; VAR_4; VAR_4 = VAR_4->next)
  {
   FUNC_0(VAR_1, VAR_4->string, VAR_3->firstsynonym->string);
  }
 }
}
