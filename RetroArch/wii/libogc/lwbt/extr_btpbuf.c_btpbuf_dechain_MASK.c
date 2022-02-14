
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8_t ;
struct pbuf {scalar_t__ len; scalar_t__ tot_len; struct pbuf* next; } ;


 scalar_t__ FUNC_0 (struct pbuf*) ;

struct pbuf* FUNC_1(struct pbuf *VAR_0)
{
 struct pbuf *VAR_1;
 u8_t VAR_2 = 1;

 VAR_1 = VAR_0->next;
 if(VAR_1!=((void*)0)) {
  VAR_1->tot_len = VAR_0->tot_len - VAR_0->len;
  VAR_0->next = ((void*)0);
  VAR_0->tot_len = VAR_0->len;

  VAR_2 = FUNC_0(VAR_1);
 }

 return (VAR_2>0?((void*)0):VAR_1);
}
