
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct btcx_riscmem {int dma; int * cpu; } ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,struct btcx_riscmem*,int) ;
 void* FUNC_1 (int) ;

int FUNC_2(struct pci_dev *VAR_4, struct btcx_riscmem *VAR_5,
        u32 VAR_6, u32 VAR_7, u32 VAR_8)
{
 __le32 *VAR_9;
 int VAR_10;

 if ((VAR_10 = FUNC_0(VAR_4, VAR_5, 4*16)) < 0)
  return VAR_10;


 VAR_9 = VAR_5->cpu;
 *(VAR_9++) = FUNC_1(VAR_3 | VAR_1 | VAR_0);
 *(VAR_9++) = FUNC_1(VAR_6);
 *(VAR_9++) = FUNC_1(VAR_8);
 *(VAR_9++) = FUNC_1(VAR_7);
 *(VAR_9++) = FUNC_1(VAR_2);
 *(VAR_9++) = FUNC_1(VAR_5->dma);
 return 0;
}
