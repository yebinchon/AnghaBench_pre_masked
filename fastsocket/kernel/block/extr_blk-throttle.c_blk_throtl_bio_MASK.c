
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct throtl_grp {scalar_t__* nr_queued; int * iops; int * io_disp; int * bps; int * bytes_disp; int blkg; } ;
struct throtl_data {int dummy; } ;
struct request_queue {int queue_lock; struct throtl_data* td; } ;
struct blkio_cgroup {int dummy; } ;
struct bio {int bi_rw; int bi_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct bio*,int) ;
 int FUNC_2 (int *,int ,int,int) ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct blkio_cgroup* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct throtl_data*,struct throtl_grp*,struct bio*,int *) ;
 scalar_t__ FUNC_9 (struct throtl_grp*,int) ;
 int FUNC_10 (struct throtl_data*,struct throtl_grp*) ;
 int FUNC_11 (struct throtl_data*,struct throtl_grp*,struct bio*) ;
 int FUNC_12 (struct throtl_grp*,struct bio*) ;
 struct throtl_grp* FUNC_13 (struct throtl_data*,struct blkio_cgroup*) ;
 struct throtl_grp* FUNC_14 (struct throtl_data*) ;
 int FUNC_15 (struct throtl_data*,struct throtl_grp*,char*,char,int ,int ,int ,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_16 (struct throtl_data*) ;
 int FUNC_17 (struct throtl_data*,struct throtl_grp*) ;
 int FUNC_18 (struct throtl_data*,struct throtl_grp*,int) ;
 scalar_t__ FUNC_19 (int) ;

bool FUNC_20(struct request_queue *VAR_5, struct bio *VAR_6)
{
 struct throtl_data *VAR_7 = VAR_5->td;
 struct throtl_grp *VAR_8;
 bool VAR_9 = FUNC_0(VAR_6), VAR_10 = 1;
 struct blkio_cgroup *VAR_11;
 bool VAR_12 = 0;

 if (FUNC_1(VAR_6, VAR_0)) {
  VAR_6->bi_rw &= ~(1 << VAR_0);
  goto out;
 }







 FUNC_3();
 VAR_11 = FUNC_7(VAR_4);
 VAR_8 = FUNC_13(VAR_7, VAR_11);
 if (VAR_8) {
  FUNC_17(VAR_7, VAR_8);

  if (FUNC_9(VAR_8, VAR_9)) {
   FUNC_2(&VAR_8->blkg, VAR_6->bi_size,
     VAR_9, VAR_6->bi_rw & VAR_2);
   FUNC_4();
   goto out;
  }
 }
 FUNC_4();





 FUNC_5(VAR_5->queue_lock);
 VAR_8 = FUNC_14(VAR_7);
 if (FUNC_19(!VAR_8))
  goto out_unlock;

 if (VAR_8->nr_queued[VAR_9]) {




  VAR_10 = 0;
  goto queue_bio;

 }


 if (FUNC_8(VAR_7, VAR_8, VAR_6, ((void*)0))) {
  FUNC_12(VAR_8, VAR_6);
  FUNC_18(VAR_7, VAR_8, VAR_9);
  goto out_unlock;
 }

queue_bio:
 FUNC_15(VAR_7, VAR_8, "[%c] bio. bdisp=%u sz=%u bps=%llu"
   " iodisp=%u iops=%u queued=%d/%d",
   VAR_9 == VAR_1 ? 'R' : 'W',
   VAR_8->bytes_disp[VAR_9], VAR_6->bi_size, VAR_8->bps[VAR_9],
   VAR_8->io_disp[VAR_9], VAR_8->iops[VAR_9],
   VAR_8->nr_queued[VAR_1], VAR_8->nr_queued[VAR_3]);

 FUNC_11(VAR_5->td, VAR_8, VAR_6);
 VAR_12 = 1;

 if (VAR_10) {
  FUNC_10(VAR_7, VAR_8);
  FUNC_16(VAR_7);
 }

out_unlock:
 FUNC_6(VAR_5->queue_lock);
out:
 return VAR_12;
}
