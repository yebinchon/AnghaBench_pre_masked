
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int max_rds_rings; int num_txd; int max_jumbo_rxd; int num_jumbo_rxd; int max_rxd; int num_rxd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_0(struct qlcnic_adapter *VAR_6)
{
 VAR_6->num_rxd = VAR_5;
 VAR_6->max_rxd = VAR_2;
 VAR_6->num_jumbo_rxd = VAR_4;
 VAR_6->max_jumbo_rxd = VAR_1;
 VAR_6->num_txd = VAR_0;
 VAR_6->max_rds_rings = VAR_3;
}
