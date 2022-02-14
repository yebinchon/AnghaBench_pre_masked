
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union e1000_adv_rx_desc {int dummy; } e1000_adv_rx_desc ;
struct sk_buff {int len; } ;
struct igb_ring {int dummy; } ;


 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct igb_ring*,union e1000_adv_rx_desc*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static bool FUNC_5(struct igb_ring *VAR_0,
    union e1000_adv_rx_desc *VAR_1,
    struct sk_buff *VAR_2)
{


 if (FUNC_2(VAR_2))
  FUNC_1(VAR_0, VAR_1, VAR_2);


 if (FUNC_4(VAR_2->len < 60)) {
  int VAR_3 = 60 - VAR_2->len;

  if (FUNC_3(VAR_2, VAR_3))
   return 1;
  FUNC_0(VAR_2, VAR_3);
 }

 return 0;
}
