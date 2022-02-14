
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(struct e1000_hw *VAR_7, int VAR_8, int VAR_9,
      int VAR_10)
{
 int VAR_11, VAR_12;
 u32 VAR_13;

 if (VAR_9 != 0) {

  VAR_12 = VAR_10 / VAR_9;
  VAR_11 = (VAR_10 - (VAR_12 * VAR_9));
  VAR_11 = (VAR_11 * (1 << VAR_3)) /
    VAR_9;

  VAR_13 = VAR_4;
  VAR_13 |= ((VAR_12 << VAR_3) &
         VAR_2);
  VAR_13 |= (VAR_11 & VAR_1);
 } else {
  VAR_13 = 0;
 }

 FUNC_0(VAR_6, VAR_8);



 FUNC_0(VAR_5, 0x14);
 FUNC_0(VAR_0, VAR_13);
}
