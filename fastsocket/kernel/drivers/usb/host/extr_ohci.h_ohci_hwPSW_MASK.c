
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct td {int dummy; } ;
struct ohci_hcd {int dummy; } ;


 int FUNC_0 (struct ohci_hcd const*,int ) ;
 int FUNC_1 (struct ohci_hcd const*,struct td const*,int) ;

__attribute__((used)) static inline u16 FUNC_2(const struct ohci_hcd *VAR_0,
                               const struct td *VAR_1, int VAR_2)
{
 return FUNC_0(VAR_0, FUNC_1(VAR_0, VAR_1, VAR_2));
}
