
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qib_diag_client {struct qib_diag_client* next; scalar_t__ pid; struct qib_devdata* dd; int state; } ;
struct qib_devdata {struct qib_diag_client* diag_client; } ;


 int VAR_0 ;
 struct qib_diag_client* VAR_1 ;

__attribute__((used)) static void FUNC_0(struct qib_diag_client *VAR_2)
{
 struct qib_devdata *VAR_3 = VAR_2->dd;
 struct qib_diag_client *VAR_4, *VAR_5;

 VAR_5 = ((void*)0);
 if (VAR_2 == VAR_3->diag_client) {
  VAR_3->diag_client = VAR_2->next;
  VAR_5 = VAR_2;
 } else {
  VAR_4 = VAR_2->dd->diag_client;
  while (VAR_4) {
   if (VAR_2 == VAR_4->next) {
    VAR_4->next = VAR_2->next;
    VAR_5 = VAR_2;
    break;
   }
   VAR_4 = VAR_4->next;
  }
 }
 if (VAR_5) {
  VAR_5->state = VAR_0;
  VAR_5->dd = ((void*)0);
  VAR_5->pid = 0;
  VAR_5->next = VAR_1;
  VAR_1 = VAR_5;
 }
}
