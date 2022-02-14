
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int16_t ;
struct TYPE_4__ {int addr; int addr6; } ;
struct tcp_cache_key_src {scalar_t__ af; TYPE_2__ faddr; } ;
struct TYPE_3__ {int addr; int addr6; } ;
struct tcp_cache_key {TYPE_1__ tck_dst; scalar_t__ tck_family; int tck_src; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct tcp_cache_key*,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (struct tcp_cache_key*,int,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct tcp_cache_key_src*,int *) ;
 int VAR_3 ;

__attribute__((used)) static u_int16_t FUNC_4(struct tcp_cache_key_src *VAR_4, struct tcp_cache_key *VAR_5)
{
 u_int32_t VAR_6;

 FUNC_0(VAR_5, sizeof(struct tcp_cache_key));

 FUNC_3(VAR_4, &VAR_5->tck_src);

 if (VAR_4->af == VAR_1) {
  VAR_5->tck_family = VAR_1;
  FUNC_1(&VAR_5->tck_dst.addr6, &VAR_4->faddr.addr6,
      sizeof(struct in6_addr));
 } else {
  VAR_5->tck_family = VAR_0;
  FUNC_1(&VAR_5->tck_dst.addr, &VAR_4->faddr.addr,
      sizeof(struct in_addr));
 }

 VAR_6 = FUNC_2(VAR_5, sizeof(struct tcp_cache_key),
     VAR_2);

 return (VAR_6 & (VAR_3 - 1));
}
