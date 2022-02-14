
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int weaponweightconfig; int weaponweightindex; } ;
typedef TYPE_1__ bot_weaponstate_t ;
struct TYPE_5__ {int (* Print ) (int ,char*,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__ VAR_4 ;
 int FUNC_4 (int ,char*,char*) ;
 int VAR_5 ;

int FUNC_5(int VAR_6, char *VAR_7)
{
 bot_weaponstate_t *VAR_8;

 VAR_8 = FUNC_1(VAR_6);
 if (!VAR_8) return VAR_1;
 FUNC_0(VAR_6);

 VAR_8->weaponweightconfig = FUNC_2(VAR_7);
 if (!VAR_8->weaponweightconfig)
 {
  VAR_4.Print(VAR_3, "couldn't load weapon config %s\n", VAR_7);
  return VAR_1;
 }
 if (!VAR_5) return VAR_0;
 VAR_8->weaponweightindex = FUNC_3(VAR_8->weaponweightconfig, VAR_5);
 return VAR_2;
}
