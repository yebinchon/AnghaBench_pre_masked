
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8_t ;
struct uip_pbuf {scalar_t__ ref; scalar_t__ flags; struct uip_pbuf* next; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct uip_pbuf*) ;
 int FUNC_1 (struct uip_pbuf*) ;
 int VAR_3 ;
 int VAR_4 ;

u8_t FUNC_2(struct uip_pbuf *VAR_5)
{
 u8_t VAR_6;
 struct uip_pbuf *VAR_7;

 if(VAR_5==((void*)0)) return 0;

 VAR_6 = 0;
 while(VAR_5!=((void*)0)) {
  VAR_5->ref--;
  if(VAR_5->ref==0) {
   VAR_7 = VAR_5->next;
   if(VAR_5->flags==VAR_0) {
    FUNC_0(&VAR_3,VAR_5);
   } else if(VAR_5->flags==VAR_2 || VAR_5->flags==VAR_1) {
    FUNC_0(&VAR_4,VAR_5);
   } else {
    FUNC_1(VAR_5);
   }
   VAR_6++;
   VAR_5 = VAR_7;
  } else
   VAR_5 = ((void*)0);
 }
 return VAR_6;
}
