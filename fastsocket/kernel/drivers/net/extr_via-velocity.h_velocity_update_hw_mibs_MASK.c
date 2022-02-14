
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct velocity_info {int* mib_counter; TYPE_1__* mac_regs; } ;
struct TYPE_2__ {int MIBData; int MIBCR; } ;


 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct velocity_info *VAR_3)
{
 u32 VAR_4;
 int VAR_5;
 FUNC_1(VAR_1, &(VAR_3->mac_regs->MIBCR));

 while (FUNC_0(VAR_1, &(VAR_3->mac_regs->MIBCR)));

 FUNC_1(VAR_2, &(VAR_3->mac_regs->MIBCR));
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = FUNC_2(&(VAR_3->mac_regs->MIBData)) & 0x00FFFFFFUL;
  VAR_3->mib_counter[VAR_5] += VAR_4;
 }
}
