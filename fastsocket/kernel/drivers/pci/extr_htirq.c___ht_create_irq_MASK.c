
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct pci_dev {int dev; } ;
struct TYPE_2__ {int address_lo; int address_hi; } ;
struct ht_irq_cfg {int pos; int idx; TYPE_1__ msg; int * update; struct pci_dev* dev; } ;
typedef int ht_irq_update_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,struct pci_dev*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 int FUNC_4 (struct ht_irq_cfg*) ;
 struct ht_irq_cfg* FUNC_5 (int,int ) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,int,int*) ;
 int FUNC_8 (struct pci_dev*,int,int) ;
 int FUNC_9 (int,struct ht_irq_cfg*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;

int FUNC_12(struct pci_dev *VAR_6, int VAR_7, ht_irq_update_t *VAR_8)
{
 struct ht_irq_cfg *VAR_9;
 unsigned long VAR_10;
 u32 VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_13 = FUNC_6(VAR_6, VAR_4);
 if (!VAR_13)
  return -VAR_1;


 FUNC_10(&VAR_5, VAR_10);
 FUNC_8(VAR_6, VAR_13 + 2, 1);
 FUNC_7(VAR_6, VAR_13 + 4, &VAR_11);
 FUNC_11(&VAR_5, VAR_10);

 VAR_12 = (VAR_11 >> 16) & 0xff;
 if ( VAR_7 > VAR_12)
  return -VAR_1;

 VAR_9 = FUNC_5(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  return -VAR_2;

 VAR_9->dev = VAR_6;
 VAR_9->update = VAR_8;
 VAR_9->pos = VAR_13;
 VAR_9->idx = 0x10 + (VAR_7 * 2);

 VAR_9->msg.address_lo = 0xffffffff;
 VAR_9->msg.address_hi = 0xffffffff;

 VAR_15 = FUNC_2(&VAR_6->dev);
 VAR_14 = FUNC_1(0, VAR_15);

 if (VAR_14 <= 0) {
  FUNC_4(VAR_9);
  return -VAR_0;
 }
 FUNC_9(VAR_14, VAR_9);

 if (FUNC_0(VAR_14, VAR_6) < 0) {
  FUNC_3(VAR_14);
  return -VAR_0;
 }

 return VAR_14;
}
