
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbtx4939_flash_info {scalar_t__ mtd; int parts; scalar_t__ nr_parts; } ;
struct rbtx4939_flash_data {scalar_t__ nr_parts; } ;
struct TYPE_2__ {struct rbtx4939_flash_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 struct rbtx4939_flash_info* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct rbtx4939_flash_info *VAR_1;

 VAR_1 = FUNC_4(VAR_0);
 if (!VAR_1)
  return 0;
 FUNC_5(VAR_0, ((void*)0));

 if (VAR_1->mtd) {
  FUNC_0(VAR_1->mtd);

  FUNC_3(VAR_1->mtd);
 }
 return 0;
}
