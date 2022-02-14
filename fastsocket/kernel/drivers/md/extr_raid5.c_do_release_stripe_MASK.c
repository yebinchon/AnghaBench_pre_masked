
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stripe_head {scalar_t__ bm_seq; int lru; int state; } ;
struct r5conf {scalar_t__ seq_write; TYPE_1__* mddev; scalar_t__ retry_read_aligned; int wait_for_stripe; int inactive_list; int active_stripes; int preread_active_stripes; int handle_list; int plug; int bitmap_list; int delayed_list; } ;
struct TYPE_2__ {int thread; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct stripe_head*) ;
 scalar_t__ FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct r5conf *VAR_6, struct stripe_head *VAR_7)
{
 FUNC_0(!FUNC_6(&VAR_7->lru));
 FUNC_0(FUNC_3(&VAR_6->active_stripes)==0);
 if (FUNC_11(VAR_4, &VAR_7->state)) {
  if (FUNC_11(VAR_2, &VAR_7->state) &&
      !FUNC_11(VAR_5, &VAR_7->state)) {
   FUNC_5(&VAR_7->lru, &VAR_6->delayed_list);
   FUNC_8(&VAR_6->plug);
  } else if (FUNC_11(VAR_1, &VAR_7->state) &&
      VAR_7->bm_seq - VAR_6->seq_write > 0) {
   FUNC_5(&VAR_7->lru, &VAR_6->bitmap_list);
   FUNC_8(&VAR_6->plug);
  } else {
   FUNC_4(VAR_2, &VAR_7->state);
   FUNC_4(VAR_1, &VAR_7->state);
   FUNC_5(&VAR_7->lru, &VAR_6->handle_list);
  }
  FUNC_7(VAR_6->mddev->thread);
 } else {
  FUNC_0(FUNC_9(VAR_7));
  if (FUNC_10(VAR_5, &VAR_7->state))
   if (FUNC_2(&VAR_6->preread_active_stripes)
       < VAR_0)
    FUNC_7(VAR_6->mddev->thread);
  FUNC_1(&VAR_6->active_stripes);
  if (!FUNC_11(VAR_3, &VAR_7->state)) {
   FUNC_5(&VAR_7->lru, &VAR_6->inactive_list);
   FUNC_12(&VAR_6->wait_for_stripe);
   if (VAR_6->retry_read_aligned)
    FUNC_7(VAR_6->mddev->thread);
  }
 }
}
