
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pci_pbm_info {scalar_t__ msiq_rotor; scalar_t__ msiq_first; scalar_t__ msiq_num; } ;
typedef int DEFINE_SPINLOCK ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static u32 FUNC_2(struct pci_pbm_info *VAR_0)
{
 static DEFINE_SPINLOCK(VAR_1);
 unsigned long VAR_2;
 u32 VAR_3, VAR_4;

 FUNC_0(&VAR_1, VAR_2);

 VAR_4 = VAR_0->msiq_rotor;
 VAR_3 = VAR_0->msiq_first + VAR_4;

 if (++VAR_4 >= VAR_0->msiq_num)
  VAR_4 = 0;
 VAR_0->msiq_rotor = VAR_4;

 FUNC_1(&VAR_1, VAR_2);

 return VAR_3;
}
