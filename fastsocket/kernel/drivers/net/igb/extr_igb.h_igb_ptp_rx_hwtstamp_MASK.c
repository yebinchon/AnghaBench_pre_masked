
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union e1000_adv_rx_desc {int dummy; } e1000_adv_rx_desc ;
struct sk_buff {int dummy; } ;
struct igb_ring {int last_rx_timestamp; int q_vector; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct sk_buff*) ;
 scalar_t__ FUNC_1 (union e1000_adv_rx_desc*,int ) ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_2(struct igb_ring *VAR_3,
           union e1000_adv_rx_desc *VAR_4,
           struct sk_buff *VAR_5)
{
 if (FUNC_1(VAR_4, VAR_0) &&
     !FUNC_1(VAR_4, VAR_1))
  FUNC_0(VAR_3->q_vector, VAR_5);




 VAR_3->last_rx_timestamp = VAR_2;
}
