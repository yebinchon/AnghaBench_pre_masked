
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_enet_priv {int hw_mtu; int rx_skb_size; } ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_1(struct bcm_enet_priv *VAR_5, int VAR_6)
{
 int VAR_7;

 VAR_7 = VAR_6;


 VAR_7 += VAR_4;

 if (VAR_7 < 64 || VAR_7 > VAR_1)
  return -VAR_2;







 VAR_5->hw_mtu = VAR_7;





 VAR_5->rx_skb_size = FUNC_0(VAR_7 + VAR_3,
      VAR_0 * 4);
 return 0;
}
