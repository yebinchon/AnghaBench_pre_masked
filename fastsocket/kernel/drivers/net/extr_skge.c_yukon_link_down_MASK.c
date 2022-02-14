
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct skge_port {int port; scalar_t__ flow_status; struct skge_hw* hw; } ;
struct skge_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct skge_hw*,int,int ) ;
 int FUNC_1 (struct skge_hw*,int,int ,int) ;
 int FUNC_2 (struct skge_hw*,int,int ) ;
 int FUNC_3 (struct skge_hw*,int,int ,int) ;
 int FUNC_4 (struct skge_port*) ;
 int FUNC_5 (struct skge_hw*,int) ;

__attribute__((used)) static void FUNC_6(struct skge_port *VAR_6)
{
 struct skge_hw *VAR_7 = VAR_6->hw;
 int VAR_8 = VAR_6->port;
 u16 VAR_9;

 VAR_9 = FUNC_2(VAR_7, VAR_8, VAR_3);
 VAR_9 &= ~(VAR_1 | VAR_2);
 FUNC_3(VAR_7, VAR_8, VAR_3, VAR_9);

 if (VAR_6->flow_status == VAR_0) {
  VAR_9 = FUNC_0(VAR_7, VAR_8, VAR_4);
  VAR_9 |= VAR_5;

  FUNC_1(VAR_7, VAR_8, VAR_4, VAR_9);
 }

 FUNC_4(VAR_6);

 FUNC_5(VAR_7, VAR_8);
}
