
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_hw_ops {int proc_txdesc; int set_txdesc; int get_isr; int set_desc_link; int rx_enable; } ;
struct ath_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ath_hw_ops* FUNC_0 (struct ath_hw*) ;

void FUNC_1(struct ath_hw *VAR_5)
{
 struct ath_hw_ops *VAR_6 = FUNC_0(VAR_5);

 VAR_6->rx_enable = VAR_2;
 VAR_6->set_desc_link = VAR_3;
 VAR_6->get_isr = VAR_0;
 VAR_6->set_txdesc = VAR_4;
 VAR_6->proc_txdesc = VAR_1;
}
