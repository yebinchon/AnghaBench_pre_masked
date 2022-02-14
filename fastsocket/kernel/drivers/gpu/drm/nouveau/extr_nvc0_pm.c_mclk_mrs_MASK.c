
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_mem_exec_func {int dev; } ;
struct TYPE_2__ {scalar_t__ type; int ranks; } ;
struct nouveau_fb {TYPE_1__ ram; } ;
struct nouveau_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct nouveau_device* FUNC_0 (int ) ;
 struct nouveau_fb* FUNC_1 (struct nouveau_device*) ;
 int FUNC_2 (struct nouveau_device*,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_mem_exec_func *VAR_1, int VAR_2, u32 VAR_3)
{
 struct nouveau_device *VAR_4 = FUNC_0(VAR_1->dev);
 struct nouveau_fb *VAR_5 = FUNC_1(VAR_4);
 if (VAR_5->ram.type != VAR_0) {
  if (VAR_2 <= 1) {
   FUNC_2(VAR_4, 0x10f300 + ((VAR_2 - 0) * 4), VAR_3);
   if (VAR_5->ram.ranks > 1)
    FUNC_2(VAR_4, 0x10f308 + ((VAR_2 - 0) * 4), VAR_3);
  } else
  if (VAR_2 <= 3) {
   FUNC_2(VAR_4, 0x10f320 + ((VAR_2 - 2) * 4), VAR_3);
   if (VAR_5->ram.ranks > 1)
    FUNC_2(VAR_4, 0x10f328 + ((VAR_2 - 2) * 4), VAR_3);
  }
 } else {
  if (VAR_2 == 0) FUNC_2(VAR_4, 0x10f300 + (VAR_2 * 4), VAR_3);
  else if (VAR_2 <= 7) FUNC_2(VAR_4, 0x10f32c + (VAR_2 * 4), VAR_3);
  else if (VAR_2 == 15) FUNC_2(VAR_4, 0x10f34c, VAR_3);
 }
}
