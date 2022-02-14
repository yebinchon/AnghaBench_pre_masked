
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(u32 VAR_10)
{
 u32 VAR_11;

 FUNC_2(0x7FFF8000, VAR_9 + VAR_2);
 FUNC_2(0x00FF0000, VAR_9 + VAR_3);

 VAR_11 = FUNC_0(VAR_9 + VAR_5);
 VAR_11 &= ~(0x00100000);
 VAR_11 |= 0xFF000000;
 FUNC_2(VAR_11, VAR_9 + VAR_5);

 VAR_11 = FUNC_0(VAR_9 + VAR_4);
 VAR_11 &= ~(0x00040000);
 VAR_11 |= 0x00080000;
 FUNC_2(VAR_11, VAR_9 + VAR_4);

 FUNC_1(1);

 if (VAR_10 == VAR_0) {

  VAR_11 = FUNC_0(VAR_9 + VAR_4);
  VAR_11 |= 0x40000000;
  FUNC_2(VAR_11, VAR_9 + VAR_4);


  VAR_11 = FUNC_0(VAR_9 + VAR_4);
  VAR_11 &= ~(0x00000001);
  FUNC_2(VAR_11, VAR_9 + VAR_4);
 } else {
  FUNC_2(0x00000000, VAR_9 + VAR_8);
  FUNC_2(0x000000BF, VAR_9 + VAR_1);
  FUNC_2(0x00000015, VAR_9 + VAR_7);

  FUNC_1(5);

  VAR_11 = FUNC_0(VAR_9 + VAR_6);
  VAR_11 |= 0x00000004;
  FUNC_2(VAR_11, VAR_9 + VAR_6);
  FUNC_2(0x0000001d, VAR_9 + VAR_7);
 }
}
