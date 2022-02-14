
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 size_t VAR_2 ;
 int* VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(int VAR_4, __u8 *VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 FUNC_1(VAR_6);



 VAR_3[VAR_2] = (VAR_3[VAR_2] | VAR_0) & ~VAR_1;

 if (VAR_4 & 0xFF00) {
  FUNC_3((VAR_4 & 0xFF00) >> 8);
  FUNC_3(VAR_4 & 0xFF);
  VAR_7 = VAR_4 & 0x8000;
 } else {
  FUNC_3(VAR_4);
  VAR_7 = VAR_4 & 0x80;
 }
 if (VAR_7) {
  *VAR_5 = FUNC_2();
 } else {
  FUNC_3(*VAR_5);
 }



 VAR_3[VAR_2] |= VAR_1;

 FUNC_0(VAR_6);
}
