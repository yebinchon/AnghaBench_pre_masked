
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtd_info {struct map_info* priv; } ;
struct map_info {TYPE_1__* fldrv; } ;
struct TYPE_2__ {int module; int (* destroy ) (struct mtd_info*) ;} ;


 int FUNC_0 (struct mtd_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mtd_info*) ;

void FUNC_3(struct mtd_info *VAR_0)
{
 struct map_info *VAR_1 = VAR_0->priv;

 if (VAR_1->fldrv->destroy)
  VAR_1->fldrv->destroy(VAR_0);

 FUNC_1(VAR_1->fldrv->module);

 FUNC_0(VAR_0);
}
