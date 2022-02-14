
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct flash_platform_data* platform_data; } ;
struct platform_device {TYPE_2__ dev; } ;
struct TYPE_3__ {scalar_t__ map_priv_1; } ;
struct ixp2000_flash_info {scalar_t__ res; scalar_t__ partitions; TYPE_1__ map; scalar_t__ mtd; } ;
struct flash_platform_data {int (* exit ) () ;} ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct ixp2000_flash_info* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct flash_platform_data *VAR_1 = VAR_0->dev.platform_data;
 struct ixp2000_flash_info *VAR_2 = FUNC_4(VAR_0);

 FUNC_5(VAR_0, ((void*)0));

 if(!VAR_2)
  return 0;

 if (VAR_2->mtd) {
  FUNC_0(VAR_2->mtd);
  FUNC_3(VAR_2->mtd);
 }
 if (VAR_2->map.map_priv_1)
  FUNC_1((void *) VAR_2->map.map_priv_1);

 FUNC_2(VAR_2->partitions);

 if (VAR_2->res) {
  FUNC_6(VAR_2->res);
  FUNC_2(VAR_2->res);
 }

 if (VAR_1->exit)
  VAR_1->exit();

 return 0;
}
