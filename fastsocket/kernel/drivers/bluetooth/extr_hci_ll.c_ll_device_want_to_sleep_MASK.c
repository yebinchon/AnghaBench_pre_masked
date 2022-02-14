
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ll_struct {scalar_t__ hcill_state; int hcill_lock; } ;
struct hci_uart {struct ll_struct* priv; } ;


 int FUNC_0 (char*,struct hci_uart*) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct hci_uart*) ;
 scalar_t__ FUNC_3 (int ,struct hci_uart*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct hci_uart *VAR_3)
{
 unsigned long VAR_4;
 struct ll_struct *VAR_5 = VAR_3->priv;

 FUNC_0("hu %p", VAR_3);


 FUNC_4(&VAR_5->hcill_lock, VAR_4);


 if (VAR_5->hcill_state != VAR_1)
  FUNC_1("ERR: HCILL_GO_TO_SLEEP_IND in state %ld", VAR_5->hcill_state);


 if (FUNC_3(VAR_2, VAR_3) < 0) {
  FUNC_1("cannot acknowledge device sleep");
  goto out;
 }


 VAR_5->hcill_state = VAR_0;

out:
 FUNC_5(&VAR_5->hcill_lock, VAR_4);


 FUNC_2(VAR_3);
}
