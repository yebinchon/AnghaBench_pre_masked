
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skge_port {int port; struct skge_hw* hw; } ;
struct skge_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct skge_hw*,int,int ) ;
 int FUNC_2 (struct skge_hw*,int,int ,int) ;
 int FUNC_3 (struct skge_hw*,int ,int ) ;
 int FUNC_4 (struct skge_hw*,int) ;
 int FUNC_5 (struct skge_hw*,int) ;

__attribute__((used)) static void FUNC_6(struct skge_port *VAR_8)
{
 struct skge_hw *VAR_9 = VAR_8->hw;
 int VAR_10 = VAR_8->port;

 FUNC_3(VAR_9, FUNC_0(VAR_10, VAR_1), 0);
 FUNC_4(VAR_9, VAR_10);

 FUNC_2(VAR_9, VAR_10, VAR_5,
    FUNC_1(VAR_9, VAR_10, VAR_5)
    & ~(VAR_4|VAR_3));
 FUNC_1(VAR_9, VAR_10, VAR_5);

 FUNC_5(VAR_9, VAR_10);


 FUNC_3(VAR_9, FUNC_0(VAR_10, VAR_7), VAR_6);
 FUNC_3(VAR_9, FUNC_0(VAR_10, VAR_0), VAR_2);
}
