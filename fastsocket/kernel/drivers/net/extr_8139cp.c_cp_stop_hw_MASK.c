
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cp_private {scalar_t__ tx_tail; scalar_t__ tx_head; scalar_t__ rx_tail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4 (struct cp_private *VAR_4)
{
 FUNC_1(VAR_3, ~(FUNC_0(VAR_3)));
 FUNC_2(VAR_2, 0);
 FUNC_3(VAR_0, 0);
 FUNC_2(VAR_1, 0);
 FUNC_2(VAR_3, ~(FUNC_0(VAR_3)));

 VAR_4->rx_tail = 0;
 VAR_4->tx_head = VAR_4->tx_tail = 0;
}
