
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct hostap_tx_callback_info {scalar_t__ idx; struct hostap_tx_callback_info* next; } ;
struct TYPE_3__ {int lock; struct hostap_tx_callback_info* tx_callback; } ;
typedef TYPE_1__ local_info_t ;


 int FUNC_0 (struct hostap_tx_callback_info*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(local_info_t *VAR_0, u16 VAR_1)
{
 unsigned long VAR_2;
 struct hostap_tx_callback_info *VAR_3, *VAR_4 = ((void*)0);

 FUNC_1(&VAR_0->lock, VAR_2);
 VAR_3 = VAR_0->tx_callback;
 while (VAR_3 != ((void*)0) && VAR_3->idx != VAR_1) {
  VAR_4 = VAR_3;
  VAR_3 = VAR_3->next;
 }
 if (VAR_3) {
  if (VAR_4 == ((void*)0))
   VAR_0->tx_callback = VAR_3->next;
  else
   VAR_4->next = VAR_3->next;
  FUNC_0(VAR_3);
 }
 FUNC_2(&VAR_0->lock, VAR_2);

 return VAR_3 ? 0 : -1;
}
