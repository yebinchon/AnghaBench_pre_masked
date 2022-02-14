
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(uint8 *VAR_1)
{
 int VAR_2;

 for(VAR_2=65536;VAR_2;VAR_2--)
 {
  if(FUNC_0(VAR_0+0xE)&0x80)
  {
   *VAR_1=FUNC_0(VAR_0+0xA);
   return(1);
  }
 }
 return(0);
}
