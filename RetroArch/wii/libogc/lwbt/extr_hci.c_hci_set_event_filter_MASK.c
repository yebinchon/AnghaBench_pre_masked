
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef scalar_t__ u32 ;
struct pbuf {int tot_len; scalar_t__ payload; } ;
typedef int err_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct pbuf* FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (struct pbuf*) ;
 struct pbuf* FUNC_3 (struct pbuf*,int ,int ,scalar_t__) ;
 int FUNC_4 (scalar_t__,int*,scalar_t__) ;
 int FUNC_5 (struct pbuf*,int ) ;

err_t FUNC_6(u8_t VAR_7,u8_t VAR_8,u8_t *VAR_9)
{
 u32 VAR_10 = 0;
 struct pbuf *VAR_11 = ((void*)0);

 switch(VAR_7) {
  case 0x00:
   VAR_10 = 0x00;
   break;
  case 0x01:
   switch(VAR_8) {
    case 0x00:
     VAR_10 = 0x00;
     break;
    case 0x01:
     VAR_10 = 0x06;
     break;
    case 0x02:
     VAR_10 = 0x06;
     break;
    default:
     break;
   }
   break;
  case 0x02:
   switch(VAR_8) {
    case 0x00:
     VAR_10 = 0x01;
     break;
    case 0x01:
     VAR_10 = 0x07;
     break;
    case 0x02:
     VAR_10 = 0x07;
     break;
    default:
     break;
   }
   break;
  default:
   break;
 }

 if((VAR_11=FUNC_1(VAR_6,VAR_4+VAR_10,VAR_5))==((void*)0)) {
  FUNC_0("hci_set_event_filter: Could not allocate memory for pbuf\n");
  return VAR_0;
 }

 VAR_11 = FUNC_3(VAR_11,VAR_3,VAR_2,VAR_4+VAR_10);
 ((u8_t*)VAR_11->payload)[4] = VAR_7;
 ((u8_t*)VAR_11->payload)[5] = VAR_8;
 if(VAR_10>0) FUNC_4(VAR_11->payload+6,VAR_9,VAR_10);

 FUNC_5(VAR_11,VAR_11->tot_len);
 FUNC_2(VAR_11);

 return VAR_1;
}
