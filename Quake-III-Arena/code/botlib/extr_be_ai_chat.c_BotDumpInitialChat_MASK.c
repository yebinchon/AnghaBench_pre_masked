
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* firstchatmessage; int numchatmessages; int name; struct TYPE_5__* next; } ;
typedef TYPE_1__ bot_chattype_t ;
struct TYPE_6__ {int chatmessage; struct TYPE_6__* next; } ;
typedef TYPE_2__ bot_chatmessage_t ;
struct TYPE_7__ {TYPE_1__* types; } ;
typedef TYPE_3__ bot_chat_t ;


 int FUNC_0 (char*,...) ;

void FUNC_1(bot_chat_t *VAR_0)
{
 bot_chattype_t *VAR_1;
 bot_chatmessage_t *VAR_2;

 FUNC_0("{");
 for (VAR_1 = VAR_0->types; VAR_1; VAR_1 = VAR_1->next)
 {
  FUNC_0(" type \"%s\"", VAR_1->name);
  FUNC_0(" {");
  FUNC_0("  numchatmessages = %d", VAR_1->numchatmessages);
  for (VAR_2 = VAR_1->firstchatmessage; VAR_2; VAR_2 = VAR_2->next)
  {
   FUNC_0("  \"%s\"", VAR_2->chatmessage);
  }
  FUNC_0(" }");
 }
 FUNC_0("}");
}
