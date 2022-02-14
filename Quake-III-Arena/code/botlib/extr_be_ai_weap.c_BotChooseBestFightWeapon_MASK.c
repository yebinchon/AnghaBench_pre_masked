
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int numweapons; TYPE_1__* weaponinfo; } ;
typedef TYPE_2__ weaponconfig_t ;
struct TYPE_8__ {int* weaponweightindex; int weaponweightconfig; } ;
typedef TYPE_3__ bot_weaponstate_t ;
struct TYPE_6__ {int valid; } ;


 TYPE_3__* FUNC_0 (int) ;
 float FUNC_1 (int*,int ,int) ;
 TYPE_2__* VAR_0 ;

int FUNC_2(int VAR_1, int *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 float VAR_6, VAR_7;
 weaponconfig_t *VAR_8;
 bot_weaponstate_t *VAR_9;

 VAR_9 = FUNC_0(VAR_1);
 if (!VAR_9) return 0;
 VAR_8 = VAR_0;
 if (!VAR_0) return 0;


 if (!VAR_9->weaponweightconfig) return 0;

 VAR_7 = 0;
 VAR_5 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_8->numweapons; VAR_3++)
 {
  if (!VAR_8->weaponinfo[VAR_3].valid) continue;
  VAR_4 = VAR_9->weaponweightindex[VAR_3];
  if (VAR_4 < 0) continue;
  VAR_6 = FUNC_1(VAR_2, VAR_9->weaponweightconfig, VAR_4);
  if (VAR_6 > VAR_7)
  {
   VAR_7 = VAR_6;
   VAR_5 = VAR_3;
  }
 }
 return VAR_5;
}
