
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u16_t ;
struct uip_tcp_pcb {int mss; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_1(struct uip_tcp_pcb *VAR_3)
{
 u8_t VAR_4;
 u8_t *VAR_5,VAR_6;
 u16_t VAR_7;

 VAR_5 = (u8_t*)VAR_2+VAR_0;
 if(FUNC_0(VAR_2)>0x05) {
  for(VAR_4=0;VAR_4<((FUNC_0(VAR_2)-5)<<2);) {
   VAR_6 = VAR_5[VAR_4];
   if(VAR_6==0x00) break;
   else if(VAR_6==0x01) VAR_4++;
   else if(VAR_6==0x02 && VAR_5[VAR_4+1]==0x04) {
    VAR_7 = (VAR_5[VAR_4+2]<<8|VAR_5[VAR_4+3]);
    VAR_3->mss = VAR_7>VAR_1?VAR_1:VAR_7;
    break;
   } else {
    if(VAR_5[VAR_4+1]==0) break;
    VAR_4 += VAR_5[VAR_4+1];
   }
  }
 }
}
