
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tcp_seq ;
struct TYPE_4__ {scalar_t__ s_addr; } ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct lro_flow {unsigned short lr_fport; unsigned short lr_lport; scalar_t__ lr_seq; int * lr_tcphdr; TYPE_2__ lr_laddr; TYPE_1__ lr_faddr; } ;
struct in_addr {scalar_t__ s_addr; } ;
typedef scalar_t__ __uint32_t ;


 int FUNC_0 (scalar_t__,scalar_t__,unsigned short,unsigned short,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct lro_flow* VAR_2 ;
 int* VAR_3 ;
 int VAR_4 ;

void
FUNC_3(__uint32_t VAR_5, struct in_addr VAR_6, struct in_addr VAR_7,
  unsigned short VAR_8, unsigned short VAR_9)
{
 int VAR_10, VAR_11;
 struct lro_flow *VAR_12;

 VAR_10 = FUNC_0(VAR_7.s_addr, VAR_6.s_addr, VAR_9, VAR_8,
  (VAR_0 - 1));
 FUNC_1(&VAR_4);
 VAR_11 = VAR_3[VAR_10];
 if (VAR_11 == VAR_1) {
  FUNC_2(&VAR_4);
  return;
 }
 VAR_12 = &VAR_2[VAR_11];
 if ((VAR_12->lr_faddr.s_addr == VAR_7.s_addr) &&
     (VAR_12->lr_laddr.s_addr == VAR_6.s_addr) &&
     (VAR_12->lr_fport == VAR_9) &&
     (VAR_12->lr_lport == VAR_8) &&
     (VAR_12->lr_tcphdr == ((void*)0))) {
  VAR_12->lr_seq = (tcp_seq)VAR_5;
 }
 FUNC_2(&VAR_4);
 return;
}
