
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct cx88_core {int name; } ;
struct TYPE_4__ {int disabled; } ;
struct TYPE_3__ {int timeout; int active; } ;
struct cx8802_dev {TYPE_2__ state; struct cx88_core* core; int slock; TYPE_1__ mpegq; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct cx8802_dev*) ;
 int FUNC_1 (struct cx88_core*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 struct cx8802_dev* FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 scalar_t__ FUNC_9 (struct pci_dev*,int ) ;
 int FUNC_10 (char*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct pci_dev *VAR_0, pm_message_t VAR_1)
{
 struct cx8802_dev *VAR_2 = FUNC_7(VAR_0);
 struct cx88_core *VAR_3 = VAR_2->core;


 FUNC_11(&VAR_2->slock);
 if (!FUNC_4(&VAR_2->mpegq.active)) {
  FUNC_3( 2, "suspend\n" );
  FUNC_10("%s: suspend mpeg\n", VAR_3->name);
  FUNC_0(VAR_2);
  FUNC_2(&VAR_2->mpegq.timeout);
 }
 FUNC_12(&VAR_2->slock);


 FUNC_1(VAR_2->core);

 FUNC_8(VAR_0);
 if (0 != FUNC_9(VAR_0, FUNC_5(VAR_0, VAR_1))) {
  FUNC_6(VAR_0);
  VAR_2->state.disabled = 1;
 }
 return 0;
}
