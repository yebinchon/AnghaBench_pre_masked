
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct scatterlist {int dummy; } ;
struct pci_dev {int dummy; } ;
struct btcx_riscmem {int size; int * cpu; int * jmp; } ;
typedef int __le32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct pci_dev*,struct btcx_riscmem*,int) ;
 int * FUNC_2 (int *,struct scatterlist*,int ,int ,unsigned int,int ,unsigned int,unsigned int) ;

int FUNC_3(struct pci_dev *VAR_2, struct btcx_riscmem *VAR_3,
    struct scatterlist *VAR_4, unsigned int VAR_5,
    unsigned int VAR_6, unsigned int VAR_7)
{
 u32 VAR_8;
 __le32 *VAR_9;
 int VAR_10;





 VAR_8 = 1 + (VAR_5 * VAR_6) / VAR_1 + VAR_6;
 VAR_8 += 1;
 if ((VAR_10 = FUNC_1(VAR_2,VAR_3,VAR_8*8)) < 0)
  return VAR_10;


 VAR_9 = VAR_3->cpu;
 VAR_9 = FUNC_2(VAR_9, VAR_4, 0, VAR_0, VAR_5, 0, VAR_6, VAR_7);


 VAR_3->jmp = VAR_9;
 FUNC_0((VAR_3->jmp - VAR_3->cpu + 2) * sizeof (*VAR_3->cpu) > VAR_3->size);
 return 0;
}
