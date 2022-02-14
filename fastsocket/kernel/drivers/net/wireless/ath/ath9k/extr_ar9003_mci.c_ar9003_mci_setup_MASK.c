
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
typedef int u16 ;
struct ath9k_hw_mci {void* sched_addr; int gpm_len; void* gpm_buf; void* gpm_addr; } ;
struct TYPE_2__ {struct ath9k_hw_mci mci; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;


 int FUNC_0 (struct ath_hw*,int,int,int) ;

int FUNC_1(struct ath_hw *VAR_0, u32 VAR_1, void *VAR_2,
       u16 VAR_3, u32 VAR_4)
{
 struct ath9k_hw_mci *VAR_5 = &VAR_0->btcoex_hw.mci;

 VAR_5->gpm_addr = VAR_1;
 VAR_5->gpm_buf = VAR_2;
 VAR_5->gpm_len = VAR_3;
 VAR_5->sched_addr = VAR_4;

 return FUNC_0(VAR_0, 1, 1, 1);
}
