
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union sockaddr_union {int sin6; int sin; } ;
struct radix_node_head {int dummy; } ;
struct pfr_ktable {struct radix_node_head* pfrkt_ip6; struct radix_node_head* pfrkt_ip4; } ;
struct pfr_kentry {int dummy; } ;
struct pfr_addr {int pfra_net; int pfra_af; int pfra_ip6addr; int pfra_ip4addr; } ;
typedef int sa ;


 scalar_t__ FUNC_0 (struct pfr_addr*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct pfr_kentry*) ;
 scalar_t__ FUNC_4 (struct pfr_kentry*) ;
 int FUNC_5 (int ,int ) ;
 int VAR_2 ;
 int FUNC_6 (union sockaddr_union*,int) ;
 int VAR_3 ;
 int FUNC_7 (union sockaddr_union*,int ,int ) ;
 scalar_t__ FUNC_8 (union sockaddr_union*,union sockaddr_union*,struct radix_node_head*) ;
 scalar_t__ FUNC_9 (union sockaddr_union*,struct radix_node_head*) ;

__attribute__((used)) static struct pfr_kentry *
FUNC_10(struct pfr_ktable *VAR_4, struct pfr_addr *VAR_5, int VAR_6)
{
 union sockaddr_union VAR_7, VAR_8;
 struct radix_node_head *VAR_9;
 struct pfr_kentry *VAR_10;

 FUNC_5(VAR_3, VAR_2);

 FUNC_6(&VAR_7, sizeof (VAR_7));
 if (VAR_5->pfra_af == VAR_0) {
  FUNC_1(VAR_7.sin, VAR_5->pfra_ip4addr);
  VAR_9 = VAR_4->pfrkt_ip4;
 } else if (VAR_5->pfra_af == VAR_1) {
  FUNC_2(VAR_7.sin6, VAR_5->pfra_ip6addr);
  VAR_9 = VAR_4->pfrkt_ip6;
 }
 else
  return ((void*)0);
 if (FUNC_0(VAR_5)) {
  FUNC_7(&VAR_8, VAR_5->pfra_af, VAR_5->pfra_net);
  VAR_10 = (struct pfr_kentry *)FUNC_8(&VAR_7, &VAR_8, VAR_9);
  if (VAR_10 && FUNC_4(VAR_10))
   VAR_10 = ((void*)0);
 } else {
  VAR_10 = (struct pfr_kentry *)FUNC_9(&VAR_7, VAR_9);
  if (VAR_10 && FUNC_4(VAR_10))
   VAR_10 = ((void*)0);
  if (VAR_6 && VAR_10 && FUNC_3(VAR_10))
   VAR_10 = ((void*)0);
 }
 return (VAR_10);
}
