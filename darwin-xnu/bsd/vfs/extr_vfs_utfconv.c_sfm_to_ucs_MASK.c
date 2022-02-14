
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int* VAR_3 ;

__attribute__((used)) static u_int16_t
FUNC_1(u_int16_t VAR_4)
{
 if (((VAR_4 & 0xffC0) == VAR_2) &&
     ((VAR_4 & 0x003f) <= VAR_0)) {
  FUNC_0((VAR_4 & 0x003f) < VAR_1);
  VAR_4 = VAR_3[VAR_4 & 0x003f];
 }
 return (VAR_4);
}
