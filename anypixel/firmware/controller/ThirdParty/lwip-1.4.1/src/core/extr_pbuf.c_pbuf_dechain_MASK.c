
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8_t ;
struct pbuf {scalar_t__ tot_len; scalar_t__ len; struct pbuf* next; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct pbuf*) ;

struct pbuf *
FUNC_3(struct pbuf *VAR_2)
{
  struct pbuf *VAR_3;
  u8_t VAR_4 = 1;

  VAR_3 = VAR_2->next;

  if (VAR_3 != ((void*)0)) {

    FUNC_0("p->tot_len == p->len + q->tot_len", VAR_3->tot_len == VAR_2->tot_len - VAR_2->len);

    VAR_3->tot_len = VAR_2->tot_len - VAR_2->len;

    VAR_2->next = ((void*)0);

    VAR_2->tot_len = VAR_2->len;

    FUNC_1(VAR_1 | VAR_0, ("pbuf_dechain: unreferencing %p\n", (void *)VAR_3));
    VAR_4 = FUNC_2(VAR_3);
    if (VAR_4 > 0) {
      FUNC_1(VAR_1 | VAR_0,
                  ("pbuf_dechain: deallocated %p (as it is no longer referenced)\n", (void *)VAR_3));
    }

  }

  FUNC_0("p->tot_len == p->len", VAR_2->tot_len == VAR_2->len);
  return ((VAR_4 > 0) ? ((void*)0) : VAR_3);
}
