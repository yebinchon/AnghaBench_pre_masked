
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef int u32 ;
struct nouveau_fb {int dummy; } ;


 int FUNC_0 (int) ;
 int* VAR_0 ;

__attribute__((used)) static bool
FUNC_1(struct nouveau_fb *VAR_1, u32 VAR_2)
{
 u8 VAR_3 = (VAR_2 & 0x0000ff00) >> 8;
 return FUNC_0((VAR_0[VAR_3] == 1));
}
