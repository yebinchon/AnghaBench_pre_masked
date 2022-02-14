
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct sn_irq_info {int irq_int_bit; scalar_t__ irq_pciioinfo; int irq_xtalkaddr; } ;
struct pcidev_info {TYPE_1__* pdi_host_pcidev_info; } ;
struct pcibus_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ pdi_pcibus_info; } ;


 int FUNC_0 (struct sn_irq_info*) ;
 int FUNC_1 (struct pcibus_info*,int,int ) ;
 int FUNC_2 (struct pcibus_info*,int) ;
 int FUNC_3 (struct pcibus_info*,int) ;

void FUNC_4(struct sn_irq_info *VAR_0)
{
 struct pcidev_info *VAR_1;
 struct pcibus_info *VAR_2;
 int VAR_3 = VAR_0->irq_int_bit;
 u64 VAR_4 = VAR_0->irq_xtalkaddr;

 VAR_1 = (struct pcidev_info *)VAR_0->irq_pciioinfo;
 if (VAR_1) {
  VAR_2 =
      (struct pcibus_info *)VAR_1->pdi_host_pcidev_info->
      pdi_pcibus_info;


  FUNC_2(VAR_2, (1 << VAR_3));


  FUNC_1(VAR_2, VAR_3, VAR_4);


  FUNC_3(VAR_2, (1 << VAR_3));

  FUNC_0(VAR_0);
 }
}
