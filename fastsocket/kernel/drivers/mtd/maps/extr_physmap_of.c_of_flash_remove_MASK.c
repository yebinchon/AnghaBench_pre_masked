
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct of_flash {scalar_t__ cmtd; int list_size; TYPE_2__* list; } ;
struct of_device {int dev; } ;
struct TYPE_3__ {scalar_t__ virt; } ;
struct TYPE_4__ {scalar_t__ mtd; struct of_flash* res; TYPE_1__ map; } ;


 struct of_flash* FUNC_0 (struct of_flash*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 struct of_flash* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct of_flash*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct of_flash*) ;

__attribute__((used)) static int FUNC_10(struct of_device *VAR_0)
{
 struct of_flash *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_3(&VAR_0->dev);
 if (!VAR_1)
  return 0;
 FUNC_4(&VAR_0->dev, ((void*)0));
 if (VAR_1->cmtd) {
  if (FUNC_0(VAR_1)) {
   FUNC_2(VAR_1->cmtd);
   FUNC_6(FUNC_0(VAR_1));
  } else {
   FUNC_1(VAR_1->cmtd);
  }
 }

 for (VAR_2 = 0; VAR_2 < VAR_1->list_size; VAR_2++) {
  if (VAR_1->list[VAR_2].mtd)
   FUNC_7(VAR_1->list[VAR_2].mtd);

  if (VAR_1->list[VAR_2].map.virt)
   FUNC_5(VAR_1->list[VAR_2].map.virt);

  if (VAR_1->list[VAR_2].res) {
   FUNC_9(VAR_1->list[VAR_2].res);
   FUNC_6(VAR_1->list[VAR_2].res);
  }
 }

 FUNC_6(VAR_1);

 return 0;
}
