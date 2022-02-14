
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct wl3501_get_req {int mib_attrib; int sig_id; } ;
struct TYPE_2__ {int mib_status; int mib_value; } ;
struct wl3501_card {int lock; TYPE_1__ sig_get_confirm; int wait; } ;
typedef int sig ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct wl3501_card*,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct wl3501_card*) ;
 scalar_t__ FUNC_6 (struct wl3501_card*,int) ;
 int FUNC_7 (struct wl3501_card*,scalar_t__,struct wl3501_get_req*,int) ;

__attribute__((used)) static int FUNC_8(struct wl3501_card *VAR_2, u8 VAR_3,
    void *VAR_4, int VAR_5)
{
 struct wl3501_get_req VAR_6 = {
  .sig_id = VAR_1,
  .mib_attrib = VAR_3,
 };
 unsigned long VAR_7;
 int VAR_8 = -VAR_0;

 FUNC_1(&VAR_2->lock, VAR_7);
 if (FUNC_5(VAR_2)) {
  u16 VAR_9 = FUNC_6(VAR_2, sizeof(VAR_6));
  if (VAR_9) {
   FUNC_7(VAR_2, VAR_9, &VAR_6, sizeof(VAR_6));
   FUNC_4(VAR_2, &VAR_9);
   VAR_2->sig_get_confirm.mib_status = 255;
   FUNC_2(&VAR_2->lock, VAR_7);
   VAR_8 = FUNC_3(VAR_2->wait,
    VAR_2->sig_get_confirm.mib_status != 255);
   if (!VAR_8)
    FUNC_0(VAR_4, VAR_2->sig_get_confirm.mib_value,
           VAR_5);
   goto out;
  }
 }
 FUNC_2(&VAR_2->lock, VAR_7);
out:
 return VAR_8;
}
