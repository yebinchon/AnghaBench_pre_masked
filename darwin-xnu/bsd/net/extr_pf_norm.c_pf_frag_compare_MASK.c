
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct pf_addr {int * addr32; TYPE_1__ v4addr; } ;
struct pf_fragment {int fr_af; int fr_p; int fr_id; int fr_id6; struct pf_addr fr_dstx; struct pf_addr fr_srcx; } ;




 int FUNC_0 (int ) ;

__attribute__((used)) static __inline int
FUNC_1(struct pf_fragment *VAR_0, struct pf_fragment *VAR_1)
{
 int VAR_2;

 if ((VAR_2 = VAR_0->fr_af - VAR_1->fr_af))
  return (VAR_2);
 else if ((VAR_2 = VAR_0->fr_p - VAR_1->fr_p))
  return (VAR_2);
 else {
  struct pf_addr *VAR_3 = &VAR_0->fr_srcx;
  struct pf_addr *VAR_4 = &VAR_1->fr_srcx;
  struct pf_addr *VAR_5 = &VAR_0->fr_dstx;
  struct pf_addr *VAR_6 = &VAR_1->fr_dstx;

  switch (VAR_0->fr_af) {
  default:
   FUNC_0(!0 && "only IPv4 and IPv6 supported!");
   break;
  }
 }
 return (0);
}
