
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pbuf {scalar_t__ flags; scalar_t__ len; struct pbuf* next; int tot_len; int payload; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 struct pbuf* FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (struct pbuf*) ;

struct pbuf *
FUNC_5(struct pbuf *VAR_7)
{
  struct pbuf *VAR_8 , *VAR_9, *VAR_10;
  FUNC_0("pbuf_take: p != NULL\n", VAR_7 != ((void*)0));
  FUNC_1(VAR_1 | VAR_0 | 3, ("pbuf_take(%p)\n", (void*)VAR_7));

  VAR_9 = ((void*)0);
  VAR_10 = VAR_7;

  do
  {

    if (VAR_7->flags == VAR_2) {
      FUNC_1(VAR_1 | VAR_0, ("pbuf_take: encountered PBUF_REF %p\n", (void *)VAR_7));


      if (VAR_7->len <= VAR_4) {
        VAR_8 = FUNC_3(VAR_6, VAR_7->len, VAR_3);
        if (VAR_8 == ((void*)0)) {
          FUNC_1(VAR_1 | VAR_0 | 2, ("pbuf_take: Could not allocate PBUF_POOL\n"));
        }
      } else {

        VAR_8 = ((void*)0);
        FUNC_1(VAR_1 | VAR_0 | 2, ("pbuf_take: PBUF_POOL too small to replace PBUF_REF\n"));
      }

      if (VAR_8 == ((void*)0)) {
        VAR_8 = FUNC_3(VAR_6, VAR_7->len, VAR_5);
        if (VAR_8 == ((void*)0)) {
          FUNC_1(VAR_1 | VAR_0 | 2, ("pbuf_take: Could not allocate PBUF_RAM\n"));
        }
      }

      if (VAR_8 != ((void*)0))
      {


        VAR_8->next = VAR_7->next;

        VAR_7->next = ((void*)0);

        if (VAR_9 != ((void*)0)) {

          FUNC_0("prev->next == p", VAR_9->next == VAR_7);

          VAR_9->next = VAR_8;

        } else {
          VAR_10 = VAR_8;
        }

        FUNC_2(VAR_8->payload, VAR_7->payload, VAR_7->len);
        VAR_8->tot_len = VAR_7->tot_len;
        VAR_8->len = VAR_7->len;







        FUNC_4(VAR_7);

        FUNC_1(VAR_1, ("pbuf_take: replaced PBUF_REF %p with %p\n", (void )VAR_7, (void *)VAR_8));
        VAR_7 = VAR_8;
      } else {

        FUNC_4(VAR_10);
        FUNC_1(VAR_1 | 2, ("pbuf_take: failed to allocate replacement pbuf for %p\n", (void *)VAR_7));
        return ((void*)0);
      }

    } else {
      FUNC_1(VAR_1 | VAR_0 | 1, ("pbuf_take: skipping pbuf not of type PBUF_REF\n"));
    }

    VAR_9 = VAR_7;

    VAR_7 = VAR_7->next;
  } while (VAR_7);
  FUNC_1(VAR_1 | VAR_0 | 1, ("pbuf_take: end of chain reached.\n"));

  return VAR_10;
}
