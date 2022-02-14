
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r6040_private {TYPE_1__* tx_insert_ptr; int pdev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct TYPE_2__* vndescp; int * skb_ptr; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct r6040_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_3)
{
 struct r6040_private *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  if (VAR_4->tx_insert_ptr->skb_ptr) {
   FUNC_3(VAR_4->pdev,
    FUNC_1(VAR_4->tx_insert_ptr->buf),
    VAR_0, VAR_1);
   FUNC_0(VAR_4->tx_insert_ptr->skb_ptr);
   VAR_4->tx_insert_ptr->skb_ptr = ((void*)0);
  }
  VAR_4->tx_insert_ptr = VAR_4->tx_insert_ptr->vndescp;
 }
}
