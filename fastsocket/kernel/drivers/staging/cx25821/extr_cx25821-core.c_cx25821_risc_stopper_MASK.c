
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
 int FUNC_0 (struct pci_dev*,struct btcx_riscmem*,int) ;
 void* FUNC_1 (int) ;

int FUNC_2(struct pci_dev *VAR_3, struct btcx_riscmem *VAR_4,
    u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 __le32 *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_3, VAR_4, 4 * 16);

 if (VAR_9 < 0)
  return VAR_9;


 VAR_8 = VAR_4->cpu;

 *(VAR_8++) = FUNC_1(VAR_2 | VAR_0);
 *(VAR_8++) = FUNC_1(VAR_5);
 *(VAR_8++) = FUNC_1(VAR_7);
 *(VAR_8++) = FUNC_1(VAR_6);
 *(VAR_8++) = FUNC_1(VAR_1);
 *(VAR_8++) = FUNC_1(VAR_4->dma);
 *(VAR_8++) = FUNC_1(0);
 return 0;
}
