
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtentry {struct llinfo_nd6* rt_llinfo; } ;
struct nd_prefix {unsigned int ndpr_genid; int ndpr_advrtrs; } ;
struct nd_pfxrouter {TYPE_1__* router; } ;
struct llinfo_nd6 {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifnet {int dummy; } ;
struct TYPE_2__ {int stateflags; struct in6_addr rtaddr; struct in6_addr rtaddr_mapped; struct ifnet* ifp; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 struct nd_pfxrouter* FUNC_1 (int *) ;
 struct nd_pfxrouter* FUNC_2 (struct nd_pfxrouter*,int ) ;
 scalar_t__ FUNC_3 (struct llinfo_nd6*) ;
 int VAR_1 ;
 int FUNC_4 (struct nd_prefix*) ;
 int FUNC_5 (struct nd_prefix*) ;
 int FUNC_6 (struct nd_prefix*) ;
 int FUNC_7 (struct rtentry*) ;
 int FUNC_8 (struct rtentry*) ;
 int FUNC_9 (struct rtentry*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 struct rtentry* FUNC_12 (struct in6_addr*,int ,struct ifnet*,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static struct nd_pfxrouter *
FUNC_13(struct nd_prefix *VAR_4)
{
 struct nd_pfxrouter *VAR_5;
 struct rtentry *VAR_6;
 struct llinfo_nd6 *VAR_7;
 struct ifnet *VAR_8;
 struct in6_addr VAR_9;
 unsigned int VAR_10;

 FUNC_0(VAR_2, VAR_0);
 FUNC_5(VAR_4);

 VAR_10 = VAR_4->ndpr_genid;
 VAR_5 = FUNC_1(&VAR_4->ndpr_advrtrs);
 while (VAR_5) {
  VAR_8 = VAR_5->router->ifp;
  if (VAR_5->router->stateflags & VAR_1)
   VAR_9 = VAR_5->router->rtaddr_mapped;
  else
   VAR_9 = VAR_5->router->rtaddr;

  FUNC_6(VAR_4);
  FUNC_11(VAR_2);

  if ((VAR_6 = FUNC_12(&VAR_9, 0, VAR_8, 0)) != ((void*)0)) {
   FUNC_7(VAR_6);
   if ((VAR_7 = VAR_6->rt_llinfo) != ((void*)0) &&
       FUNC_3(VAR_7)) {
    FUNC_8(VAR_6);
    FUNC_9(VAR_6);
    FUNC_10(VAR_2);
    FUNC_4(VAR_4);
    break;
   }
   FUNC_8(VAR_6);
   FUNC_9(VAR_6);
  }
  FUNC_10(VAR_2);
  FUNC_4(VAR_4);
  if (VAR_4->ndpr_genid != VAR_10) {
   VAR_5 = FUNC_1(&VAR_4->ndpr_advrtrs);
   VAR_10 = VAR_4->ndpr_genid;
  } else
   VAR_5 = FUNC_2(VAR_5, VAR_3);
 }
 FUNC_5(VAR_4);

 return (VAR_5);

}
