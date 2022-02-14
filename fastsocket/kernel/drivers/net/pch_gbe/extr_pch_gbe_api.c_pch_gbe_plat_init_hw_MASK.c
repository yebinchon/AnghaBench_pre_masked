
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_gbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ FUNC_0 (struct pch_gbe_hw*) ;
 int FUNC_1 (struct pch_gbe_hw*) ;
 int FUNC_2 (struct pch_gbe_hw*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static s32 FUNC_4(struct pch_gbe_hw *VAR_0)
{
 s32 VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1) {
  FUNC_3("pch_gbe_phy_get_id error\n");
  return VAR_1;
 }
 FUNC_1(VAR_0);




 return VAR_1;
}
