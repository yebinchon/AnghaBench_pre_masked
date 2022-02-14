
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* firstchatmessage; int name; struct TYPE_6__* next; } ;
typedef TYPE_1__ bot_chattype_t ;
struct TYPE_7__ {TYPE_4__* chat; } ;
typedef TYPE_2__ bot_chatstate_t ;
struct TYPE_8__ {float time; char* chatmessage; struct TYPE_8__* next; } ;
typedef TYPE_3__ bot_chatmessage_t ;
struct TYPE_9__ {TYPE_1__* types; } ;
typedef TYPE_4__ bot_chat_t ;


 float FUNC_0 () ;
 float VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;

char *FUNC_3(bot_chatstate_t *VAR_1, char *VAR_2)
{
 int VAR_3, VAR_4;
 float VAR_5;
 bot_chattype_t *VAR_6;
 bot_chatmessage_t *VAR_7, *VAR_8;
 bot_chat_t *VAR_9;

 VAR_9 = VAR_1->chat;
 for (VAR_6 = VAR_9->types; VAR_6; VAR_6 = VAR_6->next)
 {
  if (!FUNC_1(VAR_6->name, VAR_2))
  {
   VAR_4 = 0;
   for (VAR_7 = VAR_6->firstchatmessage; VAR_7; VAR_7 = VAR_7->next)
   {
    if (VAR_7->time > FUNC_0()) continue;
    VAR_4++;
   }

   if (VAR_4 <= 0)
   {
    VAR_5 = 0;
    VAR_8 = ((void*)0);
    for (VAR_7 = VAR_6->firstchatmessage; VAR_7; VAR_7 = VAR_7->next)
    {
     if (!VAR_5 || VAR_7->time < VAR_5)
     {
      VAR_8 = VAR_7;
      VAR_5 = VAR_7->time;
     }
    }
    if (VAR_8) return VAR_8->chatmessage;
   }
   else
   {
    VAR_3 = FUNC_2() * VAR_4;
    for (VAR_7 = VAR_6->firstchatmessage; VAR_7; VAR_7 = VAR_7->next)
    {
     if (VAR_7->time > FUNC_0()) continue;
     if (--VAR_3 < 0)
     {
      VAR_7->time = FUNC_0() + VAR_0;
      return VAR_7->chatmessage;
     }
    }
   }
   return ((void*)0);
  }
 }
 return ((void*)0);
}
