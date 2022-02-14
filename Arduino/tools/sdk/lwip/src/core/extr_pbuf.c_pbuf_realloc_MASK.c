
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef scalar_t__ u16_t ;
struct pbuf {scalar_t__ type; scalar_t__ tot_len; scalar_t__ len; struct pbuf* next; scalar_t__ payload; } ;
typedef int s32_t ;


 int FUNC_0 (char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct pbuf*,scalar_t__) ;
 int FUNC_2 (struct pbuf*) ;

void
FUNC_3(struct pbuf *VAR_4, u16_t VAR_5)
{
  struct pbuf *VAR_6;
  u16_t VAR_7;
  s32_t VAR_8;

  FUNC_0("pbuf_realloc: p != NULL", VAR_4 != ((void*)0));
  FUNC_0("pbuf_realloc: sane p->type", VAR_4->type == VAR_0 ||
              VAR_4->type == VAR_3 ||
              VAR_4->type == VAR_1 ||
              VAR_4->type == VAR_2);


  if (VAR_5 >= VAR_4->tot_len) {

    return;
  }



  VAR_8 = VAR_5 - VAR_4->tot_len;


  VAR_7 = VAR_5;
  VAR_6 = VAR_4;

  while (VAR_7 > VAR_6->len) {

    VAR_7 -= VAR_6->len;

    FUNC_0("grow < max_u16_t", VAR_8 < 0xffff);
    VAR_6->tot_len += (u16_t)VAR_8;

    VAR_6 = VAR_6->next;
    FUNC_0("pbuf_realloc: q != NULL", VAR_6 != ((void*)0));
  }





  if ((VAR_6->type == VAR_1) && (VAR_7 != VAR_6->len)) {

    VAR_6 = (struct pbuf *)FUNC_1(VAR_6, (u16_t)((u8_t *)VAR_6->payload - (u8_t *)VAR_6) + VAR_7);
    FUNC_0("mem_trim returned q == NULL", VAR_6 != ((void*)0));
  }

  VAR_6->len = VAR_7;
  VAR_6->tot_len = VAR_6->len;


  if (VAR_6->next != ((void*)0)) {

    FUNC_2(VAR_6->next);
  }

  VAR_6->next = ((void*)0);

}
