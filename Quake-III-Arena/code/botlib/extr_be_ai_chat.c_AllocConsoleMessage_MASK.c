
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * prev; struct TYPE_4__* next; } ;
typedef TYPE_1__ bot_consolemessage_t ;


 TYPE_1__* VAR_0 ;

bot_consolemessage_t *FUNC_0(void)
{
 bot_consolemessage_t *VAR_1;
 VAR_1 = VAR_0;
 if (VAR_0) VAR_0 = VAR_0->next;
 if (VAR_0) VAR_0->prev = ((void*)0);
 return VAR_1;
}
