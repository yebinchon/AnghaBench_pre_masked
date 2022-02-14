
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct td {int * hwPSW; } ;
struct ohci_hcd {int dummy; } ;
typedef int __hc16 ;


 scalar_t__ FUNC_0 (struct ohci_hcd const*) ;

__attribute__((used)) static inline __hc16 *FUNC_1(const struct ohci_hcd *VAR_0,
                                 const struct td *VAR_1, int VAR_2)
{
 return (__hc16 *)(FUNC_0(VAR_0) ?
   &VAR_1->hwPSW[VAR_2 ^ 1] : &VAR_1->hwPSW[VAR_2]);
}
