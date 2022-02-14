
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int wait_for_stripe; int active_aligned_reads; int mddev; } ;
struct mddev {struct r5conf* private; } ;
struct md_rdev {struct mddev* mddev; } ;
struct bio {int bi_bdev; int * bi_next; int bi_flags; struct bio* bi_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*,struct r5conf*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bio*,int ) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct md_rdev*,int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,struct bio*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct bio *VAR_1, int VAR_2)
{
 struct bio* VAR_3 = VAR_1->bi_private;
 struct mddev *VAR_4;
 struct r5conf *VAR_5;
 int VAR_6 = FUNC_7(VAR_0, &VAR_1->bi_flags);
 struct md_rdev *VAR_7;

 FUNC_4(VAR_1);

 VAR_7 = (void*)VAR_3->bi_next;
 VAR_3->bi_next = ((void*)0);
 VAR_4 = VAR_7->mddev;
 VAR_5 = VAR_4->private;

 FUNC_6(VAR_7, VAR_5->mddev);

 if (!VAR_2 && VAR_6) {
  FUNC_8(FUNC_2(VAR_3->bi_bdev),
      VAR_3);
  FUNC_3(VAR_3, 0);
  if (FUNC_1(&VAR_5->active_aligned_reads))
   FUNC_9(&VAR_5->wait_for_stripe);
  return;
 }


 FUNC_5("raid5_align_endio : io error...handing IO for a retry\n");

 FUNC_0(VAR_3, VAR_5);
}
