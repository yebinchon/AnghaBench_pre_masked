
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct branch {int opcode; unsigned long delta; } ;



unsigned FUNC_0(void *VAR_0, const void *VAR_1,
       unsigned long VAR_2, unsigned VAR_3)
{
 struct branch *VAR_4 = VAR_0;
 unsigned long VAR_5 = (unsigned long)VAR_1 - (VAR_2+5);

 if (VAR_3 < 5)
  return VAR_3;

 VAR_4->opcode = 0xe9;
 VAR_4->delta = VAR_5;

 return 5;
}
