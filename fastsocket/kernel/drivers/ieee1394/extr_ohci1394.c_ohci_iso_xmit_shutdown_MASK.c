
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohci_iso_xmit {int prog; scalar_t__ task_active; int task; int ohci; } ;
struct hpsb_iso {struct ohci_iso_xmit* hostdata; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ohci_iso_xmit*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct hpsb_iso*) ;

__attribute__((used)) static void FUNC_4(struct hpsb_iso *VAR_0)
{
 struct ohci_iso_xmit *VAR_1 = VAR_0->hostdata;

 if (VAR_1->task_active) {
  FUNC_3(VAR_0);
  FUNC_2(VAR_1->ohci, &VAR_1->task);
  VAR_1->task_active = 0;
 }

 FUNC_0(&VAR_1->prog);
 FUNC_1(VAR_1);
 VAR_0->hostdata = ((void*)0);
}
