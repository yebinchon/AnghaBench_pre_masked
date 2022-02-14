
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct dm_target {int dummy; } ;
struct dm_dev {struct block_device* bdev; } ;
struct block_device {int dummy; } ;
typedef int sector_t ;


 struct request_queue* FUNC_0 (struct block_device*) ;
 int FUNC_1 (struct request_queue*) ;

__attribute__((used)) static int FUNC_2(struct dm_target *VAR_0,
      struct dm_dev *VAR_1, sector_t VAR_2,
      sector_t VAR_3, void *VAR_4)
{
 struct block_device *VAR_5 = VAR_1->bdev;
 struct request_queue *VAR_6 = FUNC_0(VAR_5);

 return FUNC_1(VAR_6);
}
