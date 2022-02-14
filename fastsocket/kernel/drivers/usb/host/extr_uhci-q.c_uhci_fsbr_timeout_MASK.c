
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uhci_hcd {int lock; scalar_t__ fsbr_expiring; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct uhci_hcd*) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct uhci_hcd *VAR_1 = (struct uhci_hcd *) VAR_0;
 unsigned long VAR_2;

 FUNC_0(&VAR_1->lock, VAR_2);
 if (VAR_1->fsbr_expiring) {
  VAR_1->fsbr_expiring = 0;
  FUNC_2(VAR_1);
 }
 FUNC_1(&VAR_1->lock, VAR_2);
}
