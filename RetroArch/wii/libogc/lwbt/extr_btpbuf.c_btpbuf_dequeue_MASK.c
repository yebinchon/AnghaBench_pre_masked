
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pbuf {scalar_t__ tot_len; scalar_t__ len; struct pbuf* next; } ;



struct pbuf* FUNC_0(struct pbuf *VAR_0)
{
 struct pbuf *VAR_1;

 if(VAR_0==((void*)0)) return ((void*)0);

 while(VAR_0->tot_len!=VAR_0->len) VAR_0 = VAR_0->next;

 VAR_1 = VAR_0->next;
 VAR_0->next = ((void*)0);

 return VAR_1;
}
