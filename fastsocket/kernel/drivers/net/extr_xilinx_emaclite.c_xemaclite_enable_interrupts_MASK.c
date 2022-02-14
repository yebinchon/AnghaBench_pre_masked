
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_local {scalar_t__ tx_ping_pong; scalar_t__ rx_ping_pong; scalar_t__ base_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct net_local *VAR_7)
{
 u32 VAR_8;


 VAR_8 = FUNC_0(VAR_7->base_addr + VAR_5);
 FUNC_1(VAR_7->base_addr + VAR_5,
   VAR_8 | VAR_6);



 if (VAR_7->tx_ping_pong != 0) {
  VAR_8 = FUNC_0(VAR_7->base_addr +
       VAR_0 + VAR_5);
  FUNC_1(VAR_7->base_addr + VAR_0 +
    VAR_5,
    VAR_8 | VAR_6);
 }


 FUNC_1(VAR_7->base_addr + VAR_3,
   VAR_4);



 if (VAR_7->rx_ping_pong != 0) {
  FUNC_1(VAR_7->base_addr + VAR_0 +
    VAR_3,
    VAR_4);
 }


 FUNC_1(VAR_7->base_addr + VAR_2, VAR_1);
}
