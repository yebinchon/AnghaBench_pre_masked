
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; struct TYPE_5__* prev; } ;
typedef TYPE_1__ bot_consolemessage_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;

void FUNC_3(void)
{
 int VAR_2, VAR_3;

 if (VAR_0) FUNC_0(VAR_0);

 VAR_3 = (int) FUNC_2("max_messages", "1024");
 VAR_0 = (bot_consolemessage_t *) FUNC_1(VAR_3 *
            sizeof(bot_consolemessage_t));
 VAR_0[0].prev = ((void*)0);
 VAR_0[0].next = &VAR_0[1];
 for (VAR_2 = 1; VAR_2 < VAR_3-1; VAR_2++)
 {
  VAR_0[VAR_2].prev = &VAR_0[VAR_2 - 1];
  VAR_0[VAR_2].next = &VAR_0[VAR_2 + 1];
 }
 VAR_0[VAR_3-1].prev = &VAR_0[VAR_3-2];
 VAR_0[VAR_3-1].next = ((void*)0);

 VAR_1 = VAR_0;
}
