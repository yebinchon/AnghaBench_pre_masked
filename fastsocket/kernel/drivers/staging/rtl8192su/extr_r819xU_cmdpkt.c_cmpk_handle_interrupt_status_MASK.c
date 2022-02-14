
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_5__ {int txbeaconerr; int txbeaconokint; } ;
struct r8192_priv {TYPE_2__ stats; TYPE_1__* ieee80211; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int length; int interrupt_status; } ;
typedef TYPE_3__ cmpk_intr_sta_t ;
struct TYPE_4__ {scalar_t__ iw_mode; int bibsscoordinator; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct net_device*) ;
 struct r8192_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void
FUNC_3(
 struct net_device *VAR_4,
 u8* VAR_5)
{
 cmpk_intr_sta_t VAR_6;
 struct r8192_priv *VAR_7 = FUNC_2(VAR_4);

 FUNC_0("---> cmpk_Handle_Interrupt_Status()\n");
 VAR_6.length = VAR_5[1];
 if (VAR_6.length != (sizeof(cmpk_intr_sta_t) - 2))
 {
  FUNC_0("cmpk_Handle_Interrupt_Status: wrong length!\n");
  return;
 }



 if( VAR_7->ieee80211->iw_mode == VAR_3)
 {

  VAR_6.interrupt_status = *((u32 *)(VAR_5 + 4));


  FUNC_0("interrupt status = 0x%x\n", VAR_6.interrupt_status);

  if (VAR_6.interrupt_status & VAR_2)
  {
   VAR_7->ieee80211->bibsscoordinator = 1;
   VAR_7->stats.txbeaconokint++;
  }
  else if (VAR_6.interrupt_status & VAR_1)
  {
   VAR_7->ieee80211->bibsscoordinator = 0;
   VAR_7->stats.txbeaconerr++;
  }

  if (VAR_6.interrupt_status & VAR_0)
  {
   FUNC_1(VAR_4);
  }

 }




 FUNC_0("<---- cmpk_handle_interrupt_status()\n");

}
