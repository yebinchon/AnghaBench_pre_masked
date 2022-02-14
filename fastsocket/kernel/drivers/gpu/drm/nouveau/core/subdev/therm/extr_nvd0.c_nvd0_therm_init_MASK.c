
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* fan; int base; } ;
struct nvd0_therm_priv {TYPE_3__ base; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_8__ {int crystal; } ;
struct TYPE_5__ {scalar_t__ func; int line; } ;
struct TYPE_6__ {TYPE_1__ tach; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_4__* FUNC_1 (struct nvd0_therm_priv*) ;
 int FUNC_2 (struct nvd0_therm_priv*,int,int,int) ;
 int FUNC_3 (struct nvd0_therm_priv*,int,int) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_object *VAR_1)
{
 struct nvd0_therm_priv *VAR_2 = (void *)VAR_1;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2->base.base);
 if (VAR_3)
  return VAR_3;


 FUNC_2(VAR_2, 0x00e720, 0x00000003, 0x00000002);
 if (VAR_2->base.fan->tach.func != VAR_0) {
  FUNC_2(VAR_2, 0x00d79c, 0x000000ff, VAR_2->base.fan->tach.line);
  FUNC_3(VAR_2, 0x00e724, FUNC_1(VAR_2)->crystal * 1000);
  FUNC_2(VAR_2, 0x00e720, 0x00000001, 0x00000001);
 }
 FUNC_2(VAR_2, 0x00e720, 0x00000002, 0x00000000);

 return 0;
}
