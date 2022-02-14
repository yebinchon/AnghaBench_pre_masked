
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_gpio {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int*,int*) ;
 int FUNC_1 (struct nouveau_gpio*,int,int,int) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_gpio *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 u32 VAR_5, VAR_6;

 if (FUNC_0(VAR_2, &VAR_5, &VAR_6))
  return -VAR_0;

 FUNC_1(VAR_1, VAR_5, 7 << VAR_6, (((VAR_3 ^ 1) << 1) | VAR_4) << VAR_6);
 return 0;
}
