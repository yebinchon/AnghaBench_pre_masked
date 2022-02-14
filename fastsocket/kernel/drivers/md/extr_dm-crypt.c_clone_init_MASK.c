
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dm_crypt_io {TYPE_1__* base_bio; TYPE_2__* target; } ;
struct crypt_config {TYPE_3__* dev; } ;
struct bio {int bi_destructor; int bi_rw; int bi_bdev; int bi_end_io; struct dm_crypt_io* bi_private; } ;
struct TYPE_6__ {int bdev; } ;
struct TYPE_5__ {struct crypt_config* private; } ;
struct TYPE_4__ {int bi_rw; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct dm_crypt_io *VAR_2, struct bio *VAR_3)
{
 struct crypt_config *VAR_4 = VAR_2->target->private;

 VAR_3->bi_private = VAR_2;
 VAR_3->bi_end_io = VAR_0;
 VAR_3->bi_bdev = VAR_4->dev->bdev;
 VAR_3->bi_rw = VAR_2->base_bio->bi_rw;
 VAR_3->bi_destructor = VAR_1;
}
