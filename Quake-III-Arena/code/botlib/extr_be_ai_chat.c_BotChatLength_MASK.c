
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chatmessage; } ;
typedef TYPE_1__ bot_chatstate_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ) ;

int FUNC_2(int VAR_0)
{
 bot_chatstate_t *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1) return 0;
 return FUNC_1(VAR_1->chatmessage);
}
