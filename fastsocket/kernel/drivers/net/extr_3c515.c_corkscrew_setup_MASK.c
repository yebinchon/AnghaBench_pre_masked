
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnp_dev {int dev; } ;
struct net_device {int base_addr; int irq; int dma; int mem_start; unsigned int dev_addr; int if_port; int watchdog_timeo; int * ethtool_ops; int * netdev_ops; int name; } ;
struct corkscrew_private {char* product_name; int options; int media_override; int full_duplex; int bus_master; int available_media; int default_media; int autoselect; unsigned int capabilities; int full_bus_master_tx; int full_bus_master_rx; int lock; int list; struct net_device* our_dev; int * dev; } ;
typedef int __u32 ;
typedef int __be16 ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int *) ;
 TYPE_1__* VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 struct corkscrew_private* FUNC_5 (struct net_device*) ;
 int* VAR_18 ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (struct pnp_dev*,int ) ;
 int FUNC_8 (char*,unsigned int) ;
 int FUNC_9 (char*,int,...) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct net_device*) ;
 scalar_t__ FUNC_12 (int,char*) ;
 int VAR_19 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(struct net_device *VAR_20, int VAR_21,
       struct pnp_dev *VAR_22, int VAR_23)
{
 struct corkscrew_private *VAR_24 = FUNC_5(VAR_20);
 unsigned int VAR_25[0x40], VAR_26 = 0;
 int VAR_27;
 int VAR_28;
 VAR_28 = FUNC_3(VAR_21 + 0x2002) & 15;


 VAR_20->base_addr = VAR_21;
 VAR_20->irq = VAR_28;
 VAR_20->dma = FUNC_3(VAR_21 + 0x2000) & 7;
 VAR_24->product_name = "3c515";
 VAR_24->options = VAR_20->mem_start;
 VAR_24->our_dev = VAR_20;

 if (!VAR_24->options) {
   if (VAR_23 >= VAR_3)
   VAR_24->options = -1;
  else
   VAR_24->options = VAR_18[VAR_23];
 }

 if (VAR_24->options >= 0) {
  VAR_24->media_override = VAR_24->options & 7;
  if (VAR_24->media_override == 2)
   VAR_24->media_override = 0;
  VAR_24->full_duplex = (VAR_24->options & 8) ? 1 : 0;
  VAR_24->bus_master = (VAR_24->options & 16) ? 1 : 0;
 } else {
  VAR_24->media_override = 7;
  VAR_24->full_duplex = 0;
  VAR_24->bus_master = 0;
 }




 FUNC_9("%s: 3Com %s at %#3x,", VAR_20->name, VAR_24->product_name, VAR_21);

 FUNC_13(&VAR_24->lock);


 FUNC_0(0);
 for (VAR_27 = 0; VAR_27 < 0x18; VAR_27++) {
  __be16 *VAR_29 = (__be16 *) VAR_20->dev_addr;
  int VAR_30;
  FUNC_6(VAR_1 + VAR_27, VAR_21 + VAR_8);

  for (VAR_30 = 4; VAR_30 >= 0; VAR_30--) {
   FUNC_14(162);
   if ((FUNC_3(VAR_21 + VAR_8) & 0x0200) == 0)
    break;
  }
  VAR_25[VAR_27] = FUNC_3(VAR_21 + VAR_9);
  VAR_26 ^= VAR_25[VAR_27];
  if (VAR_27 < 3)
   VAR_29[VAR_27] = FUNC_1(VAR_25[VAR_27]);
 }
 VAR_26 = (VAR_26 ^ (VAR_26 >> 8)) & 0xff;
 if (VAR_26 != 0x00)
  FUNC_8(" ***INVALID CHECKSUM %4.4x*** ", VAR_26);
 FUNC_8(" %pM", VAR_20->dev_addr);
 if (VAR_25[16] == 0x11c7) {
  if (FUNC_12(VAR_20->dma, "3c515")) {
   FUNC_8(", DMA %d allocation failed", VAR_20->dma);
   VAR_20->dma = 0;
  } else
   FUNC_8(", DMA %d", VAR_20->dma);
 }
 FUNC_8(", IRQ %d\n", VAR_20->irq);

 if (VAR_14 && (VAR_20->irq <= 0 || VAR_20->irq > 15))
  FUNC_10(" *** Warning: this IRQ is unlikely to work! ***\n");

 {
  char *VAR_31[] = { "5:3", "3:1", "1:1", "3:5" };
  __u32 VAR_32;
  FUNC_0(3);
  VAR_24->available_media = FUNC_3(VAR_21 + VAR_11);
  VAR_32 = FUNC_2(VAR_21 + VAR_10);
  if (VAR_14 > 1)
   FUNC_9("  Internal config register is %4.4x, transceivers %#x.\n",
    VAR_32, FUNC_3(VAR_21 + VAR_11));
  FUNC_9("  %dK %s-wide RAM %s Rx:Tx split, %s%s interface.\n",
   8 << VAR_32 & VAR_4,
   VAR_32 & VAR_7 ? "word" : "byte",
   VAR_31[(VAR_32 & VAR_5) >> VAR_6],
   VAR_32 & VAR_0 ? "autoselect/" : "",
   VAR_15[(VAR_32 & VAR_12) >> VAR_13].name);
  VAR_24->default_media = (VAR_32 & VAR_12) >> VAR_13;
  VAR_24->autoselect = VAR_32 & VAR_0 ? 1 : 0;
  VAR_20->if_port = VAR_24->default_media;
 }
 if (VAR_24->media_override != 7) {
  FUNC_9("  Media override to transceiver type %d (%s).\n",
         VAR_24->media_override,
         VAR_15[VAR_24->media_override].name);
  VAR_20->if_port = VAR_24->media_override;
 }

 VAR_24->capabilities = VAR_25[16];
 VAR_24->full_bus_master_tx = (VAR_24->capabilities & 0x20) ? 1 : 0;


 VAR_24->full_bus_master_rx = (VAR_24->capabilities & 0x20) ? 1 : 0;


 VAR_20->netdev_ops = &VAR_17;
 VAR_20->watchdog_timeo = (400 * VAR_2) / 1000;
 VAR_20->ethtool_ops = &VAR_16;

 return FUNC_11(VAR_20);
}
