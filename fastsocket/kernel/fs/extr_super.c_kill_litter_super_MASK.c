
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_root; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct super_block*) ;

void FUNC_2(struct super_block *VAR_0)
{
 if (VAR_0->s_root)
  FUNC_0(VAR_0->s_root);
 FUNC_1(VAR_0);
}
