
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipg_tx {int frag_info; } ;
struct ipg_nic_private {TYPE_1__** tx_buff; int pdev; struct ipg_tx* txd; } ;
struct TYPE_2__ {int len; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ipg_nic_private *VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3->tx_buff[VAR_4]) {
   struct ipg_tx *VAR_5 = VAR_3->txd + VAR_4;

   FUNC_2(VAR_3->pdev,
    FUNC_1(VAR_5->frag_info) & ~VAR_1,
    VAR_3->tx_buff[VAR_4]->len, VAR_2);

   FUNC_0(VAR_3->tx_buff[VAR_4]);

   VAR_3->tx_buff[VAR_4] = ((void*)0);
  }
 }
}
