
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ehci_hcd {int dummy; } ;
struct TYPE_3__ {int controller; } ;
struct TYPE_4__ {TYPE_1__ self; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct ehci_hcd*) ;
 TYPE_2__* FUNC_2 (struct ehci_hcd*) ;

__attribute__((used)) static inline void FUNC_3(struct ehci_hcd *VAR_1)
{

 if (!FUNC_1(VAR_1))
  FUNC_0(FUNC_2(VAR_1)->self.controller,
       &VAR_0);
}
