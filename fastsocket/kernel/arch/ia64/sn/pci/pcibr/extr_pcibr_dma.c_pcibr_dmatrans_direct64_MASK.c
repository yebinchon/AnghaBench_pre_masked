
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct pcidev_info {TYPE_1__* pdi_linux_pcidev; TYPE_2__* pdi_host_pcidev_info; } ;
struct pcibus_info {scalar_t__ pbi_hub_xid; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {scalar_t__ pdi_pcibus_info; } ;
struct TYPE_3__ {int devfn; } ;


 scalar_t__ FUNC_0 (struct pcibus_info*) ;
 scalar_t__ FUNC_1 (struct pcibus_info*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static dma_addr_t
FUNC_6(struct pcidev_info * VAR_7, u64 VAR_8,
   u64 VAR_9, int VAR_10)
{
 struct pcibus_info *VAR_11 = (struct pcibus_info *)
     ((VAR_7->pdi_host_pcidev_info)->pdi_pcibus_info);
 u64 VAR_12;


 if (FUNC_5(VAR_10) == VAR_3)
  VAR_12 = FUNC_1(VAR_11) ?
    FUNC_3(VAR_8) :
    FUNC_4(VAR_8);
 else
  VAR_12 = VAR_8;
 VAR_12 |= VAR_9;


 if (FUNC_0(VAR_11))
  VAR_12 &= ~VAR_0;


 if (FUNC_1(VAR_11)) {
  VAR_12 |=
      ((u64) VAR_11->
       pbi_hub_xid << VAR_2);
 } else
  VAR_12 |= (VAR_10 & VAR_4) ?
    VAR_6 :
    VAR_5;


 if (!FUNC_0(VAR_11) && FUNC_2(VAR_7->pdi_linux_pcidev->devfn))
  VAR_12 |= VAR_1;

 return VAR_12;
}
