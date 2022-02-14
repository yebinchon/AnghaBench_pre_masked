
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct queue_limits {scalar_t__ max_discard_sectors; scalar_t__ discard_granularity; } ;
struct TYPE_5__ {int discard_passdown; } ;
struct pool_c {TYPE_2__ adjusted_pf; TYPE_1__* data_dev; struct pool* pool; } ;
struct pool {scalar_t__ sectors_per_block; } ;
struct block_device {int dummy; } ;
typedef scalar_t__ sector_t ;
struct TYPE_6__ {struct queue_limits limits; } ;
struct TYPE_4__ {struct block_device* bdev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char const*) ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*,char*) ;
 int FUNC_3 (struct pool_c*) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct pool_c *VAR_2)
{
 struct pool *VAR_3 = VAR_2->pool;
 struct block_device *VAR_4 = VAR_2->data_dev->bdev;
 struct queue_limits *VAR_5 = &FUNC_1(VAR_4)->limits;
 sector_t VAR_6 = VAR_3->sectors_per_block << VAR_1;
 const char *VAR_7 = ((void*)0);
 char VAR_8[VAR_0];

 if (!VAR_2->adjusted_pf.discard_passdown)
  return;

 if (!FUNC_3(VAR_2))
  VAR_7 = "discard unsupported";

 else if (VAR_5->max_discard_sectors < VAR_3->sectors_per_block)
  VAR_7 = "max discard sectors smaller than a block";

 else if (VAR_5->discard_granularity > VAR_6)
  VAR_7 = "discard granularity larger than a block";

 else if (!FUNC_4(VAR_6, VAR_5->discard_granularity))
  VAR_7 = "discard granularity not a factor of block size";

 if (VAR_7) {
  FUNC_0("Data device (%s) %s: Disabling discard passdown.", FUNC_2(VAR_4, VAR_8), VAR_7);
  VAR_2->adjusted_pf.discard_passdown = 0;
 }
}
