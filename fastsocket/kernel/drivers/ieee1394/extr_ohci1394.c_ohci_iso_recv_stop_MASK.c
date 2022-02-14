
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int context; } ;
struct ohci_iso_recv {int ContextControlClear; int ohci; TYPE_1__ task; } ;
struct hpsb_iso {struct ohci_iso_recv* hostdata; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct hpsb_iso *VAR_1)
{
 struct ohci_iso_recv *VAR_2 = VAR_1->hostdata;


 FUNC_1(VAR_2->ohci, VAR_0, 1 << VAR_2->task.context);


 FUNC_0(VAR_2->ohci, VAR_2->ContextControlClear, ((void*)0));
}
