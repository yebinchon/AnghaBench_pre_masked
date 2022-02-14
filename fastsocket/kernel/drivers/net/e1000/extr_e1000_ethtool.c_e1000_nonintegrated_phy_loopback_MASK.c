
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
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
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct e1000_adapter*) ;
 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (struct e1000_adapter*) ;
 int FUNC_3 (struct e1000_hw*,int,int*) ;
 int FUNC_4 (struct e1000_hw*,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct e1000_adapter *VAR_11)
{
 struct e1000_hw *VAR_12 = &VAR_11->hw;
 u32 VAR_13;
 u16 VAR_14;



 VAR_13 = FUNC_5(VAR_0);
 VAR_13 |= (VAR_4 |
       VAR_3 |
       VAR_2 |
       VAR_5 |
       VAR_1);

 FUNC_6(VAR_0, VAR_13);


 FUNC_3(VAR_12, VAR_7, &VAR_14);




 VAR_14 &= ~VAR_8;
 FUNC_4(VAR_12, VAR_7, VAR_14);


 FUNC_1(VAR_12);


 FUNC_2(VAR_11);

 FUNC_4(VAR_12, VAR_10, 0x8100);


 FUNC_7(500);


 FUNC_2(VAR_11);


 FUNC_0(VAR_11);


 FUNC_3(VAR_12, VAR_10, &VAR_14);
 VAR_14 |= VAR_9;
 FUNC_4(VAR_12, VAR_10, VAR_14);


 FUNC_2(VAR_11);


 FUNC_3(VAR_12, VAR_10, &VAR_14);
 if (VAR_14 != 0x4100)
   return 9;

 FUNC_3(VAR_12, VAR_6, &VAR_14);
 if (VAR_14 != 0x0070)
  return 10;

 FUNC_3(VAR_12, 29, &VAR_14);
 if (VAR_14 != 0x001A)
  return 11;

 return 0;
}
