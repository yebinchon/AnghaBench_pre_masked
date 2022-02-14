
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop_device {int dummy; } ;
struct bio {int bi_private; int bi_bdev; } ;


 int FUNC_0 (struct bio*,int) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct loop_device*,struct bio*) ;
 int FUNC_3 (struct loop_device*,int ) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static inline void FUNC_5(struct loop_device *VAR_0, struct bio *VAR_1)
{
 if (FUNC_4(!VAR_1->bi_bdev)) {
  FUNC_3(VAR_0, VAR_1->bi_private);
  FUNC_1(VAR_1);
 } else {
  int VAR_2 = FUNC_2(VAR_0, VAR_1);
  FUNC_0(VAR_1, VAR_2);
 }
}
