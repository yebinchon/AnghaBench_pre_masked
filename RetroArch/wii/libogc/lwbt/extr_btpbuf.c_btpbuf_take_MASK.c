
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pbuf {scalar_t__ flags; scalar_t__ len; struct pbuf* next; int tot_len; int payload; } ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct pbuf* FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (struct pbuf*) ;
 int FUNC_3 (int ,int ,scalar_t__) ;

struct pbuf* FUNC_4(struct pbuf *VAR_5)
{
 struct pbuf *VAR_6 , *VAR_7, *VAR_8;

 VAR_7 = ((void*)0);
 VAR_8 = VAR_5;

 do
 {

  if (VAR_5->flags == VAR_0) {
   FUNC_0("pbuf_take: encountered PBUF_REF %p\n", (void *)VAR_5);


   if (VAR_5->len <= VAR_2) {
    VAR_6 = FUNC_1(VAR_4, VAR_5->len, VAR_1);
    if (VAR_6 == ((void*)0)) {
     FUNC_0("pbuf_take: Could not allocate PBUF_POOL\n");
    }
   } else {

    VAR_6 = ((void*)0);
    FUNC_0("pbuf_take: PBUF_POOL too small to replace PBUF_REF\n");
   }

   if (VAR_6 == ((void*)0)) {
    VAR_6 = FUNC_1(VAR_4, VAR_5->len, VAR_3);
    if (VAR_6 == ((void*)0)) {
     FUNC_0("pbuf_take: Could not allocate PBUF_RAM\n");
    }
   }

   if (VAR_6 != ((void*)0))
   {


    VAR_6->next = VAR_5->next;

    VAR_5->next = ((void*)0);

    if (VAR_7 != ((void*)0)) {

     VAR_7->next = VAR_6;

    } else {
     VAR_8 = VAR_6;
    }

    FUNC_3(VAR_6->payload, VAR_5->payload, VAR_5->len);
    VAR_6->tot_len = VAR_5->tot_len;
    VAR_6->len = VAR_5->len;







    FUNC_2(VAR_5);

    FUNC_0("pbuf_take: replaced PBUF_REF %p with %p\n", (void *)VAR_5, (void *)VAR_6);
    VAR_5 = VAR_6;
   } else {

    FUNC_2(VAR_8);
    FUNC_0("pbuf_take: failed to allocate replacement pbuf for %p\n", (void *)VAR_5);
    return ((void*)0);
   }

  } else {
   FUNC_0("pbuf_take: skipping pbuf not of type PBUF_REF\n");
  }

  VAR_7 = VAR_5;

  VAR_5 = VAR_5->next;
 } while (VAR_5);
 FUNC_0("pbuf_take: end of chain reached.\n");

 return VAR_8;
}
