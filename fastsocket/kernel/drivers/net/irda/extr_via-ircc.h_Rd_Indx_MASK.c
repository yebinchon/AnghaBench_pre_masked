
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef int __u16 ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static __u8 FUNC_7(__u16 VAR_2, __u8 VAR_3, __u8 VAR_4)
{
 __u8 VAR_5 = 0, VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = VAR_3 | (VAR_4 << 1) | 0;
 FUNC_1(VAR_2, 0, 0);
 FUNC_4(2);
 FUNC_0(VAR_2, 1);
 FUNC_6(1);
 FUNC_5(VAR_2, VAR_6);
 FUNC_3(1);
 FUNC_1(VAR_2, 0, 0);
 FUNC_4(2);
 for (VAR_8 = 0; VAR_8 < 10; VAR_8++) {
  FUNC_0(VAR_2, 1);
  FUNC_4(1);
  FUNC_0(VAR_2, 0);
  FUNC_4(1);
  FUNC_1(VAR_2, 0, 1);
  FUNC_4(1);
  VAR_6 = FUNC_2(VAR_2, 0x34);
  if (!(VAR_6 & VAR_0))
   break;
 }
 if (!(VAR_6 & VAR_0)) {
  for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
   FUNC_0(VAR_2, 1);
   FUNC_4(1);
   FUNC_0(VAR_2, 0);
   VAR_6 = FUNC_2(VAR_2, 0x34);
   VAR_7 = 1 << VAR_8;
   if (VAR_6 & VAR_1)
    VAR_5 |= VAR_7;
   else
    VAR_5 &= ~VAR_7;
   FUNC_4(2);
  }
 } else {
  for (VAR_8 = 0; VAR_8 < 2; VAR_8++) {
   FUNC_0(VAR_2, 1);
   FUNC_4(1);
   FUNC_0(VAR_2, 0);
   FUNC_4(2);
  }
  VAR_6 = FUNC_2(VAR_2, 0x34);
 }
 for (VAR_8 = 0; VAR_8 < 1; VAR_8++) {
  FUNC_0(VAR_2, 1);
  FUNC_4(1);
  FUNC_0(VAR_2, 0);
  FUNC_4(2);
 }
 FUNC_1(VAR_2, 0, 0);
 FUNC_4(1);
 for (VAR_8 = 0; VAR_8 < 3; VAR_8++) {
  FUNC_0(VAR_2, 1);
  FUNC_4(1);
  FUNC_0(VAR_2, 0);
  FUNC_4(2);
 }
 return VAR_5;
}
