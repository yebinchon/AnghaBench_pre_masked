
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ia6t_pltime; int ia6t_vltime; int ia6t_preferred; int ia6t_expire; } ;
struct in6_aliasreq_64 {TYPE_1__ ifra_lifetime; int ifra_flags; int ifra_prefixmask; int ifra_dstaddr; int ifra_addr; int ifra_name; } ;
struct TYPE_4__ {int ia6t_pltime; int ia6t_vltime; int ia6t_preferred; int ia6t_expire; } ;
struct in6_aliasreq_32 {TYPE_2__ ifra_lifetime; int ifra_flags; int ifra_prefixmask; int ifra_dstaddr; int ifra_addr; int ifra_name; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct in6_aliasreq_64*,int) ;

void
FUNC_2(struct in6_aliasreq_32 *VAR_0, struct in6_aliasreq_64 *VAR_1)
{
 FUNC_1(VAR_1, sizeof (*VAR_1));
 FUNC_0(VAR_0->ifra_name, VAR_1->ifra_name, sizeof (VAR_1->ifra_name));
 VAR_1->ifra_addr = VAR_0->ifra_addr;
 VAR_1->ifra_dstaddr = VAR_0->ifra_dstaddr;
 VAR_1->ifra_prefixmask = VAR_0->ifra_prefixmask;
 VAR_1->ifra_flags = VAR_0->ifra_flags;
 VAR_1->ifra_lifetime.ia6t_expire = VAR_0->ifra_lifetime.ia6t_expire;
 VAR_1->ifra_lifetime.ia6t_preferred = VAR_0->ifra_lifetime.ia6t_preferred;
 VAR_1->ifra_lifetime.ia6t_vltime = VAR_0->ifra_lifetime.ia6t_vltime;
 VAR_1->ifra_lifetime.ia6t_pltime = VAR_0->ifra_lifetime.ia6t_pltime;
}
