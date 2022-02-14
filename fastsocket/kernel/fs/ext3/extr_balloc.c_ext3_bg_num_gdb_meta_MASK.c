
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;


 unsigned long FUNC_0 (struct super_block*) ;

__attribute__((used)) static unsigned long FUNC_1(struct super_block *VAR_0, int VAR_1)
{
 unsigned long VAR_2 = VAR_1 / FUNC_0(VAR_0);
 unsigned long VAR_3 = VAR_2 * FUNC_0(VAR_0);
 unsigned long VAR_4 = VAR_3 + FUNC_0(VAR_0) - 1;

 if (VAR_1 == VAR_3 || VAR_1 == VAR_3 + 1 || VAR_1 == VAR_4)
  return 1;
 return 0;
}
