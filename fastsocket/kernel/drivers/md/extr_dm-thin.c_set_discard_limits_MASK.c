
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct queue_limits {int max_discard_sectors; int discard_granularity; } ;
struct TYPE_4__ {scalar_t__ discard_passdown; } ;
struct pool_c {TYPE_2__* data_dev; TYPE_1__ adjusted_pf; struct pool* pool; } ;
struct pool {int sectors_per_block; } ;
struct TYPE_6__ {struct queue_limits limits; } ;
struct TYPE_5__ {int bdev; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct pool_c *VAR_1, struct queue_limits *VAR_2)
{
 struct pool *VAR_3 = VAR_1->pool;
 struct queue_limits *VAR_4;

 VAR_2->max_discard_sectors = VAR_3->sectors_per_block;




 if (VAR_1->adjusted_pf.discard_passdown) {
  VAR_4 = &FUNC_0(VAR_1->data_dev->bdev)->limits;
  VAR_2->discard_granularity = VAR_4->discard_granularity;
 } else
  VAR_2->discard_granularity = VAR_3->sectors_per_block << VAR_0;
}
