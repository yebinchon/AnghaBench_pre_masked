
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_mem_exec_func {int dev; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct nouveau_fb {TYPE_1__ ram; } ;
struct nouveau_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct nouveau_device* FUNC_0 (int ) ;
 struct nouveau_fb* FUNC_1 (struct nouveau_device*) ;
 int FUNC_2 (struct nouveau_device*,int) ;

__attribute__((used)) static u32
FUNC_3(struct nouveau_mem_exec_func *VAR_1, int VAR_2)
{
 struct nouveau_device *VAR_3 = FUNC_0(VAR_1->dev);
 struct nouveau_fb *VAR_4 = FUNC_1(VAR_3);
 if (VAR_4->ram.type != VAR_0) {
  if (VAR_2 <= 1)
   return FUNC_2(VAR_3, 0x10f300 + ((VAR_2 - 0) * 4));
  return FUNC_2(VAR_3, 0x10f320 + ((VAR_2 - 2) * 4));
 } else {
  if (VAR_2 == 0)
   return FUNC_2(VAR_3, 0x10f300 + (VAR_2 * 4));
  else
  if (VAR_2 <= 7)
   return FUNC_2(VAR_3, 0x10f32c + (VAR_2 * 4));
  return FUNC_2(VAR_3, 0x10f34c);
 }
}
