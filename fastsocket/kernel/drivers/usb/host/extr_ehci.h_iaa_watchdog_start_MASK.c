
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehci_hcd {int iaa_watchdog; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void
FUNC_4(struct ehci_hcd *VAR_2)
{
 FUNC_0(FUNC_3(&VAR_2->iaa_watchdog));
 FUNC_1(&VAR_2->iaa_watchdog,
   VAR_1 + FUNC_2(VAR_0));
}
