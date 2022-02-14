
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_device {TYPE_1__* mtd; } ;
struct TYPE_2__ {int (* sync ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 struct ubi_device* FUNC_1 (int) ;
 int FUNC_2 (struct ubi_device*) ;

int FUNC_3(int VAR_1)
{
 struct ubi_device *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2)
  return -VAR_0;

 if (VAR_2->mtd->sync)
  VAR_2->mtd->sync(VAR_2->mtd);

 FUNC_2(VAR_2);
 return 0;
}
