
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_gpio {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int*,int*) ;
 int FUNC_1 (struct nouveau_gpio*,int) ;

__attribute__((used)) static int
FUNC_2(struct nouveau_gpio *VAR_1, int VAR_2)
{
 u32 VAR_3, VAR_4;

 if (FUNC_0(VAR_2, &VAR_3, &VAR_4))
  return -VAR_0;

 return !!(FUNC_1(VAR_1, VAR_3) & (4 << VAR_4));
}
