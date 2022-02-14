
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_target {int split_io; struct dm_dev* private; } ;
struct dm_dev {int bdev; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct dm_target *VAR_0)
{
 struct dm_dev *VAR_1 = VAR_0->private;

 VAR_0->split_io = FUNC_0(VAR_1->bdev);
}
