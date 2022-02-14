
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int tv_sec; int tv_nsec; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct igb_adapter *VAR_2,
          const struct timespec *VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_2->hw;




 FUNC_0(VAR_1, VAR_3->tv_nsec);
 FUNC_0(VAR_0, VAR_3->tv_sec);
}
