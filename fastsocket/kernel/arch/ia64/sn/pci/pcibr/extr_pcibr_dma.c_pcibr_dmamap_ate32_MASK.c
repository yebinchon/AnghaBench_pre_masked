
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
struct pcidev_info {TYPE_1__* pdi_linux_pcidev; struct pcidev_info* pdi_host_pcidev_info; scalar_t__ pdi_pcibus_info; } ;
struct pcibus_info {int pbi_hub_xid; int* pbi_devreg; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int devfn; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (struct pcibus_info*) ;
 scalar_t__ FUNC_4 (struct pcibus_info*) ;
 scalar_t__ FUNC_5 (struct pcibus_info*) ;
 int FUNC_6 (int,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (struct pcibus_info*,int,int,int) ;
 int FUNC_12 (struct pcibus_info*,int) ;

__attribute__((used)) static dma_addr_t
FUNC_13(struct pcidev_info *VAR_10,
     u64 VAR_11, size_t VAR_12, u64 VAR_13, int VAR_14)
{

 struct pcidev_info *VAR_15 = VAR_10->pdi_host_pcidev_info;
 struct pcibus_info *VAR_16 = (struct pcibus_info *)VAR_15->
     pdi_pcibus_info;
 u8 VAR_17 = (FUNC_7(VAR_15->pdi_host_pcidev_info->
         pdi_linux_pcidev->devfn)) - 1;
 int VAR_18;
 int VAR_19;
 u64 VAR_20 = VAR_13 | VAR_4;
 u64 VAR_21;
 u64 VAR_22;
 u64 VAR_23;
 u64 VAR_24;


 if (FUNC_4(VAR_16) && FUNC_3(VAR_16)) {
  return 0;
 }


 if (!(FUNC_6(VAR_11, VAR_12))) {
  VAR_18 = FUNC_1((VAR_0 - 1)
     +VAR_12
     - 1) + 1;
 } else {
  VAR_18 = FUNC_1(VAR_12
     - 1) + 1;
 }


 VAR_19 = FUNC_12(VAR_16, VAR_18);
 if (VAR_19 < 0)
  return 0;


 if (FUNC_3(VAR_16))
  VAR_20 &= ~(VAR_3);

 if (FUNC_10(VAR_14 == VAR_8))
  VAR_23 = FUNC_4(VAR_16) ? FUNC_8(VAR_11) :
                FUNC_9(VAR_11);
 else
  VAR_23 = VAR_11;

 VAR_24 = FUNC_2(VAR_23);
 VAR_21 = VAR_20 | (VAR_23 - VAR_24);


 if (FUNC_4(VAR_16)) {
  VAR_21 |= (VAR_16->pbi_hub_xid << VAR_7);
 }





 if (VAR_14 & VAR_9) {
  VAR_21 |= VAR_1;
  if (FUNC_5(VAR_16))
   VAR_21 |= VAR_2;
 }

 FUNC_11(VAR_16, VAR_19, VAR_18, VAR_21);




 VAR_22 = VAR_5 + VAR_24 + VAR_0 * VAR_19;





 if (VAR_16->pbi_devreg[VAR_17] & VAR_6)
  FUNC_0(VAR_22);


 return VAR_22;
}
