
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int status; int actual_length; struct catc* context; } ;
struct catc {int tx_lock; TYPE_2__* netdev; int flags; scalar_t__ tx_ptr; } ;
struct TYPE_3__ {int tx_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; int trans_start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct catc*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,...) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct urb *VAR_3)
{
 struct catc *VAR_4 = VAR_3->context;
 unsigned long VAR_5;
 int VAR_6, VAR_7 = VAR_3->status;

 if (VAR_7 == -VAR_0) {
  FUNC_2("Tx Reset.");
  VAR_3->status = 0;
  VAR_4->netdev->trans_start = VAR_2;
  VAR_4->netdev->stats.tx_errors++;
  FUNC_1(VAR_1, &VAR_4->flags);
  FUNC_3(VAR_4->netdev);
  return;
 }

 if (VAR_7) {
  FUNC_2("tx_done, status %d, length %d", VAR_7, VAR_3->actual_length);
  return;
 }

 FUNC_4(&VAR_4->tx_lock, VAR_5);

 if (VAR_4->tx_ptr) {
  VAR_6 = FUNC_0(VAR_4);
  if (FUNC_6(VAR_6 < 0))
   FUNC_1(VAR_1, &VAR_4->flags);
 } else {
  FUNC_1(VAR_1, &VAR_4->flags);
 }

 FUNC_3(VAR_4->netdev);

 FUNC_5(&VAR_4->tx_lock, VAR_5);
}
