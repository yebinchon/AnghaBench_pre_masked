
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* firstchatmessage; struct TYPE_6__* string; scalar_t__ match; struct TYPE_6__* keys; } ;
typedef TYPE_1__ bot_replychatkey_t ;
typedef TYPE_1__ bot_replychat_t ;
typedef TYPE_1__ bot_chatmessage_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(bot_replychat_t *VAR_0)
{
 bot_replychat_t *VAR_1, *VAR_2;
 bot_replychatkey_t *VAR_3, *VAR_4;
 bot_chatmessage_t *VAR_5, *VAR_6;

 for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_2)
 {
  VAR_2 = VAR_1->next;
  for (VAR_3 = VAR_1->keys; VAR_3; VAR_3 = VAR_4)
  {
   VAR_4 = VAR_3->next;
   if (VAR_3->match) FUNC_0(VAR_3->match);
   if (VAR_3->string) FUNC_1(VAR_3->string);
   FUNC_1(VAR_3);
  }
  for (VAR_5 = VAR_1->firstchatmessage; VAR_5; VAR_5 = VAR_6)
  {
   VAR_6 = VAR_5->next;
   FUNC_1(VAR_5);
  }
  FUNC_1(VAR_1);
 }
}
