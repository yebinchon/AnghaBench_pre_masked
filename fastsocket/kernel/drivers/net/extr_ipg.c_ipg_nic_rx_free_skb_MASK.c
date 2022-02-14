
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ipg_rx {int frag_info; } ;
struct ipg_nic_private {unsigned int rx_current; int ** rx_buff; int rx_buf_sz; int pdev; struct ipg_rx* rxd; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct ipg_nic_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3)
{
 struct ipg_nic_private *VAR_4 = FUNC_2(VAR_3);
 unsigned int VAR_5 = VAR_4->rx_current % VAR_0;

 if (VAR_4->rx_buff[VAR_5]) {
  struct ipg_rx *VAR_6 = VAR_4->rxd + VAR_5;

  FUNC_3(VAR_4->pdev,
   FUNC_1(VAR_6->frag_info) & ~VAR_1,
   VAR_4->rx_buf_sz, VAR_2);
  FUNC_0(VAR_4->rx_buff[VAR_5]);
  VAR_4->rx_buff[VAR_5] = ((void*)0);
 }
}
