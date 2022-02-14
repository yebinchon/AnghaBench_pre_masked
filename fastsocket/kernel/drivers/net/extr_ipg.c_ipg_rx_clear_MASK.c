
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipg_rx {int frag_info; } ;
struct ipg_nic_private {int rx_buf_sz; int pdev; int ** rx_buff; struct ipg_rx* rxd; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ipg_nic_private *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3->rx_buff[VAR_4]) {
   struct ipg_rx *VAR_5 = VAR_3->rxd + VAR_4;

   FUNC_0(VAR_3->rx_buff[VAR_4]);
   VAR_3->rx_buff[VAR_4] = ((void*)0);
   FUNC_2(VAR_3->pdev,
    FUNC_1(VAR_5->frag_info) & ~VAR_1,
    VAR_3->rx_buf_sz, VAR_2);
  }
 }
}
