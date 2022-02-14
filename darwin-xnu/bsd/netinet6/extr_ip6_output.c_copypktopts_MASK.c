
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ip6_pktopts {TYPE_1__* ip6po_nexthop; int * ip6po_pktinfo; int ip6po_flags; int ip6po_tclass; int ip6po_hlim; } ;
struct TYPE_3__ {int sa_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int,int ,int) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 (struct ip6_pktopts*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(struct ip6_pktopts *VAR_8, struct ip6_pktopts *VAR_9, int VAR_10)
{
 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0)) {
  FUNC_4("copypktopts: invalid argument\n");
  return (VAR_0);
 }

 VAR_8->ip6po_hlim = VAR_9->ip6po_hlim;
 VAR_8->ip6po_tclass = VAR_9->ip6po_tclass;
 VAR_8->ip6po_flags = VAR_9->ip6po_flags;
 if (VAR_9->ip6po_pktinfo) {
  VAR_8->ip6po_pktinfo = FUNC_1(sizeof (*VAR_8->ip6po_pktinfo),
      VAR_2, VAR_10);
  if (VAR_8->ip6po_pktinfo == ((void*)0) && VAR_10 == VAR_3)
   goto bad;
  *VAR_8->ip6po_pktinfo = *VAR_9->ip6po_pktinfo;
 }
 if (VAR_9->ip6po_nexthop) {
  VAR_8->ip6po_nexthop = FUNC_1(VAR_9->ip6po_nexthop->sa_len,
      VAR_2, VAR_10);
  if (VAR_8->ip6po_nexthop == ((void*)0) && VAR_10 == VAR_3)
   goto bad;
  FUNC_2(VAR_9->ip6po_nexthop, VAR_8->ip6po_nexthop,
      VAR_9->ip6po_nexthop->sa_len);
 }
 FUNC_0(VAR_6);
 FUNC_0(VAR_4);
 FUNC_0(VAR_5);
 FUNC_0(VAR_7);
 return (0);

bad:
 FUNC_3(VAR_8, -1);
 return (VAR_1);
}
