
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef void* uint32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (int,int ) ;

void FUNC_2(void)
{
 uint32 VAR_3,VAR_4;


 VAR_0=((FUNC_0(0x201)&0xF0)^0xF0)>>4;

 VAR_3=VAR_4=0;

 {
  FUNC_1(0x201,0);

  for(;;)
  {
   uint8 VAR_5;

   VAR_5=FUNC_0(0x201);
   if(!(VAR_5&3))
    break;
   if(VAR_5&1) VAR_3++;
   if(VAR_5&2) VAR_4++;
  }
 }

 VAR_1=VAR_3;
 VAR_2=VAR_4;
}
