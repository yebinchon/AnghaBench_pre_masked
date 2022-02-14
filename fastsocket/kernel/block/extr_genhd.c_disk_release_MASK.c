
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gendisk {scalar_t__ queue; int part0; struct gendisk* random; } ;
struct device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct gendisk* FUNC_1 (struct device*) ;
 int FUNC_2 (struct gendisk*,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct gendisk*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct gendisk *VAR_1 = FUNC_1(VAR_0);

 FUNC_4(VAR_1->random);
 FUNC_2(VAR_1, ((void*)0));
 FUNC_3(&VAR_1->part0);
 if (VAR_1->queue)
  FUNC_0(VAR_1->queue);
 FUNC_4(VAR_1);
}
