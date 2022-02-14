
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct physmap_flash_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct physmap_flash_info {int ** mtd; int * cmtd; int parts; scalar_t__ nr_parts; } ;
struct physmap_flash_data {scalar_t__ nr_parts; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct physmap_flash_info* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct platform_device*,int *) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct physmap_flash_info *VAR_2;
 struct physmap_flash_data *VAR_3;
 int VAR_4;

 VAR_2 = FUNC_5(VAR_1);
 if (VAR_2 == ((void*)0))
  return 0;
 FUNC_6(VAR_1, ((void*)0));

 VAR_3 = VAR_1->dev.platform_data;

 if (VAR_2->cmtd) {






  FUNC_0(VAR_2->cmtd);

 }
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2->mtd[VAR_4] != ((void*)0))
   FUNC_3(VAR_2->mtd[VAR_4]);
 }
 return 0;
}
