
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int handle; int * prev; int next; } ;
typedef TYPE_1__ bot_consolemessage_t ;
struct TYPE_7__ {scalar_t__ firstmessage; } ;
typedef TYPE_2__ bot_chatstate_t ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int) ;

int FUNC_2(int VAR_0, bot_consolemessage_t *VAR_1)
{
 bot_chatstate_t *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2) return 0;
 if (VAR_2->firstmessage)
 {
  FUNC_1(VAR_1, VAR_2->firstmessage, sizeof(bot_consolemessage_t));
  VAR_1->next = *(VAR_1->prev = ((void*)0));
  return VAR_1->handle;
 }
 return 0;
}
