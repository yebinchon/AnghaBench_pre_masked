
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hci_link_key {struct hci_link_key* next; struct hci_link_key* keyres; struct hci_link_key* ires; } ;
struct hci_link {struct hci_link* next; } ;
struct hci_inq_res {struct hci_inq_res* next; struct hci_inq_res* keyres; struct hci_inq_res* ires; } ;


 int FUNC_0 (int *,struct hci_link_key*) ;
 struct hci_link* VAR_0 ;
 int FUNC_1 (struct hci_link*) ;
 struct hci_link_key* VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_3(void)
{
 struct hci_link *VAR_4,*VAR_5;
 struct hci_inq_res *VAR_6,*VAR_7;
 struct hci_link_key *VAR_8,*VAR_9;

 for(VAR_4=VAR_0;VAR_4!=((void*)0);) {
  VAR_5 = VAR_4->next;
  FUNC_1(VAR_4);
  VAR_4 = VAR_5;
 }
 VAR_0 = ((void*)0);

 for(VAR_6=VAR_1->ires;VAR_6!=((void*)0);) {
  VAR_7 = VAR_6->next;
  FUNC_0(&VAR_2,VAR_6);
  VAR_6 = VAR_7;
 }

 for(VAR_8=VAR_1->keyres;VAR_8!=((void*)0);) {
  VAR_9 = VAR_8->next;
  FUNC_0(&VAR_2,VAR_8);
  VAR_8 = VAR_9;
 }
 FUNC_0(&VAR_3,VAR_1);

 FUNC_2();
}
