
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct ipw2100_priv {int rf_kill; scalar_t__ stop_rf_kill; int status; TYPE_3__* ieee; TYPE_1__* net_dev; } ;
struct TYPE_5__ {int wiphy; } ;
struct TYPE_6__ {TYPE_2__ wdev; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct ipw2100_priv *VAR_2, u32 VAR_3)
{
 FUNC_0("%s: RF Kill state changed to radio OFF.\n",
         VAR_2->net_dev->name);


 FUNC_4(VAR_2->ieee->wdev.wiphy, 1);
 VAR_2->status |= VAR_1;


 VAR_2->stop_rf_kill = 0;
 FUNC_1(&VAR_2->rf_kill);
 FUNC_3(&VAR_2->rf_kill, FUNC_2(VAR_0));
}
