
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_pktopts {int ip6po_hlim; int ip6po_tclass; int ip6po_prefer_tempaddr; int ip6po_minmtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ip6_pktopts*,int) ;

void
FUNC_1(struct ip6_pktopts *VAR_2)
{

 FUNC_0(VAR_2, sizeof (*VAR_2));
 VAR_2->ip6po_hlim = -1;
 VAR_2->ip6po_tclass = -1;
 VAR_2->ip6po_minmtu = VAR_0;
 VAR_2->ip6po_prefer_tempaddr = VAR_1;
}
