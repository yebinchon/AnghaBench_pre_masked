
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * virt; } ;
struct platram_info {TYPE_1__ map; struct platram_info* area; scalar_t__ mtd; struct platram_info* partitions; scalar_t__ free_partitions; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct platram_info*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct platform_device*,int *) ;
 int FUNC_7 (struct platram_info*,int ) ;
 int FUNC_8 (struct platram_info*) ;
 struct platram_info* FUNC_9 (struct platform_device*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_1)
{
 struct platram_info *VAR_2 = FUNC_9(VAR_1);

 FUNC_6(VAR_1, ((void*)0));

 FUNC_2(&VAR_1->dev, "removing device\n");

 if (VAR_2 == ((void*)0))
  return 0;

 if (VAR_2->mtd) {







  FUNC_0(VAR_2->mtd);
  FUNC_5(VAR_2->mtd);
 }



 FUNC_7(VAR_2, VAR_0);



 if (VAR_2->area) {
  FUNC_8(VAR_2->area);
  FUNC_4(VAR_2->area);
 }

 if (VAR_2->map.virt != ((void*)0))
  FUNC_3(VAR_2->map.virt);

 FUNC_4(VAR_2);

 return 0;
}
