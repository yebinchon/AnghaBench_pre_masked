
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct tcpcb {TYPE_1__* t_inpcb; int t_mpflags; } ;
struct mbuf {int dummy; } ;
struct TYPE_4__ {int tcps_mp_badcsum; } ;
struct TYPE_3__ {int inp_socket; } ;


 int VAR_0 ;
 int FUNC_0 (struct mbuf*) ;
 scalar_t__ FUNC_1 (struct tcpcb*,struct mbuf*,int ,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ) ;
 TYPE_2__ VAR_1 ;

int
FUNC_3(struct tcpcb *VAR_2, struct mbuf *VAR_3, uint64_t VAR_4,
      uint32_t VAR_5, uint16_t VAR_6, uint16_t VAR_7, uint16_t VAR_8)
{
 uint16_t VAR_9;

 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_9) {
  VAR_2->t_mpflags |= VAR_0;
  FUNC_2(VAR_2->t_inpcb->inp_socket);
  FUNC_0(VAR_3);
  VAR_1.tcps_mp_badcsum++;
  return (-1);
 }
 return (0);
}
