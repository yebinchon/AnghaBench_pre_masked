
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8192_priv {scalar_t__ card_8192; int * rx_urb; } ;
struct net_device {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct net_device*,int ,int) ;

void FUNC_4(struct net_device *VAR_8)
{
 u8 VAR_9, VAR_10, VAR_11;
 struct r8192_priv *VAR_12 = FUNC_0(VAR_8);

 VAR_9 = FUNC_1(VAR_8, VAR_1);
 VAR_10 = VAR_9 & VAR_3;
 VAR_11 = VAR_9 & ~VAR_3;

 if(VAR_7 == VAR_12->card_8192) {
  FUNC_2(VAR_12->rx_urb[VAR_0]);
 }
 if ((VAR_10 == (VAR_2<<VAR_6) ||
  (VAR_10 == (VAR_4<<VAR_6)))){
  FUNC_3(VAR_8, VAR_1, VAR_11 | VAR_5);
  FUNC_3(VAR_8, VAR_1, VAR_9);
 }
}
