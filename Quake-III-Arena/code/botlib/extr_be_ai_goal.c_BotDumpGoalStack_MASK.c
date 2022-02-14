
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int goalstacktop; TYPE_1__* goalstack; } ;
typedef TYPE_2__ bot_goalstate_t ;
struct TYPE_4__ {int number; } ;


 int FUNC_0 (int ,char*,int) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (char*,int,char*) ;

void FUNC_3(int VAR_0)
{
 int VAR_1;
 bot_goalstate_t *VAR_2;
 char VAR_3[32];

 VAR_2 = FUNC_1(VAR_0);
 if (!VAR_2) return;
 for (VAR_1 = 1; VAR_1 <= VAR_2->goalstacktop; VAR_1++)
 {
  FUNC_0(VAR_2->goalstack[VAR_1].number, VAR_3, 32);
  FUNC_2("%d: %s", VAR_1, VAR_3);
 }
}
