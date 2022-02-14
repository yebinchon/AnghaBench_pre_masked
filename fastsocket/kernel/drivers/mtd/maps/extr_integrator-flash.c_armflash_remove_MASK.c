
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct flash_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct flash_platform_data {int (* exit ) () ;} ;
struct armflash_info {scalar_t__ mtd; int nr_subdev; TYPE_2__* subdev; struct armflash_info* parts; } ;
struct TYPE_4__ {scalar_t__ mtd; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct armflash_info*) ;
 int FUNC_3 (scalar_t__) ;
 struct armflash_info* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int *) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct armflash_info *VAR_1 = FUNC_4(VAR_0);
 struct flash_platform_data *VAR_2 = VAR_0->dev.platform_data;
 int VAR_3;

 FUNC_5(VAR_0, ((void*)0));

 if (VAR_1) {
  if (VAR_1->mtd) {
   FUNC_1(VAR_1->mtd);




  }
  FUNC_2(VAR_1->parts);

  for (VAR_3 = VAR_1->nr_subdev - 1; VAR_3 >= 0; VAR_3--)
   FUNC_0(&VAR_1->subdev[VAR_3]);

  if (VAR_2 && VAR_2->exit)
   VAR_2->exit();

  FUNC_2(VAR_1);
 }

 return 0;
}
