
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iwl_trans {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct iwl_trans*,int) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(struct iwl_trans *VAR_2, u32 VAR_3, u32 VAR_4,
   int VAR_5)
{
 int VAR_6 = 0;

 do {
  if ((FUNC_0(VAR_2, VAR_3) & VAR_4) == VAR_4)
   return VAR_6;
  FUNC_1(VAR_1);
  VAR_6 += VAR_1;
 } while (VAR_6 < VAR_5);

 return -VAR_0;
}
