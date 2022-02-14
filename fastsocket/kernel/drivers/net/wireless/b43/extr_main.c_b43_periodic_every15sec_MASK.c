
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {scalar_t__ opensource; } ;
struct b43_phy {int txerr_cnt; TYPE_2__* ops; } ;
struct b43_wldev {int irq_count; int tx_count; int rx_count; int* irq_bit_count; int wl; TYPE_1__ fw; struct b43_phy phy; } ;
struct TYPE_4__ {int (* pwork_15sec ) (struct b43_wldev*) ;} ;


 unsigned int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct b43_wldev*,char*) ;
 scalar_t__ FUNC_3 (struct b43_wldev*,int ) ;
 int FUNC_4 (struct b43_wldev*,int ,int ) ;
 int FUNC_5 (struct b43_wldev*,int ,int ,int) ;
 int FUNC_6 (int ,char*,int,unsigned int,int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct b43_wldev*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(struct b43_wldev *VAR_4)
{
 struct b43_phy *VAR_5 = &VAR_4->phy;
 u16 VAR_6;

 if (VAR_4->fw.opensource) {


  VAR_6 = FUNC_4(VAR_4, VAR_2, VAR_3);
  if (FUNC_9(VAR_6)) {
   FUNC_7(VAR_4->wl, "Firmware watchdog: The firmware died!\n");
   FUNC_2(VAR_4, "Firmware watchdog");
   return;
  } else {
   FUNC_5(VAR_4, VAR_2,
     VAR_3, 1);
  }
 }

 if (VAR_5->ops->pwork_15sec)
  VAR_5->ops->pwork_15sec(VAR_4);

 FUNC_1(&VAR_5->txerr_cnt, VAR_1);
 FUNC_10();
}
