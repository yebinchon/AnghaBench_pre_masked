
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union sockaddr_union {int dummy; } sockaddr_union ;
struct radix_node_head {int dummy; } ;
struct radix_node {int dummy; } ;
struct pfr_ktable {struct radix_node_head* pfrkt_ip6; struct radix_node_head* pfrkt_ip4; } ;
struct pfr_kentry {int pfrke_sa; int pfrke_net; int pfrke_af; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pfr_kentry*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (union sockaddr_union*,int ,int ) ;
 int FUNC_3 (char*) ;
 struct radix_node* FUNC_4 (int *,union sockaddr_union*,struct radix_node_head*) ;

__attribute__((used)) static int
FUNC_5(struct pfr_ktable *VAR_4, struct pfr_kentry *VAR_5)
{
 union sockaddr_union VAR_6;
 struct radix_node *VAR_7;
 struct radix_node_head *VAR_8;

 FUNC_1(VAR_3, VAR_2);

 if (VAR_5->pfrke_af == VAR_0)
  VAR_8 = VAR_4->pfrkt_ip4;
 else if (VAR_5->pfrke_af == VAR_1)
  VAR_8 = VAR_4->pfrkt_ip6;
 else
  return (-1);

 if (FUNC_0(VAR_5)) {
  FUNC_2(&VAR_6, VAR_5->pfrke_af, VAR_5->pfrke_net);
  VAR_7 = FUNC_4(&VAR_5->pfrke_sa, &VAR_6, VAR_8);
 } else
  VAR_7 = FUNC_4(&VAR_5->pfrke_sa, ((void*)0), VAR_8);

 if (VAR_7 == ((void*)0)) {
  FUNC_3("pfr_unroute_kentry: delete failed.\n");
  return (-1);
 }
 return (0);
}
