
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef scalar_t__ u16_t ;
struct pbuf {scalar_t__ len; struct pbuf* next; } ;
struct bd_addr {int dummy; } ;
typedef scalar_t__ err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pbuf*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct bd_addr*,struct pbuf*,scalar_t__,int ) ;
 scalar_t__ FUNC_3 () ;

err_t FUNC_4(struct bd_addr *VAR_3, struct pbuf *VAR_4, u16_t VAR_5)
{
 u8_t VAR_6 = VAR_2;
 u16_t VAR_7;
 u16_t VAR_8;
 err_t VAR_9 = VAR_0;
 struct pbuf *VAR_10;
 u16_t VAR_11 = 0;
 VAR_7 = FUNC_3();
 VAR_10 = VAR_4;

 while(VAR_5 && VAR_9 == VAR_0) {

  if(VAR_5 > VAR_7) {
   VAR_9 = FUNC_2(VAR_3, VAR_10, VAR_7, VAR_6);
   VAR_5 -= VAR_7;
   VAR_8 = VAR_7;

   while(VAR_10->len < VAR_8) {
    VAR_8 -= VAR_10->len;
    VAR_10 = VAR_10->next;
   }

   if(VAR_8) {
    FUNC_1(VAR_10, -VAR_8);
    VAR_11 += VAR_8;
   }
   VAR_6 = VAR_1;
   FUNC_0("l2cap_write: FRAG\n");
  } else {
   VAR_9 = FUNC_2(VAR_3, VAR_10, VAR_5, VAR_6);
   VAR_5 = 0;
  }
 }
 FUNC_1(VAR_10, VAR_11);
 FUNC_0("l2cap_write: DONE\n");
 return VAR_9;
}
