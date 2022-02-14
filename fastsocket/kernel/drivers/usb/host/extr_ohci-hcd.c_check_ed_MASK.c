
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ohci_hcd {int dummy; } ;
struct ed {int td_list; int hwTailP; int hwHeadP; int hwINFO; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ohci_hcd*,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct ohci_hcd *VAR_2, struct ed *VAR_3)
{
 return (FUNC_0(VAR_2, VAR_3->hwINFO) & VAR_0) != 0
  && (FUNC_0(VAR_2, VAR_3->hwHeadP) & VAR_1)
   == (FUNC_0(VAR_2, VAR_3->hwTailP) & VAR_1)
  && !FUNC_1(&VAR_3->td_list);
}
