
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehci_qh {int refcount; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline struct ehci_qh *FUNC_1 (struct ehci_qh *VAR_0)
{
 FUNC_0(!VAR_0->refcount);
 VAR_0->refcount++;
 return VAR_0;
}
