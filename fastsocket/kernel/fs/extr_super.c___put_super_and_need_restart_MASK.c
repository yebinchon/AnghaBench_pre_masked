
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {scalar_t__ s_count; int s_list; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (int *) ;

int FUNC_3(struct super_block *VAR_0)
{

 if (FUNC_2(&VAR_0->s_list)) {

  FUNC_1(VAR_0);
  return 1;
 }

 VAR_0->s_count--;
 FUNC_0(VAR_0->s_count == 0);
 return 0;
}
