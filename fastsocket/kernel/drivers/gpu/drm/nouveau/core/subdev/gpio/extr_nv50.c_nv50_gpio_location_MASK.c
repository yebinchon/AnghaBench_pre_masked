
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(int VAR_1, u32 *VAR_2, u32 *VAR_3)
{
 const u32 VAR_4[4] = { 0xe104, 0xe108, 0xe280, 0xe284 };

 if (VAR_1 >= 32)
  return -VAR_0;

 *VAR_2 = VAR_4[VAR_1 >> 3];
 *VAR_3 = (VAR_1 & 7) << 2;
 return 0;
}
