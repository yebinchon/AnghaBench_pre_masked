
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl3501_resync_req {int sig_id; } ;
struct wl3501_card {int dummy; } ;
typedef int sig ;


 int VAR_0 ;
 int FUNC_0 (struct wl3501_card*,struct wl3501_resync_req*,int) ;

__attribute__((used)) static int FUNC_1(struct wl3501_card *VAR_1)
{
 struct wl3501_resync_req VAR_2 = {
  .sig_id = VAR_0,
 };

 return FUNC_0(VAR_1, &VAR_2, sizeof(VAR_2));
}
