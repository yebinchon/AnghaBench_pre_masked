
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int sin_addr; } ;
struct TYPE_7__ {scalar_t__ sa_family; } ;
struct TYPE_6__ {int sin6_addr; } ;
union sockaddr_in_4_6 {TYPE_5__ sin; TYPE_2__ sa; TYPE_1__ sin6; } ;
typedef scalar_t__ u_int8_t ;
typedef int tcks ;
struct TYPE_9__ {int addr; int addr6; } ;
struct TYPE_8__ {int addr; int addr6; } ;
struct tcp_cache_key_src {scalar_t__ af; TYPE_4__ faddr; TYPE_3__ laddr; struct ifnet* ifp; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
struct ifnet {int dummy; } ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct tcp_cache_key_src*,int ,int) ;
 int FUNC_3 (struct tcp_cache_key_src*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct tcp_cache_key_src*) ;

boolean_t FUNC_5(struct ifnet *VAR_4,
    union sockaddr_in_4_6 *VAR_5, union sockaddr_in_4_6 *VAR_6,
    u_int8_t *VAR_7, u_int8_t *VAR_8)
{
 struct tcp_cache_key_src VAR_9;

 FUNC_2(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.ifp = VAR_4;

 FUNC_0();

 if (VAR_6->sa.sa_family == VAR_1) {
  FUNC_1(&VAR_9.laddr.addr6, &VAR_5->sin6.sin6_addr, sizeof(struct in6_addr));
  FUNC_1(&VAR_9.faddr.addr6, &VAR_6->sin6.sin6_addr, sizeof(struct in6_addr));
  VAR_9.af = VAR_1;
 } else if (VAR_6->sa.sa_family == VAR_0) {
  FUNC_1(&VAR_9.laddr.addr, &VAR_5->sin.sin_addr, sizeof(struct in_addr));
  FUNC_1(&VAR_9.faddr.addr, &VAR_6->sin.sin_addr, sizeof(struct in_addr));
  VAR_9.af = VAR_0;
 }

 if (FUNC_4(&VAR_9)) {
  if (!FUNC_3(&VAR_9, VAR_7, VAR_8)) {
      *VAR_8 = 0;
  }
  return VAR_3;
 }

 return VAR_2;
}
