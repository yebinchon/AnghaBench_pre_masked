
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehci_hcd {int lock; int async; int actions; } ;


 int VAR_0 ;
 int FUNC_0 (struct ehci_hcd*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct ehci_hcd*,int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_1)
{
 struct ehci_hcd *VAR_2 = (struct ehci_hcd *) VAR_1;
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);


 if (FUNC_4 (VAR_0, &VAR_2->actions))
  FUNC_3 (VAR_2, VAR_2->async);


 FUNC_0 (VAR_2);

 FUNC_2 (&VAR_2->lock, VAR_3);
}
