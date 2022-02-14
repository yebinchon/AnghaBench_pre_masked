
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wl1251 {int * mbox_ptr; } ;
struct event_mailbox {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct wl1251*,struct event_mailbox*) ;
 int FUNC_2 (struct wl1251*,int ,struct event_mailbox*,int) ;
 int FUNC_3 (struct wl1251*,int ,int ) ;

int FUNC_4(struct wl1251 *VAR_4, u8 VAR_5)
{
 struct event_mailbox VAR_6;
 int VAR_7;

 FUNC_0(VAR_1, "EVENT on mbox %d", VAR_5);

 if (VAR_5 > 1)
  return -VAR_2;


 FUNC_2(VAR_4, VAR_4->mbox_ptr[VAR_5], &VAR_6,
       sizeof(struct event_mailbox));


 VAR_7 = FUNC_1(VAR_4, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;


 FUNC_3(VAR_4, VAR_0, VAR_3);

 return 0;
}
