
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct e1000_hw {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct e1000_hw *VAR_3)
{
 u32 VAR_4, VAR_5 = VAR_0;


 do {
  VAR_4 = FUNC_1(VAR_2);
  VAR_4 &= VAR_1;
  FUNC_3(100, 200);
 } while ((!VAR_4) && --VAR_5);





 if (VAR_5 == 0)
  FUNC_0("LAN_INIT_DONE not set, increase timeout\n");


 VAR_4 = FUNC_1(VAR_2);
 VAR_4 &= ~VAR_1;
 FUNC_2(VAR_2, VAR_4);
}
