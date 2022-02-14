
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bio {int bi_rw; int bi_idx; int bi_sector; } ;
struct mapped_device {struct bio flush_bio; } ;
struct clone_info {int map; TYPE_1__* io; scalar_t__ sector_count; struct bio* bio; struct mapped_device* md; int idx; int sector; } ;
struct TYPE_4__ {int endio_lock; struct mapped_device* md; struct bio* bio; int io_count; int error; } ;


 int VAR_0 ;
 int FUNC_0 (struct clone_info*) ;
 int FUNC_1 (struct clone_info*) ;
 TYPE_1__* FUNC_2 (struct mapped_device*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (struct bio*) ;
 scalar_t__ FUNC_5 (struct bio*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (struct mapped_device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct mapped_device *VAR_1, struct bio *VAR_2)
{
 struct clone_info VAR_3;
 int VAR_4 = 0;

 VAR_3.map = FUNC_7(VAR_1);
 if (FUNC_11(!VAR_3.map)) {
  FUNC_4(VAR_2);
  return;
 }

 VAR_3.md = VAR_1;
 VAR_3.io = FUNC_2(VAR_1);
 VAR_3.io->error = 0;
 FUNC_3(&VAR_3.io->io_count, 1);
 VAR_3.io->bio = VAR_2;
 VAR_3.io->md = VAR_1;
 FUNC_9(&VAR_3.io->endio_lock);
 VAR_3.sector = VAR_2->bi_sector;
 VAR_3.idx = VAR_2->bi_idx;

 FUNC_10(VAR_3.io);
 if (VAR_2->bi_rw & VAR_0) {
  VAR_3.bio = &VAR_3.md->flush_bio;
  VAR_3.sector_count = 0;
  VAR_4 = FUNC_1(&VAR_3);

 } else {
  VAR_3.bio = VAR_2;
  VAR_3.sector_count = FUNC_5(VAR_2);
  while (VAR_3.sector_count && !VAR_4)
   VAR_4 = FUNC_0(&VAR_3);
 }


 FUNC_6(VAR_3.io, VAR_4);
 FUNC_8(VAR_3.map);
}
