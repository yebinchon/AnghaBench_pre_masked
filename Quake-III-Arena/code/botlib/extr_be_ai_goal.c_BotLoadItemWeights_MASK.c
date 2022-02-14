
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int itemweightconfig; int itemweightindex; } ;
typedef TYPE_1__ bot_goalstate_t ;
struct TYPE_5__ {int (* Print ) (int ,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,char*) ;

int FUNC_4(int VAR_5, char *VAR_6)
{
 bot_goalstate_t *VAR_7;

 VAR_7 = FUNC_0(VAR_5);
 if (!VAR_7) return VAR_0;

 VAR_7->itemweightconfig = FUNC_2(VAR_6);
 if (!VAR_7->itemweightconfig)
 {
  VAR_3.Print(VAR_2, "couldn't load weights\n");
  return VAR_0;
 }

 if (!VAR_4) return VAR_0;

 VAR_7->itemweightindex = FUNC_1(VAR_7->itemweightconfig, VAR_4);

 return VAR_1;
}
