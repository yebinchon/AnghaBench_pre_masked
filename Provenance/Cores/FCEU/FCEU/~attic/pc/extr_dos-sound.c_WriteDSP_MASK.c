
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_2(uint8 VAR_1)
{
 int VAR_2;

 for(VAR_2=65536;VAR_2;VAR_2--)
 {
  if(!(FUNC_0(VAR_0+0xC)&0x80))
  {
   FUNC_1(VAR_0+0xC,VAR_1);
   return(1);
  }
 }
 return(0);
}
