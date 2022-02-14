
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct netdrv_private {size_t chipset; int lock; void* mmio_addr; } ;
struct net_device {int flags; scalar_t__ mc_count; struct dev_mc_list* mc_list; int name; } ;
struct dev_mc_list {int dmi_addr; struct dev_mc_list* next; } ;
struct TYPE_2__ {int RxConfigMask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 scalar_t__ VAR_9 ;
 struct netdrv_private* FUNC_5 (struct net_device*) ;
 int VAR_10 ;
 TYPE_1__* VAR_11 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8 (struct net_device *VAR_12)
{
 struct netdrv_private *VAR_13 = FUNC_5(VAR_12);
 void *VAR_14 = VAR_13->mmio_addr;
 u32 VAR_15[2];
 int VAR_16, VAR_17;
 u32 VAR_18;

 FUNC_0 ("ENTER\n");

 FUNC_0 ("%s:   netdrv_set_rx_mode(%4.4x) done -- Rx config %8.8x.\n",
   VAR_12->name, VAR_12->flags, FUNC_1 (VAR_8));


 if (VAR_12->flags & VAR_6) {
  VAR_17 =
      VAR_1 | VAR_2 | VAR_3 |
      VAR_0;
  VAR_15[1] = VAR_15[0] = 0xffffffff;
 } else if ((VAR_12->mc_count > VAR_9)
     || (VAR_12->flags & VAR_5)) {

  VAR_17 = VAR_1 | VAR_2 | VAR_3;
  VAR_15[1] = VAR_15[0] = 0xffffffff;
 } else {
  struct dev_mc_list *VAR_19;
  VAR_17 = VAR_1 | VAR_2 | VAR_3;
  VAR_15[1] = VAR_15[0] = 0;
  for (VAR_16 = 0, VAR_19 = VAR_12->mc_list; VAR_19 && VAR_16 < VAR_12->mc_count;
       VAR_16++, VAR_19 = VAR_19->next) {
   int VAR_20 = FUNC_3(VAR_4, VAR_19->dmi_addr) >> 26;

   VAR_15[VAR_20 >> 5] |= 1 << (VAR_20 & 31);
  }
 }


 if (!FUNC_4 ())
  FUNC_6 (&VAR_13->lock);


 VAR_18 = VAR_10 | VAR_17 |
  (FUNC_1 (VAR_8) & VAR_11[VAR_13->chipset].RxConfigMask);
 FUNC_2 (VAR_8, VAR_18);
 FUNC_2 (VAR_7 + 0, VAR_15[0]);
 FUNC_2 (VAR_7 + 4, VAR_15[1]);

 if (!FUNC_4 ())
  FUNC_7 (&VAR_13->lock);

 FUNC_0 ("EXIT\n");
}
