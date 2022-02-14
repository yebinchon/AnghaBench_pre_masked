
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {scalar_t__* mbox_ptr; } ;
struct event_mailbox {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct wl1251*,int ) ;

void FUNC_2(struct wl1251 *VAR_2)
{
 VAR_2->mbox_ptr[0] = FUNC_1(VAR_2, VAR_1);
 VAR_2->mbox_ptr[1] = VAR_2->mbox_ptr[0] + sizeof(struct event_mailbox);

 FUNC_0(VAR_0, "MBOX ptrs: 0x%x 0x%x",
       VAR_2->mbox_ptr[0], VAR_2->mbox_ptr[1]);
}
