
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int type; int subtype; TYPE_3__* first; struct TYPE_5__* next; } ;
typedef TYPE_1__ bot_matchtemplate_t ;
struct TYPE_6__ {char* string; struct TYPE_6__* next; } ;
typedef TYPE_2__ bot_matchstring_t ;
struct TYPE_7__ {scalar_t__ type; int variable; struct TYPE_7__* next; TYPE_2__* firststring; } ;
typedef TYPE_3__ bot_matchpiece_t ;
typedef int FILE ;


 int * FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,char*,...) ;

void FUNC_2(bot_matchtemplate_t *VAR_2)
{
 FILE *VAR_3;
 bot_matchtemplate_t *VAR_4;
 bot_matchpiece_t *VAR_5;
 bot_matchstring_t *VAR_6;

 VAR_3 = FUNC_0();
 if (!VAR_3) return;
 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next)
 {
         FUNC_1(VAR_3, "{ " );
  for (VAR_5 = VAR_4->first; VAR_5; VAR_5 = VAR_5->next)
  {
   if (VAR_5->type == VAR_0)
   {
    for (VAR_6 = VAR_5->firststring; VAR_6; VAR_6 = VAR_6->next)
    {
     FUNC_1(VAR_3, "\"%s\"", VAR_6->string);
     if (VAR_6->next) FUNC_1(VAR_3, "|");
    }
   }
   else if (VAR_5->type == VAR_1)
   {
    FUNC_1(VAR_3, "%d", VAR_5->variable);
   }
   if (VAR_5->next) FUNC_1(VAR_3, ", ");
  }
  FUNC_1(VAR_3, " = (%d, %d);}\n", VAR_4->type, VAR_4->subtype);
 }
}
