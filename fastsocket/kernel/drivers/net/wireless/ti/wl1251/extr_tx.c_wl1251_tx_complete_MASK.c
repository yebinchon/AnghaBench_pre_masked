
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wl1251 {scalar_t__ state; int next_tx_complete; int tx_queue_stopped; TYPE_1__* data_path; int wl_lock; int hw; int tx_work; int tx_queue; } ;
struct tx_result {int done_1; int done_2; } ;
typedef int result ;
struct TYPE_2__ {scalar_t__ tx_complete_addr; } ;


 int FUNC_0 (struct tx_result*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct wl1251*,scalar_t__,struct tx_result*,int) ;
 int FUNC_9 (struct wl1251*,scalar_t__,struct tx_result*,int) ;
 int FUNC_10 (struct wl1251*,struct tx_result*) ;

void FUNC_11(struct wl1251 *VAR_4)
{
 int VAR_5, VAR_6, VAR_7 = 0, VAR_8;
 struct tx_result VAR_9[VAR_1], *VAR_10;
 unsigned long VAR_11;

 if (FUNC_6(VAR_4->state != VAR_2))
  return;


 FUNC_8(VAR_4, VAR_4->data_path->tx_complete_addr,
       VAR_9, sizeof(VAR_9));

 VAR_6 = VAR_4->next_tx_complete;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_9); VAR_5++) {
  VAR_10 = &VAR_9[VAR_6];

  if (VAR_10->done_1 == 1 &&
      VAR_10->done_2 == 1) {
   FUNC_10(VAR_4, VAR_10);

   VAR_10->done_1 = 0;
   VAR_10->done_2 = 0;

   VAR_6 = (VAR_6 + 1) &
    (VAR_1 - 1);
   VAR_7++;
  } else {
   break;
  }
 }

 VAR_8 = FUNC_3(&VAR_4->tx_queue);

 if ((VAR_7 > 0) && (VAR_8 > 0)) {

  FUNC_7(VAR_0, "tx_complete: reschedule tx_work");
  FUNC_1(VAR_4->hw, &VAR_4->tx_work);
 }

 if (VAR_4->tx_queue_stopped &&
     VAR_8 <= VAR_3) {

  FUNC_7(VAR_0, "tx_complete: waking queues");
  FUNC_4(&VAR_4->wl_lock, VAR_11);
  FUNC_2(VAR_4->hw);
  VAR_4->tx_queue_stopped = 0;
  FUNC_5(&VAR_4->wl_lock, VAR_11);
 }


 if (VAR_7) {




  if (VAR_6 > VAR_4->next_tx_complete) {

   FUNC_9(VAR_4,
      VAR_4->data_path->tx_complete_addr +
      (VAR_4->next_tx_complete *
       sizeof(struct tx_result)),
      &VAR_9[VAR_4->next_tx_complete],
      VAR_7 *
      sizeof(struct tx_result));


  } else if (VAR_6 < VAR_4->next_tx_complete) {

   FUNC_9(VAR_4,
      VAR_4->data_path->tx_complete_addr +
      (VAR_4->next_tx_complete *
       sizeof(struct tx_result)),
      &VAR_9[VAR_4->next_tx_complete],
      (VAR_1 -
       VAR_4->next_tx_complete) *
      sizeof(struct tx_result));

   FUNC_9(VAR_4,
      VAR_4->data_path->tx_complete_addr,
      VAR_9,
      (VAR_7 -
       VAR_1 +
       VAR_4->next_tx_complete) *
      sizeof(struct tx_result));

  } else {

   FUNC_9(VAR_4,
      VAR_4->data_path->tx_complete_addr,
      VAR_9,
      VAR_1 *
      sizeof(struct tx_result));
  }

 }

 VAR_4->next_tx_complete = VAR_6;
}
