
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct hostap_tx_callback_info {void (* func ) (struct sk_buff*,int,void*) ;int idx; struct hostap_tx_callback_info* next; void* data; } ;
struct TYPE_3__ {int lock; struct hostap_tx_callback_info* tx_callback; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 struct hostap_tx_callback_info* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

u16 FUNC_3(local_info_t *VAR_1,
    void (*VAR_2)(struct sk_buff *, int VAR_3, void *),
    void *VAR_4)
{
 unsigned long VAR_5;
 struct hostap_tx_callback_info *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_0);
 if (VAR_6 == ((void*)0))
  return 0;

 VAR_6->func = VAR_2;
 VAR_6->data = VAR_4;

 FUNC_1(&VAR_1->lock, VAR_5);
 VAR_6->idx = VAR_1->tx_callback ? VAR_1->tx_callback->idx + 1 : 1;
 VAR_6->next = VAR_1->tx_callback;
 VAR_1->tx_callback = VAR_6;
 FUNC_2(&VAR_1->lock, VAR_5);

 return VAR_6->idx;
}
