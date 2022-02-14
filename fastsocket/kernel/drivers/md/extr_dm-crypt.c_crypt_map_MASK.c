
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union map_info {int dummy; } map_info ;
struct dm_target {struct crypt_config* private; } ;
struct dm_crypt_io {int base_bio; } ;
struct crypt_config {TYPE_1__* dev; } ;
struct bio {int bi_rw; int bi_sector; int bi_bdev; } ;
struct TYPE_2__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 struct dm_crypt_io* FUNC_1 (struct dm_target*,struct bio*,int ) ;
 int FUNC_2 (struct dm_target*,int ) ;
 int FUNC_3 (struct dm_crypt_io*) ;
 int FUNC_4 (struct dm_crypt_io*) ;

__attribute__((used)) static int FUNC_5(struct dm_target *VAR_4, struct bio *VAR_5,
       union map_info *VAR_6)
{
 struct dm_crypt_io *VAR_7;
 struct crypt_config *VAR_8;

 if (VAR_5->bi_rw & VAR_0) {
  VAR_8 = VAR_4->private;
  VAR_5->bi_bdev = VAR_8->dev->bdev;
  return VAR_1;
 }

 VAR_7 = FUNC_1(VAR_4, VAR_5, FUNC_2(VAR_4, VAR_5->bi_sector));

 if (FUNC_0(VAR_7->base_bio) == VAR_3)
  FUNC_4(VAR_7);
 else
  FUNC_3(VAR_7);

 return VAR_2;
}
