
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ti_ohci {int dummy; } ;
struct TYPE_2__ {int context; } ;
struct ohci_iso_xmit {int ContextControlClear; struct ti_ohci* ohci; TYPE_1__ task; } ;
struct hpsb_iso {struct ohci_iso_xmit* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct ti_ohci*,int ,int *) ;
 int FUNC_2 (struct ti_ohci*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct hpsb_iso *VAR_2)
{
 struct ohci_iso_xmit *VAR_3 = VAR_2->hostdata;
 struct ti_ohci *VAR_4 = VAR_3->ohci;


 FUNC_2(VAR_3->ohci, VAR_1, 1 << VAR_3->task.context);


 if (FUNC_1(VAR_3->ohci, VAR_3->ContextControlClear, ((void*)0))) {

  FUNC_0(VAR_0,
        "you probably exceeded the OHCI card's bandwidth limit - "
        "reload the module and reduce xmit bandwidth");
 }
}
