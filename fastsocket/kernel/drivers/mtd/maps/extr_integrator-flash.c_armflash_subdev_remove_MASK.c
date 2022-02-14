
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int phys; scalar_t__ virt; } ;
struct armflash_subdev_info {TYPE_1__ map; int * name; scalar_t__ mtd; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct armflash_subdev_info *VAR_0)
{
 if (VAR_0->mtd)
  FUNC_2(VAR_0->mtd);
 if (VAR_0->map.virt)
  FUNC_0(VAR_0->map.virt);
 FUNC_1(VAR_0->name);
 VAR_0->name = ((void*)0);
 FUNC_3(VAR_0->map.phys, VAR_0->map.size);
}
