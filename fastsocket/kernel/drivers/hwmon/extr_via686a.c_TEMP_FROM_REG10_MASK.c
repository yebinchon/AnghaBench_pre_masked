
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 long FUNC_0 (int) ;
 int* VAR_0 ;

__attribute__((used)) static inline long FUNC_1(u16 VAR_1)
{
 u16 VAR_2 = VAR_1 >> 2;
 u16 VAR_3 = VAR_1 & 3;


 if (VAR_3 == 0 || VAR_2 == 255)
  return FUNC_0(VAR_2);


 return (VAR_0[VAR_2] * (4 - VAR_3) +
  VAR_0[VAR_2 + 1] * VAR_3) * 25;
}
