
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fixp_t ;


 int * VAR_0 ;

__attribute__((used)) static inline fixp_t FUNC_0(unsigned int VAR_1)
{
 int VAR_2 = (VAR_1 / 90) & 3;
 unsigned int VAR_3 = VAR_1 % 90;

 if (VAR_2 == 1 || VAR_2 == 3)
  VAR_3 = 90 - VAR_3;

 VAR_3 >>= 1;

 return (VAR_2 == 1 || VAR_2 == 2)? -VAR_0[VAR_3] : VAR_0[VAR_3];
}
