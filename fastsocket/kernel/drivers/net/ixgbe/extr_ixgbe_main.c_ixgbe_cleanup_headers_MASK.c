
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ixgbe_adv_rx_desc {int dummy; } ixgbe_adv_rx_desc ;
struct sk_buff {int len; } ;
struct ixgbe_ring {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct ixgbe_ring*,struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct ixgbe_ring*,union ixgbe_adv_rx_desc*) ;
 int FUNC_4 (union ixgbe_adv_rx_desc*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static bool FUNC_8(struct ixgbe_ring *VAR_1,
      union ixgbe_adv_rx_desc *VAR_2,
      struct sk_buff *VAR_3)
{

 if (FUNC_7(FUNC_4(VAR_2,
     VAR_0))) {
  FUNC_1(VAR_3);
  return 1;
 }


 if (FUNC_5(VAR_3))
  FUNC_2(VAR_1, VAR_3);
 if (FUNC_7(VAR_3->len < 60)) {
  int VAR_4 = 60 - VAR_3->len;

  if (FUNC_6(VAR_3, VAR_4))
   return 1;
  FUNC_0(VAR_3, VAR_4);
 }

 return 0;
}
