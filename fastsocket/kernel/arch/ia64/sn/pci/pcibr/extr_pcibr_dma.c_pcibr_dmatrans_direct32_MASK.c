
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u64 ;
struct pcidev_info {scalar_t__ pdi_pcibus_info; struct pcidev_info* pdi_host_pcidev_info; } ;
struct pcibus_info {size_t pbi_dir_xbase; } ;
typedef size_t dma_addr_t ;


 scalar_t__ FUNC_0 (struct pcibus_info*) ;
 scalar_t__ FUNC_1 (struct pcibus_info*) ;
 size_t VAR_0 ;
 size_t FUNC_2 (size_t) ;
 size_t FUNC_3 (size_t) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static dma_addr_t
FUNC_5(struct pcidev_info * VAR_3,
   u64 VAR_4, size_t VAR_5, u64 VAR_6, int VAR_7)
{
 struct pcidev_info *VAR_8 = VAR_3->pdi_host_pcidev_info;
 struct pcibus_info *VAR_9 = (struct pcibus_info *)VAR_8->
     pdi_pcibus_info;
 u64 VAR_10;

 u64 VAR_11;
 u64 VAR_12;
 u64 VAR_13;

 if (FUNC_0(VAR_9)) {
  return 0;
 }

 if (VAR_7 & VAR_2)
  return 0;

 if (FUNC_4(VAR_7) == VAR_1)
  VAR_10 = FUNC_1(VAR_9) ? FUNC_2(VAR_4) :
                FUNC_3(VAR_4);
 else
  VAR_10 = VAR_4;

 VAR_11 = VAR_9->pbi_dir_xbase;
 VAR_12 = VAR_10 - VAR_11;
 VAR_13 = VAR_5 + VAR_12;
 if ((VAR_5 > (1ULL << 31)) ||
     (VAR_10 < VAR_11) ||
     (VAR_13 > (1ULL << 31))) {
  return 0;
 }

 return VAR_0 | VAR_12;
}
