
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct branch {int opcode; unsigned long delta; } ;


 int FUNC_0 (int) ;

unsigned FUNC_1(void *VAR_0,
        const void *VAR_1, u16 VAR_2,
        unsigned long VAR_3, u16 VAR_4,
        unsigned VAR_5)
{
 struct branch *VAR_6 = VAR_0;
 unsigned long VAR_7 = (unsigned long)VAR_1 - (VAR_3+5);

 if (VAR_2 & ~VAR_4)
  return VAR_5;
 if (VAR_5 < 5)
  return VAR_5;

 VAR_6->opcode = 0xe8;
 VAR_6->delta = VAR_7;
 FUNC_0(sizeof(*VAR_6) != 5);

 return 5;
}
