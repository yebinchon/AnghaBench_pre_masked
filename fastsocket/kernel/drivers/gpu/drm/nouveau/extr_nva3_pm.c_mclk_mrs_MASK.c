
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_mem_exec_func {int dev; } ;
struct TYPE_2__ {int ranks; } ;
struct nouveau_fb {TYPE_1__ ram; } ;
struct nouveau_device {int dummy; } ;


 struct nouveau_device* FUNC_0 (int ) ;
 struct nouveau_fb* FUNC_1 (struct nouveau_device*) ;
 int FUNC_2 (struct nouveau_device*,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_mem_exec_func *VAR_0, int VAR_1, u32 VAR_2)
{
 struct nouveau_device *VAR_3 = FUNC_0(VAR_0->dev);
 struct nouveau_fb *VAR_4 = FUNC_1(VAR_3);
 if (VAR_1 <= 1) {
  if (VAR_4->ram.ranks > 1)
   FUNC_2(VAR_3, 0x1002c8 + ((VAR_1 - 0) * 4), VAR_2);
  FUNC_2(VAR_3, 0x1002c0 + ((VAR_1 - 0) * 4), VAR_2);
 } else
 if (VAR_1 <= 3) {
  if (VAR_4->ram.ranks > 1)
   FUNC_2(VAR_3, 0x1002e8 + ((VAR_1 - 2) * 4), VAR_2);
  FUNC_2(VAR_3, 0x1002e0 + ((VAR_1 - 2) * 4), VAR_2);
 }
}
