
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_mem_exec_func {int dev; } ;
struct nouveau_device {int dummy; } ;


 struct nouveau_device* FUNC_0 (int ) ;
 int FUNC_1 (struct nouveau_device*,int) ;

__attribute__((used)) static u32
FUNC_2(struct nouveau_mem_exec_func *VAR_0, int VAR_1)
{
 struct nouveau_device *VAR_2 = FUNC_0(VAR_0->dev);
 if (VAR_1 <= 1)
  return FUNC_1(VAR_2, 0x1002c0 + ((VAR_1 - 0) * 4));
 if (VAR_1 <= 3)
  return FUNC_1(VAR_2, 0x1002e0 + ((VAR_1 - 2) * 4));
 return 0;
}
