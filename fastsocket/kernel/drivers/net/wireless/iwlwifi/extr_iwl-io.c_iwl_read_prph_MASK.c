
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans {int dummy; } ;


 int FUNC_0 (struct iwl_trans*,int) ;
 scalar_t__ FUNC_1 (struct iwl_trans*,int,unsigned long*) ;
 int FUNC_2 (struct iwl_trans*,unsigned long*) ;

u32 FUNC_3(struct iwl_trans *VAR_0, u32 VAR_1)
{
 unsigned long VAR_2;
 u32 VAR_3 = 0x5a5a5a5a;

 if (FUNC_1(VAR_0, 0, &VAR_2)) {
  VAR_3 = FUNC_0(VAR_0, VAR_1);
  FUNC_2(VAR_0, &VAR_2);
 }
 return VAR_3;
}
