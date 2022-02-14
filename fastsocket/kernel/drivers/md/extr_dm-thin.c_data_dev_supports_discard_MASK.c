
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct pool_c {TYPE_1__* data_dev; } ;
struct TYPE_2__ {int bdev; } ;


 struct request_queue* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct request_queue*) ;

__attribute__((used)) static bool FUNC_2(struct pool_c *VAR_0)
{
 struct request_queue *VAR_1 = FUNC_0(VAR_0->data_dev->bdev);

 return VAR_1 && FUNC_1(VAR_1);
}
