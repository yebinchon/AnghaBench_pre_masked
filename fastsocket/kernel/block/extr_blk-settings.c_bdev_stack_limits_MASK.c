
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int limits; } ;
struct queue_limits {int dummy; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 struct request_queue* FUNC_0 (struct block_device*) ;
 int FUNC_1 (struct queue_limits*,int *,int ) ;
 scalar_t__ FUNC_2 (struct block_device*) ;

int FUNC_3(struct queue_limits *VAR_0, struct block_device *VAR_1,
        sector_t VAR_2)
{
 struct request_queue *VAR_3 = FUNC_0(VAR_1);

 VAR_2 += FUNC_2(VAR_1);

 return FUNC_1(VAR_0, &VAR_3->limits, VAR_2);
}
