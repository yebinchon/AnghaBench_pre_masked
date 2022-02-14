
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_snapshot {int lock; int complete; int valid; } ;
struct dm_exception {int old_chunk; } ;
struct dm_snap_pending_exception {int full_bio_private; int full_bio_end_io; struct bio* full_bio; int origin_bios; int snapshot_bios; struct dm_exception e; struct dm_snapshot* snap; } ;
struct bio {int bi_private; int bi_end_io; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dm_snapshot*,int ) ;
 int FUNC_1 (struct dm_snapshot*,int ) ;
 struct dm_exception* FUNC_2 () ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct bio*) ;
 struct bio* FUNC_5 (int *) ;
 int FUNC_6 (int *,struct dm_exception*) ;
 int FUNC_7 (struct dm_exception*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct bio*) ;
 int FUNC_10 (struct bio*) ;
 int FUNC_11 (struct dm_exception*) ;
 int FUNC_12 (struct dm_snap_pending_exception*) ;
 int FUNC_13 () ;
 int FUNC_14 (struct dm_snapshot*,struct bio*) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void FUNC_16(struct dm_snap_pending_exception *VAR_2, int VAR_3)
{
 struct dm_exception *VAR_4;
 struct dm_snapshot *VAR_5 = VAR_2->snap;
 struct bio *VAR_6 = ((void*)0);
 struct bio *VAR_7 = ((void*)0);
 struct bio *VAR_8 = ((void*)0);
 int VAR_9 = 0;

 if (!VAR_3) {

  FUNC_8(&VAR_5->lock);
  FUNC_1(VAR_5, -VAR_0);
  VAR_9 = 1;
  goto out;
 }

 VAR_4 = FUNC_2();
 if (!VAR_4) {
  FUNC_8(&VAR_5->lock);
  FUNC_1(VAR_5, -VAR_1);
  VAR_9 = 1;
  goto out;
 }
 *VAR_4 = VAR_2->e;

 FUNC_8(&VAR_5->lock);
 if (!VAR_5->valid) {
  FUNC_11(VAR_4);
  VAR_9 = 1;
  goto out;
 }


 FUNC_0(VAR_5, VAR_2->e.old_chunk);





 FUNC_6(&VAR_5->complete, VAR_4);

out:
 FUNC_7(&VAR_2->e);
 VAR_7 = FUNC_5(&VAR_2->snapshot_bios);
 VAR_6 = FUNC_5(&VAR_2->origin_bios);
 VAR_8 = VAR_2->full_bio;
 if (VAR_8) {
  VAR_8->bi_end_io = VAR_2->full_bio_end_io;
  VAR_8->bi_private = VAR_2->full_bio_private;
 }
 FUNC_12(VAR_2);

 FUNC_13();

 FUNC_15(&VAR_5->lock);


 if (VAR_9) {
  if (VAR_8)
   FUNC_4(VAR_8);
  FUNC_9(VAR_7);
 } else {
  if (VAR_8)
   FUNC_3(VAR_8, 0);
  FUNC_10(VAR_7);
 }

 FUNC_14(VAR_5, VAR_6);
}
