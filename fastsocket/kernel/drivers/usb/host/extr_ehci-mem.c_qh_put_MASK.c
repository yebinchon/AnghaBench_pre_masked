
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehci_qh {int refcount; } ;


 int FUNC_0 (struct ehci_qh*) ;

__attribute__((used)) static inline void FUNC_1 (struct ehci_qh *VAR_0)
{
 if (!--VAR_0->refcount)
  FUNC_0(VAR_0);
}
