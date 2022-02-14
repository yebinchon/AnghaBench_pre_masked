
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nouveau_mem_exec_func {int dev; } ;
struct nouveau_device {int dummy; } ;


 struct nouveau_device* FUNC_0 (int ) ;
 int FUNC_1 (struct nouveau_device*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_mem_exec_func *VAR_0, u32 VAR_1)
{
 struct nouveau_device *VAR_2 = FUNC_0(VAR_0->dev);
 volatile u32 VAR_3 = FUNC_1(VAR_2, 0); (void)VAR_3;
 FUNC_2((VAR_1 + 500) / 1000);
}
