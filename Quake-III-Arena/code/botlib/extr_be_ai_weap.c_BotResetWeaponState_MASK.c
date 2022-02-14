
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct weightconfig_s {int dummy; } ;
struct TYPE_3__ {int* weaponweightindex; struct weightconfig_s* weaponweightconfig; } ;
typedef TYPE_1__ bot_weaponstate_t ;


 TYPE_1__* FUNC_0 (int) ;

void FUNC_1(int VAR_0)
{
 struct weightconfig_s *VAR_1;
 int *VAR_2;
 bot_weaponstate_t *VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 if (!VAR_3) return;
 VAR_1 = VAR_3->weaponweightconfig;
 VAR_2 = VAR_3->weaponweightindex;


 VAR_3->weaponweightconfig = VAR_1;
 VAR_3->weaponweightindex = VAR_2;
}
