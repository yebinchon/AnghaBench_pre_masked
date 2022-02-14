
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;

u16 FUNC_2(
 u16 VAR_0,
 u16 VAR_1,
 u8 VAR_2,
 u8 VAR_3
)
{
 u16 VAR_4;
 u16 VAR_5;
 u16 VAR_6;

 if( FUNC_1(VAR_1) )
 {
  if( VAR_2 || !VAR_3 || VAR_1 == 10 )
  {
   VAR_4 = (u16)(144+48+(VAR_0*8/(VAR_1/10)));
  }
  else
  {
   VAR_4 = (u16)(72+24+(VAR_0*8/(VAR_1/10)));
  }
  if( ( VAR_0*8 % (VAR_1/10) ) != 0 )
    VAR_4 ++;
 } else {
  VAR_5 = FUNC_0(VAR_1);
  VAR_6 = (16 + 8*VAR_0 + 6) / VAR_5
    + (((16 + 8*VAR_0 + 6) % VAR_5) ? 1 : 0);
  VAR_4 = (u16)(16 + 4 + 4*VAR_6 + 6);
 }
 return VAR_4;
}
