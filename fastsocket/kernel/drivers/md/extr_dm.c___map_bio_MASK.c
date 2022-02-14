
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mapped_device {struct dm_target_io* bs; } ;
struct dm_target_io {TYPE_4__* io; int info; } ;
struct dm_target {TYPE_1__* type; } ;
struct bio {struct dm_target_io* bi_private; int * bi_end_io; int bi_bdev; int bi_sector; } ;
typedef int sector_t ;
struct TYPE_8__ {struct mapped_device* md; TYPE_3__* bio; int io_count; } ;
struct TYPE_7__ {TYPE_2__* bi_bdev; } ;
struct TYPE_6__ {int bd_dev; } ;
struct TYPE_5__ {int (* map ) (struct dm_target*,struct bio*,int *) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bio*) ;
 int * VAR_2 ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (struct mapped_device*,struct dm_target_io*) ;
 int FUNC_7 (struct bio*) ;
 int FUNC_8 (struct dm_target*,struct bio*,int *) ;
 int FUNC_9 (int ,struct bio*,int ,int ) ;

__attribute__((used)) static void FUNC_10(struct dm_target *VAR_3, struct bio *VAR_4,
        struct dm_target_io *VAR_5)
{
 int VAR_6;
 sector_t VAR_7;
 struct mapped_device *VAR_8;

 VAR_4->bi_end_io = VAR_2;
 VAR_4->bi_private = VAR_5;






 FUNC_2(&VAR_5->io->io_count);
 VAR_7 = VAR_4->bi_sector;
 VAR_6 = VAR_3->type->map(VAR_3, VAR_4, &VAR_5->info);
 if (VAR_6 == VAR_0) {


  FUNC_9(FUNC_3(VAR_4->bi_bdev), VAR_4,
        VAR_5->io->bio->bi_bdev->bd_dev, VAR_7);

  FUNC_7(VAR_4);
 } else if (VAR_6 < 0 || VAR_6 == VAR_1) {

  VAR_8 = VAR_5->io->md;
  FUNC_5(VAR_5->io, VAR_6);



  VAR_4->bi_end_io = ((void*)0);
  VAR_4->bi_private = VAR_8->bs;
  FUNC_4(VAR_4);
  FUNC_6(VAR_8, VAR_5);
 } else if (VAR_6) {
  FUNC_1("unimplemented target map return value: %d", VAR_6);
  FUNC_0();
 }
}
