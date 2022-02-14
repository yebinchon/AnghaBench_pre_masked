
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pbuf {scalar_t__ tot_len; scalar_t__ len; struct pbuf* next; } ;


 int FUNC_0 (char*,int) ;

void
FUNC_1(struct pbuf *VAR_0, struct pbuf *VAR_1)
{
  struct pbuf *VAR_2;

  FUNC_0("h != NULL (programmer violates API)", VAR_0 != ((void*)0));
  FUNC_0("t != NULL (programmer violates API)", VAR_1 != ((void*)0));
  if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0))) return;


  for (VAR_2 = VAR_0; VAR_2->next != ((void*)0); VAR_2 = VAR_2->next) {

    VAR_2->tot_len += VAR_1->tot_len;
  }

  FUNC_0("p->tot_len == p->len (of last pbuf in chain)", VAR_2->tot_len == VAR_2->len);
  FUNC_0("p->next == NULL", VAR_2->next == ((void*)0));

  VAR_2->tot_len += VAR_1->tot_len;

  VAR_2->next = VAR_1;



}
