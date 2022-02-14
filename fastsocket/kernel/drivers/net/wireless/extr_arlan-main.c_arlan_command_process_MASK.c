
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct arlan_private {int card_polling_interval; scalar_t__ waiting_command_mask; } ;


 scalar_t__ FUNC_0 (struct net_device*,int ) ;
 struct arlan_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_2(struct net_device *VAR_0)
{
 struct arlan_private *VAR_1 = FUNC_1(VAR_0);

 int VAR_2 = 0;
 while (VAR_1->waiting_command_mask && VAR_2 < 8)
 {
  if (VAR_1->waiting_command_mask)
  {
   if (FUNC_0(VAR_0, 0))
    break;
   VAR_2++;
  }
                                                ;
  if (VAR_1->card_polling_interval > 1)
   break;
  VAR_2++;
 }
}
