
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int dummy; } ;
struct mptsub {struct socket* mpts_socket; } ;
struct TYPE_5__ {int sin6_port; int sin6_addr; } ;
struct TYPE_4__ {int sin_len; int sin_port; int sin_family; int sin_addr; } ;
struct mptses {TYPE_2__ __mpte_dst_v6; TYPE_1__ mpte_dst_v4_nat64; } ;
struct ipv6_prefix {scalar_t__ prefix_len; } ;
struct ifnet {int dummy; } ;
struct TYPE_6__ {struct ifnet* inp_last_outifp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ifnet*,struct ipv6_prefix*) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (int *,struct ipv6_prefix*,int *) ;
 TYPE_3__* FUNC_3 (struct socket*) ;

__attribute__((used)) static void
FUNC_4(struct mptses *VAR_3, const struct mptsub *VAR_4)
{
 struct ipv6_prefix VAR_5[VAR_2];
 struct socket *VAR_6 = VAR_4->mpts_socket;
 struct ifnet *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(VAR_6)->inp_last_outifp;

 if (FUNC_0(VAR_7, VAR_5) == VAR_1) {
  FUNC_1(VAR_7);
  return;
 }


 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  int VAR_9;

  if (VAR_5[VAR_8].prefix_len == 0)
   continue;

  VAR_9 = FUNC_2(&VAR_3->__mpte_dst_v6.sin6_addr,
             &VAR_5[VAR_8],
             &VAR_3->mpte_dst_v4_nat64.sin_addr);
  if (VAR_9) {
   VAR_3->mpte_dst_v4_nat64.sin_len = sizeof(VAR_3->mpte_dst_v4_nat64);
   VAR_3->mpte_dst_v4_nat64.sin_family = VAR_0;
   VAR_3->mpte_dst_v4_nat64.sin_port = VAR_3->__mpte_dst_v6.sin6_port;
   break;
  }
 }
}
