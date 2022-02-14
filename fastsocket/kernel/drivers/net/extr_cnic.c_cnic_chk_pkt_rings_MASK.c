
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct cnic_local {scalar_t__* rx_cons_ptr; scalar_t__* tx_cons_ptr; scalar_t__ tx_cons; scalar_t__ rx_cons; int cnic_local_flags; TYPE_1__* udev; } ;
struct TYPE_2__ {int cnic_uinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct cnic_local*) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct cnic_local *VAR_2)
{
 u16 VAR_3, VAR_4;
 int VAR_5 = 0;

 if (!FUNC_2(VAR_1, &VAR_2->cnic_local_flags))
  return;

 VAR_3 = *VAR_2->rx_cons_ptr;
 VAR_4 = *VAR_2->tx_cons_ptr;
 if (VAR_2->tx_cons != VAR_4 || VAR_2->rx_cons != VAR_3) {
  if (FUNC_2(VAR_0, &VAR_2->cnic_local_flags))
   VAR_5 = FUNC_1(VAR_2);

  VAR_2->tx_cons = VAR_4;
  VAR_2->rx_cons = VAR_3;

  if (VAR_2->udev)
   FUNC_3(&VAR_2->udev->cnic_uinfo);
 }
 if (VAR_5)
  FUNC_0(VAR_0, &VAR_2->cnic_local_flags);
}
