
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; } ;
typedef TYPE_1__ bot_stringlist_t ;
struct TYPE_9__ {TYPE_3__* firstchatmessage; struct TYPE_9__* next; } ;
typedef TYPE_2__ bot_replychat_t ;
struct TYPE_10__ {int chatmessage; struct TYPE_10__* next; } ;
typedef TYPE_3__ bot_chatmessage_t ;


 TYPE_1__* FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(bot_replychat_t *VAR_0)
{
 bot_replychat_t *VAR_1;
 bot_chatmessage_t *VAR_2;
 bot_stringlist_t *VAR_3, *VAR_4, *VAR_5;

 VAR_3 = ((void*)0);
 for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
 {
  for (VAR_2 = VAR_1->firstchatmessage; VAR_2; VAR_2 = VAR_2->next)
  {
   VAR_3 = FUNC_0(VAR_2->chatmessage, VAR_3);
  }
 }
 for (VAR_4 = VAR_3; VAR_4; VAR_4 = VAR_5)
 {
  VAR_5 = VAR_4->next;
  FUNC_1(VAR_4);
 }
}
