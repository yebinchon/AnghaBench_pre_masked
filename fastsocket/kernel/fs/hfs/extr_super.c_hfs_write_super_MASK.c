
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_flags; scalar_t__ s_dirt; } ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*) ;

__attribute__((used)) static void FUNC_3(struct super_block *VAR_1)
{
 FUNC_1(VAR_1);
 VAR_1->s_dirt = 0;


 if (!(VAR_1->s_flags & VAR_0))
  FUNC_0(VAR_1);
 FUNC_2(VAR_1);
}
