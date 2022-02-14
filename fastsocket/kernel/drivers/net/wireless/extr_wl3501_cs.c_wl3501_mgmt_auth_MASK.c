
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl3501_card {int bssid; } ;
struct wl3501_auth_req {int timeout; int mac_addr; int type; int sig_id; } ;
typedef int sig ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct wl3501_card*,struct wl3501_auth_req*,int) ;

__attribute__((used)) static int FUNC_3(struct wl3501_card *VAR_3)
{
 struct wl3501_auth_req VAR_4 = {
  .sig_id = VAR_1,
  .type = VAR_2,
  .timeout = 1000,
 };

 FUNC_0(3, "entry");
 FUNC_1(VAR_4.mac_addr, VAR_3->bssid, VAR_0);
 return FUNC_2(VAR_3, &VAR_4, sizeof(VAR_4));
}
