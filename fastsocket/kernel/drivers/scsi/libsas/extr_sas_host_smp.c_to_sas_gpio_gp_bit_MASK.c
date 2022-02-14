
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static u8 *FUNC_0(unsigned int VAR_0, u8 *VAR_1, u8 VAR_2, u8 VAR_3, u8 *VAR_4)
{
 unsigned int VAR_5;
 u8 VAR_6;


 if (VAR_2 == 0)
  return ((void*)0);

 VAR_2--;
 if (VAR_0 < VAR_2 * 32)
  return ((void*)0);

 VAR_0 -= VAR_2 * 32;
 VAR_5 = VAR_0 >> 5;

 if (VAR_5 >= VAR_3)
  return ((void*)0);

 VAR_0 &= (1 << 5) - 1;
 VAR_6 = 3 - (VAR_0 >> 3);
 *VAR_4 = VAR_0 & ((1 << 3) - 1);

 return &VAR_1[VAR_5 * 4 + VAR_6];
}
