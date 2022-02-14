
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_mem_exec_func {int dev; } ;
struct nouveau_device {int dummy; } ;


 struct nouveau_device* FUNC_0 (int ) ;
 int FUNC_1 (struct nouveau_device*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct nouveau_mem_exec_func *VAR_0, bool VAR_1)
{
 struct nouveau_device *VAR_2 = FUNC_0(VAR_0->dev);
 FUNC_1(VAR_2, 0x10f210, VAR_1 ? 0x80000000 : 0x00000000);
}
