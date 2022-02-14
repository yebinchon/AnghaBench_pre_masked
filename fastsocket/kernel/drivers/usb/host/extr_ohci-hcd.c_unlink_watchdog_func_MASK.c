
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ohci_hcd {unsigned int eds_scheduled; int zf_delay; int lock; int unlink_watchdog; TYPE_1__* regs; struct ed* ed_to_check; struct ed** periodic; } ;
struct ed {struct ed* ed_next; } ;
struct TYPE_2__ {int control; int intrenable; int intrstatus; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ohci_hcd*,struct ed*) ;
 scalar_t__ VAR_4 ;
 struct ed** FUNC_1 (unsigned int,int,int ) ;
 int FUNC_2 (struct ed**) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct ohci_hcd*,int *) ;
 int FUNC_5 (struct ohci_hcd*,int ,int *) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_5)
{
 unsigned long VAR_6;
 unsigned VAR_7;
 unsigned VAR_8 = 0;
 unsigned VAR_9;
 struct ed **VAR_10 = ((void*)0);
 struct ohci_hcd *VAR_11 = (struct ohci_hcd *) VAR_5;

 FUNC_7(&VAR_11->lock, VAR_6);
 VAR_7 = VAR_11->eds_scheduled;
 if (!VAR_7)
  goto done;

 if (VAR_11->ed_to_check)
  goto out;

 VAR_10 = FUNC_1(VAR_7, sizeof *VAR_10, VAR_0);
 if (!VAR_10)
  goto out;

 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  struct ed *VAR_12 = VAR_11->periodic[VAR_9];

  while (VAR_12) {
   unsigned VAR_13;


   for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++) {
    if (VAR_10[VAR_13] == VAR_12) {

     VAR_12 = ((void*)0);
     break;
    }
   }
   if (!VAR_12)
    break;
   VAR_10[VAR_8++] = VAR_12;
   if (!FUNC_0(VAR_11, VAR_12)) {
    VAR_12 = VAR_12->ed_next;
    continue;
   }




   VAR_11->ed_to_check = VAR_12;
   VAR_11->zf_delay = 2;







   FUNC_5(VAR_11, VAR_3,
     &VAR_11->regs->intrstatus);
   FUNC_5(VAR_11, VAR_3,
     &VAR_11->regs->intrenable);


   (void) FUNC_4(VAR_11, &VAR_11->regs->control);

   goto out;
  }
 }
out:
 FUNC_2(VAR_10);
 if (VAR_11->eds_scheduled)
  FUNC_3(&VAR_11->unlink_watchdog, FUNC_6(VAR_4 + VAR_1));
done:
 FUNC_8(&VAR_11->lock, VAR_6);
}
