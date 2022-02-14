
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mptsub {int mpts_socket; } ;
struct mptcp_itf_stats {int mpis_rxbytes; int mpis_txbytes; } ;
struct inpcb {TYPE_1__* inp_stat; } ;
struct TYPE_2__ {scalar_t__ rxbytes; scalar_t__ txbytes; } ;


 int FUNC_0 (struct mptcp_itf_stats*,struct mptsub*) ;
 struct inpcb* FUNC_1 (int ) ;

void
FUNC_2(struct mptcp_itf_stats *VAR_0, struct mptsub *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (VAR_2 != -1) {
  struct inpcb *VAR_3 = FUNC_1(VAR_1->mpts_socket);

  VAR_0[VAR_2].mpis_txbytes += VAR_3->inp_stat->txbytes;
  VAR_0[VAR_2].mpis_rxbytes += VAR_3->inp_stat->rxbytes;
 }
}
