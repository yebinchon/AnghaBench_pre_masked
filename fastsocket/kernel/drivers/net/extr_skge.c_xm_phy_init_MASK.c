
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct skge_port {int port; scalar_t__ autoneg; int advertising; size_t flow_control; scalar_t__ duplex; int link_timer; struct skge_hw* hw; } ;
struct skge_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int* VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (struct skge_hw*,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct skge_port *VAR_14)
{
 struct skge_hw *VAR_15 = VAR_14->hw;
 int VAR_16 = VAR_14->port;
 u16 VAR_17 = 0;

 if (VAR_14->autoneg == VAR_2) {
  if (VAR_14->advertising & VAR_1)
   VAR_17 |= VAR_11;
  if (VAR_14->advertising & VAR_0)
   VAR_17 |= VAR_10;

  VAR_17 |= VAR_12[VAR_14->flow_control];

  FUNC_1(VAR_15, VAR_16, VAR_8, VAR_17);


  VAR_17 = VAR_5 | VAR_7;
 } else {

  if (VAR_14->duplex == VAR_3)
   VAR_17 |= VAR_6;




 }

 FUNC_1(VAR_15, VAR_16, VAR_9, VAR_17);


 FUNC_0(&VAR_14->link_timer, VAR_13 + VAR_4);
}
