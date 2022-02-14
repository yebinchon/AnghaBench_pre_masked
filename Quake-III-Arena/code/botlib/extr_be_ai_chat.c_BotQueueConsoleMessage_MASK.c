
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int handle; int type; struct TYPE_6__* prev; struct TYPE_6__* next; int message; int time; } ;
typedef TYPE_1__ bot_consolemessage_t ;
struct TYPE_7__ {int handle; int numconsolemessages; TYPE_1__* firstmessage; TYPE_1__* lastmessage; } ;
typedef TYPE_2__ bot_chatstate_t ;
struct TYPE_8__ {int (* Print ) (int ,char*) ;} ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 TYPE_2__* FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int ,char*) ;

void FUNC_5(int VAR_3, int VAR_4, char *VAR_5)
{
 bot_consolemessage_t *VAR_6;
 bot_chatstate_t *VAR_7;

 VAR_7 = FUNC_2(VAR_3);
 if (!VAR_7) return;

 VAR_6 = FUNC_1();
 if (!VAR_6)
 {
  VAR_2.Print(VAR_1, "empty console message heap\n");
  return;
 }
 VAR_7->handle++;
 if (VAR_7->handle <= 0 || VAR_7->handle > 8192) VAR_7->handle = 1;
 VAR_6->handle = VAR_7->handle;
 VAR_6->time = FUNC_0();
 VAR_6->type = VAR_4;
 FUNC_3(VAR_6->message, VAR_5, VAR_0);
 VAR_6->next = ((void*)0);
 if (VAR_7->lastmessage)
 {
  VAR_7->lastmessage->next = VAR_6;
  VAR_6->prev = VAR_7->lastmessage;
  VAR_7->lastmessage = VAR_6;
 }
 else
 {
  VAR_7->lastmessage = VAR_6;
  VAR_7->firstmessage = VAR_6;
  VAR_6->prev = ((void*)0);
 }
 VAR_7->numconsolemessages++;
}
