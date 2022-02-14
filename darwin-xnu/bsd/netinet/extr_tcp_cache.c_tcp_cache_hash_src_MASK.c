
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_3__ {int addr; int addr6; } ;
struct tcp_heuristic_key {TYPE_1__ thk_ip; int thk_net_signature; scalar_t__ thk_family; } ;
struct TYPE_4__ {int addr; int addr6; } ;
struct tcp_cache_key_src {scalar_t__ af; TYPE_2__ laddr; struct ifnet* ifp; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifnet {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ifnet*,scalar_t__,int*,int *,int ) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(struct tcp_cache_key_src *VAR_4, struct tcp_heuristic_key *VAR_5)
{
 struct ifnet *VAR_6 = VAR_4->ifp;
 uint8_t VAR_7 = sizeof(VAR_5->thk_net_signature);
 uint16_t VAR_8;

 if (VAR_4->af == VAR_1) {
  int VAR_9;

  VAR_5->thk_family = VAR_1;
  VAR_9 = FUNC_0(VAR_6, VAR_1, &VAR_7, &VAR_8,
      VAR_5->thk_net_signature);






  if (VAR_9 == VAR_3 || VAR_9 == VAR_2)
   FUNC_1(&VAR_5->thk_ip.addr6, &VAR_4->laddr.addr6, sizeof(struct in6_addr));
 } else {
  int VAR_10;

  VAR_5->thk_family = VAR_0;
  VAR_10 = FUNC_0(VAR_6, VAR_0, &VAR_7, &VAR_8,
       VAR_5->thk_net_signature);






  if (VAR_10 == VAR_3 || VAR_10 == VAR_2)
   FUNC_1(&VAR_5->thk_ip.addr, &VAR_4->laddr.addr, sizeof(struct in_addr));
 }
}
