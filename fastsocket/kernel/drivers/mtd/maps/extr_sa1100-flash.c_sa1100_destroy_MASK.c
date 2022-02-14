
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sa_info {scalar_t__ mtd; scalar_t__ nr_parts; int num_subdev; TYPE_1__* subdev; struct sa_info* parts; } ;
struct flash_platform_data {int (* exit ) () ;} ;
struct TYPE_2__ {scalar_t__ mtd; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct sa_info*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct sa_info *VAR_0, struct flash_platform_data *VAR_1)
{
 int VAR_2;

 if (VAR_0->mtd) {
  if (VAR_0->nr_parts == 0)
   FUNC_0(VAR_0->mtd);
 }

 FUNC_2(VAR_0->parts);

 for (VAR_2 = VAR_0->num_subdev - 1; VAR_2 >= 0; VAR_2--)
  FUNC_4(&VAR_0->subdev[VAR_2]);
 FUNC_2(VAR_0);

 if (VAR_1->exit)
  VAR_1->exit();
}
