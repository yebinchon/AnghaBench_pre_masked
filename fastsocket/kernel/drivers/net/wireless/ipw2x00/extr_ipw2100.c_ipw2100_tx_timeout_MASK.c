
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tx_errors; } ;
struct net_device {int name; TYPE_1__ stats; } ;
struct ipw2100_priv {TYPE_2__* ieee; } ;
struct TYPE_4__ {scalar_t__ iw_mode; } ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 struct ipw2100_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ipw2100_priv*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct ipw2100_priv *VAR_2 = FUNC_1(VAR_1);

 VAR_1->stats.tx_errors++;






 FUNC_0("%s: TX timed out.  Scheduling firmware restart.\n",
         VAR_1->name);
 FUNC_2(VAR_2);
}
