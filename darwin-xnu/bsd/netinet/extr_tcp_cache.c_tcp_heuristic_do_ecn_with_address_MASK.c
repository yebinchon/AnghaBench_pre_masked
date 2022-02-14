
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int sin_addr; } ;
struct TYPE_6__ {scalar_t__ sa_family; } ;
struct TYPE_5__ {int sin6_addr; } ;
union sockaddr_in_4_6 {TYPE_4__ sin; TYPE_2__ sa; TYPE_1__ sin6; } ;
typedef int tcks ;
struct TYPE_7__ {int addr; int addr6; } ;
struct tcp_cache_key_src {scalar_t__ af; TYPE_3__ laddr; struct ifnet* ifp; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifnet {int dummy; } ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct tcp_cache_key_src*,int ,int) ;
 int FUNC_3 (struct tcp_cache_key_src*) ;

boolean_t FUNC_4(struct ifnet *VAR_2,
    union sockaddr_in_4_6 *VAR_3)
{
 struct tcp_cache_key_src VAR_4;

 FUNC_2(&VAR_4, 0, sizeof(VAR_4));
 VAR_4.ifp = VAR_2;

 FUNC_0();

 if (VAR_3->sa.sa_family == VAR_1) {
  FUNC_1(&VAR_4.laddr.addr6, &VAR_3->sin6.sin6_addr, sizeof(struct in6_addr));
  VAR_4.af = VAR_1;
 } else if (VAR_3->sa.sa_family == VAR_0) {
  FUNC_1(&VAR_4.laddr.addr, &VAR_3->sin.sin_addr, sizeof(struct in_addr));
  VAR_4.af = VAR_0;
 }

 return FUNC_3(&VAR_4);
}
