
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union map_info {int dummy; } map_info ;
struct dm_target {struct dm_dev* private; } ;
struct dm_dev {int bdev; } ;
struct bio {int bi_rw; int bi_bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct dm_dev*,struct bio*) ;

__attribute__((used)) static int FUNC_2(struct dm_target *VAR_3, struct bio *VAR_4,
        union map_info *VAR_5)
{
 struct dm_dev *VAR_6 = VAR_3->private;
 VAR_4->bi_bdev = VAR_6->bdev;

 if (VAR_4->bi_rw & VAR_0)
  return VAR_1;


 return (FUNC_0(VAR_4) == VAR_2) ? FUNC_1(VAR_6, VAR_4) : VAR_1;
}
