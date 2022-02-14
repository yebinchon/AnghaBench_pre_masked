
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
struct pbuf {scalar_t__ payload; } ;
struct TYPE_2__ {int flow; } ;




 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*,int,int,int) ;

__attribute__((used)) static void FUNC_1(u8_t VAR_2,struct pbuf *VAR_3)
{
 u8_t *VAR_4;
 u8_t VAR_5,VAR_6;


 switch(VAR_2) {
  case 128:
   if(((u8_t*)VAR_3->payload)[0]==VAR_0) VAR_1->flow = 1;
   break;
  case 129:
   if(((u8_t*)VAR_3->payload)[0]==VAR_0) {
    for(VAR_5=0;VAR_5<((u8_t*)VAR_3->payload)[1];VAR_5++) {
     VAR_6 = (VAR_5*3);
     VAR_4 = (void*)(((u8_t*)VAR_3->payload)+(2+VAR_6));
     FUNC_0("lap = 00%02x%02x%02x\n",VAR_4[2],VAR_4[1],VAR_4[0]);
    }
   }
   break;
 }
}
