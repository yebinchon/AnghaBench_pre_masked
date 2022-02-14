
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct r8a66597_root_hub {int port; } ;
struct r8a66597 {struct r8a66597_root_hub* root_hub; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct r8a66597*,int) ;

__attribute__((used)) static void FUNC_1(struct r8a66597 *VAR_6, int VAR_7)
{
 u16 VAR_8 = FUNC_0(VAR_6, VAR_7);
 struct r8a66597_root_hub *VAR_9 = &VAR_6->root_hub[VAR_7];

 VAR_9->port &= ~((1 << VAR_3) |
        (1 << VAR_4));
 if (VAR_8 == VAR_0)
  VAR_9->port |= (1 << VAR_3);
 else if (VAR_8 == VAR_1)
  VAR_9->port |= (1 << VAR_4);

 VAR_9->port &= ~(1 << VAR_5);
 VAR_9->port |= 1 << VAR_2;
}
