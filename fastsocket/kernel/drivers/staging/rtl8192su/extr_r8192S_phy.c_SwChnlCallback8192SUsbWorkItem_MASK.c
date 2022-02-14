
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct r8192_priv {void* SwChnlInProgress; int chan; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ bInSetPower; } ;
struct TYPE_4__ {void* SwChnlInProgress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;
 TYPE_2__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_3 (struct net_device*,int ) ;

void FUNC_4(struct net_device *VAR_6 )
{
 struct r8192_priv *VAR_7 = FUNC_2(VAR_6);

 FUNC_0(VAR_1, "==> SwChnlCallback8192SUsbWorkItem()\n");
 FUNC_3(VAR_6, VAR_7->chan);
 VAR_7->SwChnlInProgress = VAR_3;

 FUNC_0(VAR_1, "<== SwChnlCallback8192SUsbWorkItem()\n");
}
