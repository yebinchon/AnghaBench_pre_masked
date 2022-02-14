
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int chatmessage; } ;
typedef TYPE_1__ bot_chatstate_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int ,int) ;

void FUNC_4(int VAR_0, char *VAR_1, int VAR_2)
{
 bot_chatstate_t *VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (!VAR_3) return;

 FUNC_1(VAR_3->chatmessage);
 FUNC_3(VAR_1, VAR_3->chatmessage, VAR_2-1);
 VAR_1[VAR_2-1] = '\0';

 FUNC_2(VAR_3->chatmessage, "");
}
