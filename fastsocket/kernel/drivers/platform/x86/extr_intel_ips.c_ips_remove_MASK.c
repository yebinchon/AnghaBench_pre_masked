
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct pci_dev {int dev; } ;
struct ips_driver {int orig_turbo_limit; int regmap; scalar_t__ monitor; scalar_t__ adjust; TYPE_1__* dev; scalar_t__ gpu_turbo_disable; scalar_t__ gpu_busy; scalar_t__ gpu_lower; scalar_t__ gpu_raise; scalar_t__ read_mch_val; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,struct ips_driver*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ips_driver*) ;
 int FUNC_4 (struct ips_driver*) ;
 int FUNC_5 (scalar_t__) ;
 struct ips_driver* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;

__attribute__((used)) static void FUNC_11(struct pci_dev *VAR_8)
{
 struct ips_driver *VAR_9 = FUNC_6(VAR_8);
 u64 VAR_10;

 if (!VAR_9)
  return;

 FUNC_3(VAR_9);


 if (VAR_9->read_mch_val)
  FUNC_9(VAR_7);
 if (VAR_9->gpu_raise)
  FUNC_9(VAR_5);
 if (VAR_9->gpu_lower)
  FUNC_9(VAR_4);
 if (VAR_9->gpu_busy)
  FUNC_9(VAR_3);
 if (VAR_9->gpu_turbo_disable)
  FUNC_9(VAR_6);

 FUNC_8(VAR_0, VAR_10);
 VAR_10 &= ~(VAR_1 | VAR_2);
 FUNC_10(VAR_0, VAR_10);
 FUNC_10(VAR_0, VAR_9->orig_turbo_limit);

 FUNC_1(VAR_9->dev->irq, VAR_9);
 if (VAR_9->adjust)
  FUNC_5(VAR_9->adjust);
 if (VAR_9->monitor)
  FUNC_5(VAR_9->monitor);
 FUNC_2(VAR_9->regmap);
 FUNC_7(VAR_8);
 FUNC_4(VAR_9);
 FUNC_0(&VAR_8->dev, "IPS driver removed\n");
}
