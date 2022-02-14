
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct mem_ctl_info {int dummy; } ;
struct mce {int status; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (struct mem_ctl_info*,struct mce*) ;
 int FUNC_4 (struct mem_ctl_info*,struct mce*) ;

__attribute__((used)) static inline void FUNC_5(struct mem_ctl_info *VAR_2,
         struct mce *VAR_3)
{
 u16 VAR_4 = FUNC_0(VAR_3->status);
 u8 VAR_5 = FUNC_2(VAR_3->status, 0x1f);
 u8 VAR_6 = (VAR_3->status >> 45) & 0x3;


 if (FUNC_1(VAR_4) == VAR_1)
  return;


 if (VAR_5 && VAR_5 != VAR_0)
  return;

 if (VAR_6 == 2)
  FUNC_3(VAR_2, VAR_3);
 else if (VAR_6 == 1)
  FUNC_4(VAR_2, VAR_3);
}
