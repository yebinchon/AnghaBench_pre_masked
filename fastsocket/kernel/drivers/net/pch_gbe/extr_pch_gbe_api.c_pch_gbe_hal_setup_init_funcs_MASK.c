
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_gbe_hw {int reg; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct pch_gbe_hw*) ;
 int FUNC_1 (char*) ;

inline s32 FUNC_2(struct pch_gbe_hw *VAR_1)
{
 if (!VAR_1->reg) {
  FUNC_1("ERROR: Registers not mapped\n");
  return -VAR_0;
 }
 FUNC_0(VAR_1);
 return 0;
}
