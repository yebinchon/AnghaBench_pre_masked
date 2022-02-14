
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef scalar_t__ u32_t ;
struct uip_pbuf {scalar_t__ len; scalar_t__ payload; } ;
struct tcpip_sock {scalar_t__ lastoffset; struct uip_pbuf* lastdata; } ;
typedef int s32_t ;


 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 () ;
 struct tcpip_sock* FUNC_2 (int) ;
 struct uip_pbuf* FUNC_3 (struct uip_pbuf*) ;
 int FUNC_4 (struct uip_pbuf*) ;

s32_t FUNC_5(s32_t VAR_0,void *VAR_1,u32_t VAR_2)
{
 u32_t VAR_3,VAR_4;
 u8_t *VAR_5;
 struct uip_pbuf *VAR_6;
 struct tcpip_sock *VAR_7;

 VAR_7 = FUNC_2(VAR_0);
 if(!VAR_7) return -1;

 do {
  FUNC_1();
 } while(VAR_7->lastdata==((void*)0));

 if(VAR_7->lastdata) {
  VAR_3 = 0;
  VAR_5 = VAR_1;
  while(VAR_2>0 && VAR_7->lastdata) {
   VAR_6 = VAR_7->lastdata;

   if(VAR_2>VAR_6->len-VAR_7->lastoffset) VAR_4 = (VAR_6->len-VAR_7->lastoffset);
   else VAR_4 = VAR_2;

   FUNC_0(VAR_5+VAR_3,(u8_t*)VAR_6->payload+VAR_7->lastoffset,VAR_4);

   VAR_3 += VAR_4;
   VAR_2 -= VAR_4;
   VAR_7->lastoffset += VAR_4;

   if(VAR_7->lastoffset>=VAR_6->len) {
    VAR_7->lastoffset = 0;
    VAR_7->lastdata = FUNC_3(VAR_6);
    FUNC_4(VAR_6);





   }
  }
  return VAR_3;
 }
 return -1;
}
