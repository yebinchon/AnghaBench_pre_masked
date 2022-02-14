
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehci_hcd {int dummy; } ;
typedef int __u32 ;
typedef int __hc32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ehci_hcd*,int ) ;

__attribute__((used)) static inline char FUNC_2(struct ehci_hcd *VAR_2, __hc32 VAR_3)
{
 __u32 VAR_4 = FUNC_1(VAR_2, VAR_3);

 if (VAR_4 & VAR_0)
  return '*';
 if (VAR_4 & VAR_1)
  return '-';
 if (!FUNC_0 (VAR_4))
  return ' ';

 return '/';
}
