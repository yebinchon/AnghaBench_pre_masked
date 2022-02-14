
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct e1000_adapter *VAR_8)
{
 struct e1000_hw *VAR_9 = &VAR_8->hw;
 u32 VAR_10 = FUNC_1(VAR_0);
 int VAR_11;






 VAR_10 |= VAR_2;
 FUNC_2(VAR_0, VAR_10);


 VAR_10 = FUNC_1(VAR_7);
 VAR_10 &= ~(1 << 31);
 FUNC_2(VAR_7, VAR_10);

 VAR_11 = (FUNC_1(VAR_6) & VAR_4);

 if (!VAR_11) {

  VAR_10 = FUNC_1(VAR_0);
  VAR_10 |= VAR_1;
  FUNC_2(VAR_0, VAR_10);
 }




 FUNC_2(VAR_5, VAR_3);
 FUNC_0();
 FUNC_3(10000, 20000);

 return 0;
}
