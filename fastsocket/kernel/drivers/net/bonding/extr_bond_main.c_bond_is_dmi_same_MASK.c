
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dev_mc_list {scalar_t__ dmi_addrlen; int dmi_addr; } ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(const struct dev_mc_list *VAR_0,
       const struct dev_mc_list *VAR_1)
{
 return FUNC_0(VAR_0->dmi_addr, VAR_1->dmi_addr, VAR_0->dmi_addrlen) == 0 &&
   VAR_0->dmi_addrlen == VAR_1->dmi_addrlen;
}
