
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 int VAR_0 ;
 unsigned char* VAR_1 ;
 unsigned char FUNC_0 (struct task_struct*,int ) ;

__attribute__((used)) static int FUNC_1(struct task_struct *VAR_2,int VAR_3)
{
 unsigned char VAR_4 = FUNC_0(VAR_2, VAR_0);




 __asm__("bld #3,%w0\n\t"
  "bxor #1,%w0\n\t"
  "bst #4,%w0\n\t"
  "bor #2,%w0\n\t"
  "bst #5,%w0\n\t"
  "bld #2,%w0\n\t"
  "bor #0,%w0\n\t"
  "bst #6,%w0\n\t"
  :"=&r"(VAR_4)::"cc");
 VAR_4 &= VAR_1[VAR_3 >> 1];
 if (!(VAR_3 & 1))
  return VAR_4 == 0;
 else
  return VAR_4 != 0;
}
