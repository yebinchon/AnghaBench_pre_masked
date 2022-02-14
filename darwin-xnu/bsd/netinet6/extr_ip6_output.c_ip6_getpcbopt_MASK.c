
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockopt {int dummy; } ;
struct ip6_pktopts {int ip6po_flags; int ip6po_prefer_tempaddr; int ip6po_minmtu; TYPE_1__* ip6po_nexthop; scalar_t__ ip6po_dest2; scalar_t__ ip6po_dest1; scalar_t__ ip6po_rthdr; scalar_t__ ip6po_hbh; int ip6po_tclass; scalar_t__ ip6po_pktinfo; } ;
struct ip6_ext {int ip6e_len; } ;
struct in6_pktinfo {int dummy; } ;
typedef int on ;
typedef int null_pktinfo ;
struct TYPE_2__ {int sa_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct in6_pktinfo*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sockopt*,void*,int) ;

__attribute__((used)) static int
FUNC_3(struct ip6_pktopts *VAR_4, int VAR_5, struct sockopt *VAR_6)
{
 void *VAR_7 = ((void*)0);
 int VAR_8 = 0;
 struct ip6_ext *VAR_9;
 struct in6_pktinfo VAR_10;
 int VAR_11 = 0, VAR_12;
 int VAR_13 = VAR_2;
 int VAR_14 = VAR_3;


 switch (VAR_5) {
 case 133:
  if (VAR_4 && VAR_4->ip6po_pktinfo)
   VAR_7 = (void *)VAR_4->ip6po_pktinfo;
  else {

   FUNC_0(&VAR_10, sizeof (VAR_10));
   VAR_7 = (void *)&VAR_10;
  }
  VAR_8 = sizeof (struct in6_pktinfo);
  break;

 case 129:
  if (VAR_4 && VAR_4->ip6po_tclass >= 0)
   VAR_7 = (void *)&VAR_4->ip6po_tclass;
  else
   VAR_7 = (void *)&VAR_11;
  VAR_8 = sizeof (int);
  break;

 case 135:
  if (VAR_4 && VAR_4->ip6po_hbh) {
   VAR_7 = (void *)VAR_4->ip6po_hbh;
   VAR_9 = (struct ip6_ext *)VAR_4->ip6po_hbh;
   VAR_8 = (VAR_9->ip6e_len + 1) << 3;
  }
  break;

 case 131:
  if (VAR_4 && VAR_4->ip6po_rthdr) {
   VAR_7 = (void *)VAR_4->ip6po_rthdr;
   VAR_9 = (struct ip6_ext *)VAR_4->ip6po_rthdr;
   VAR_8 = (VAR_9->ip6e_len + 1) << 3;
  }
  break;

 case 130:
  if (VAR_4 && VAR_4->ip6po_dest1) {
   VAR_7 = (void *)VAR_4->ip6po_dest1;
   VAR_9 = (struct ip6_ext *)VAR_4->ip6po_dest1;
   VAR_8 = (VAR_9->ip6e_len + 1) << 3;
  }
  break;

 case 136:
  if (VAR_4 && VAR_4->ip6po_dest2) {
   VAR_7 = (void *)VAR_4->ip6po_dest2;
   VAR_9 = (struct ip6_ext *)VAR_4->ip6po_dest2;
   VAR_8 = (VAR_9->ip6e_len + 1) << 3;
  }
  break;

 case 134:
  if (VAR_4 && VAR_4->ip6po_nexthop) {
   VAR_7 = (void *)VAR_4->ip6po_nexthop;
   VAR_8 = VAR_4->ip6po_nexthop->sa_len;
  }
  break;

 case 128:
  if (VAR_4)
   VAR_7 = (void *)&VAR_4->ip6po_minmtu;
  else
   VAR_7 = (void *)&VAR_13;
  VAR_8 = sizeof (int);
  break;

 case 137:
  if (VAR_4 && ((VAR_4->ip6po_flags) & VAR_1))
   VAR_12 = 1;
  else
   VAR_12 = 0;
  VAR_7 = (void *)&VAR_12;
  VAR_8 = sizeof (VAR_12);
  break;

 case 132:
  if (VAR_4)
   VAR_7 = (void *)&VAR_4->ip6po_prefer_tempaddr;
  else
   VAR_7 = (void *)&VAR_14;
  VAR_8 = sizeof (int);
  break;

 default:



  return (VAR_0);
 }

 return (FUNC_2(VAR_6, VAR_7, VAR_8));
}
