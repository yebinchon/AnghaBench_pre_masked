
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_target_port {int * tx_ring; int srp_host; int * rx_ring; int * recv_cq; int * send_cq; int * qp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct srp_target_port *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_2->qp);
 FUNC_0(VAR_2->send_cq);
 FUNC_0(VAR_2->recv_cq);

 VAR_2->qp = ((void*)0);
 VAR_2->send_cq = VAR_2->recv_cq = ((void*)0);

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3)
  FUNC_2(VAR_2->srp_host, VAR_2->rx_ring[VAR_3]);
 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
  FUNC_2(VAR_2->srp_host, VAR_2->tx_ring[VAR_3]);
}
