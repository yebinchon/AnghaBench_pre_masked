
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct pbuf {scalar_t__ len; scalar_t__ payload; struct pbuf* next; } ;
struct netbuf {struct pbuf* p; } ;



__attribute__((used)) static void FUNC_0(struct netbuf *VAR_0,void *VAR_1,u32 VAR_2,u32 VAR_3)
{
 struct pbuf *VAR_4;
 u16 VAR_5,VAR_6;

 VAR_6 = 0;
 if(VAR_0==((void*)0) || VAR_1==((void*)0)) return;

 for(VAR_4=VAR_0->p;VAR_6<VAR_2 && VAR_4!=((void*)0);VAR_4=VAR_4->next) {
  if(VAR_3!=0 && VAR_3>=VAR_4->len)
   VAR_3 -= VAR_4->len;
  else {
   for(VAR_5=VAR_3;VAR_5<VAR_4->len;VAR_5++) {
    ((u8*)VAR_1)[VAR_6] = ((u8*)VAR_4->payload)[VAR_5];
    if(++VAR_6>=VAR_2) return;
   }
   VAR_3 = 0;
  }
 }
}
