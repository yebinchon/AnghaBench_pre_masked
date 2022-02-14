
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_msource {scalar_t__ ims_haddr; } ;



__attribute__((used)) static __inline int
FUNC_0(const struct ip_msource *VAR_0, const struct ip_msource *VAR_1)
{

 if (VAR_0->ims_haddr < VAR_1->ims_haddr)
  return (-1);
 if (VAR_0->ims_haddr == VAR_1->ims_haddr)
  return (0);
 return (1);
}
