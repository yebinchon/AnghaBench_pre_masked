
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mvm {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,char*,int) ;

u8 FUNC_2(struct iwl_mvm *VAR_1, u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4 = VAR_3;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = (VAR_4 + 1) % VAR_0;
  if (VAR_2 & FUNC_0(VAR_4))
   return VAR_4;
 }

 FUNC_1(1, "Failed to toggle between antennas 0x%x", VAR_2);
 return VAR_3;
}
