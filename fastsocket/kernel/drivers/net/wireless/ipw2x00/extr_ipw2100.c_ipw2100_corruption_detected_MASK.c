
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ipw2100_status {int dummy; } ;
struct TYPE_5__ {struct ipw2100_status* drv; } ;
struct ipw2100_priv {TYPE_3__* net_dev; int fatal_error; TYPE_1__ status_queue; } ;
struct TYPE_6__ {int rx_errors; } ;
struct TYPE_7__ {int name; TYPE_2__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct ipw2100_priv*,int *,int,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (TYPE_3__*,int ,int*) ;
 int FUNC_4 (struct ipw2100_priv*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct ipw2100_priv *VAR_8, int VAR_9)
{






 FUNC_0(": PCI latency error detected at 0x%04zX.\n",
         VAR_9 * sizeof(struct ipw2100_status));
 VAR_8->fatal_error = VAR_0;
 VAR_8->net_dev->stats.rx_errors++;
 FUNC_4(VAR_8);
}
