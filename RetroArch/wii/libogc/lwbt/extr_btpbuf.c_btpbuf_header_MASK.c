
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct pbuf {int* payload; scalar_t__ flags; scalar_t__ len; int tot_len; } ;
typedef scalar_t__ s16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

u8_t FUNC_0(struct pbuf *VAR_4,s16_t VAR_5)
{
 void *VAR_6;

 if(VAR_5==0 || VAR_4==((void*)0)) return 0;

 VAR_6 = VAR_4->payload;
 if(VAR_4->flags==VAR_0 || VAR_4->flags==VAR_1) {
  VAR_4->payload = (u8_t*)VAR_4->payload-VAR_5;
  if((u8_t*)VAR_4->payload<(u8_t*)VAR_4+sizeof(struct pbuf)) {
   VAR_4->payload = VAR_6;
   return 1;
  }
 } else if(VAR_4->flags==VAR_3 || VAR_4->flags==VAR_2) {
  if(VAR_5<0 && VAR_5-VAR_4->len<=0) VAR_4->payload = (u8_t*)VAR_4->payload-VAR_5;
  else return 1;
 }
 VAR_4->tot_len += VAR_5;
 VAR_4->len += VAR_5;

 return 0;
}
