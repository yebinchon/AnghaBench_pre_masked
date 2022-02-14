
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnx2x_rx_mode_obj {int config_rx_mode; int wait_comp; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ FUNC_0 (struct bnx2x*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_1(struct bnx2x *VAR_4,
       struct bnx2x_rx_mode_obj *VAR_5)
{
 if (FUNC_0(VAR_4)) {
  VAR_5->wait_comp = VAR_0;
  VAR_5->config_rx_mode = VAR_1;
 } else {
  VAR_5->wait_comp = VAR_3;
  VAR_5->config_rx_mode = VAR_2;
 }
}
