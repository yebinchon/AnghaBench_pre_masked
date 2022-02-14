
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8 ;
typedef int uint32 ;
typedef int int32 ;
typedef int _go32_dpmi_registers ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static void FUNC_5(_go32_dpmi_registers *VAR_16)
{
        uint32 *VAR_17;
 uint32 VAR_18;
 int32 VAR_19;


        if(VAR_8)
        {
         uint8 VAR_20;

         FUNC_4(VAR_5+4,0x82);
         VAR_20=FUNC_3(VAR_5+5);
         if(VAR_20&2)
          FUNC_3(VAR_5+0x0F);
        }
        else
         FUNC_3(VAR_5+0x0E);
        if(VAR_11)
        {
         FUNC_4(0x20,0x20);
         if(VAR_4>=8)
          FUNC_4(0xA0,0x20);
         VAR_15^=1;
         return;
        }
        VAR_11=1;

        {


         uint32 VAR_21;
  uint32 VAR_22;
  uint32 VAR_23;

         if(VAR_8)
          VAR_23=((VAR_3&3)*4)+0xc2;
         else
          VAR_23=(VAR_2*2)+1;

         VAR_21=FUNC_3(VAR_23);
         VAR_21|=FUNC_3(VAR_23)<<8;

         if(VAR_21>=VAR_9)
          VAR_22=1;
         else
          VAR_22=0;
         VAR_18=VAR_0+((VAR_22*VAR_9)<<VAR_8);





        }

        FUNC_2(VAR_7);

        VAR_17=(uint32 *)(VAR_6+(VAR_1<<VAR_8));

 if(VAR_14)
 {
  uint32 VAR_24;
  if(VAR_8) VAR_24=0;
  else VAR_24=0x80808080;

         for(VAR_19=(VAR_9<<VAR_8)>>2;VAR_19;VAR_19--,VAR_18+=4)
         {
          FUNC_1(VAR_18,VAR_24);
         }
 }
 else
 {
         for(VAR_19=(VAR_9<<VAR_8)>>2;VAR_19;VAR_19--,VAR_18+=4,VAR_17++)
         {
          FUNC_1(VAR_18,*VAR_17);
         }
         VAR_1=(VAR_1+VAR_9)&(VAR_10-1);
 }

        if(VAR_13)
        {
         static int VAR_25=0;
         if(!VAR_25)
         {
          FUNC_0();
          VAR_12=1;
         }
         VAR_25=(VAR_25+1)&3;
        }
        VAR_11=0;
        FUNC_4(0x20,0x20);
        if(VAR_4>=8)
         FUNC_4(0xA0,0x20);
}
