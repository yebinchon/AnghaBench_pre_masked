
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8_t ;
typedef scalar_t__ u16_t ;
struct pbuf {int len; int tot_len; struct pbuf* next; int flags; scalar_t__ payload; } ;
struct TYPE_3__ {scalar_t__ avail; } ;
struct TYPE_4__ {TYPE_1__ pbuf; } ;


 int FUNC_0 (int *,int,int) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 struct pbuf* VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;

void
FUNC_2(void)
{
  struct pbuf *VAR_9, *VAR_10 = ((void*)0);
  u16_t VAR_11;

  VAR_4 = (struct pbuf *)FUNC_1(VAR_8);






  VAR_9 = VAR_4;

  for(VAR_11 = 0; VAR_11 < VAR_2; ++VAR_11) {
    VAR_9->next = (struct pbuf *)((u8_t *)VAR_9 + VAR_1 + sizeof(struct pbuf));
    VAR_9->len = VAR_9->tot_len = VAR_1;
    VAR_9->payload = FUNC_1((void *)((u8_t *)VAR_9 + sizeof(struct pbuf)));
    VAR_9->flags = VAR_0;
    VAR_10 = VAR_9;
    VAR_9 = VAR_9->next;
  }



  VAR_10->next = ((void*)0);


  VAR_5 = 0;
  VAR_6 = 0;
  FUNC_0(&VAR_7,1,1);

}
