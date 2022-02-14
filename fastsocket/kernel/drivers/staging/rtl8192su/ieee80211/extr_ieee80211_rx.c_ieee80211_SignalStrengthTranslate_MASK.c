
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;



__attribute__((used)) static inline u8 FUNC_0(
 u8 VAR_0
 )
{
 u8 VAR_1;


 if(VAR_0 >= 71 && VAR_0 <= 100)
 {
  VAR_1 = 90 + ((VAR_0 - 70) / 3);
 }
 else if(VAR_0 >= 41 && VAR_0 <= 70)
 {
  VAR_1 = 78 + ((VAR_0 - 40) / 3);
 }
 else if(VAR_0 >= 31 && VAR_0 <= 40)
 {
  VAR_1 = 66 + (VAR_0 - 30);
 }
 else if(VAR_0 >= 21 && VAR_0 <= 30)
 {
  VAR_1 = 54 + (VAR_0 - 20);
 }
 else if(VAR_0 >= 5 && VAR_0 <= 20)
 {
  VAR_1 = 42 + (((VAR_0 - 5) * 2) / 3);
 }
 else if(VAR_0 == 4)
 {
  VAR_1 = 36;
 }
 else if(VAR_0 == 3)
 {
  VAR_1 = 27;
 }
 else if(VAR_0 == 2)
 {
  VAR_1 = 18;
 }
 else if(VAR_0 == 1)
 {
  VAR_1 = 9;
 }
 else
 {
  VAR_1 = VAR_0;
 }






 return VAR_1;
}
