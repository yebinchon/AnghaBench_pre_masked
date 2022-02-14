
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bi_bdev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (struct bio*) ;

int FUNC_3(struct bio *VAR_0)
{

 if (FUNC_2(VAR_0))
  return 0;

 return FUNC_0(VAR_0->bi_bdev, FUNC_1(VAR_0));
}
