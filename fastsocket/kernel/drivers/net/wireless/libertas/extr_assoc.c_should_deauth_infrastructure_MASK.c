
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ auth_mode; } ;
struct lbs_private {scalar_t__ connect_status; TYPE_1__ secinfo; } ;
struct TYPE_4__ {scalar_t__ auth_mode; } ;
struct assoc_request {scalar_t__ mode; int flags; TYPE_2__ secinfo; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static int FUNC_4(struct lbs_private *VAR_8,
                                        struct assoc_request * VAR_9)
{
 int VAR_10 = 0;

 if (VAR_8->connect_status != VAR_6)
  return 0;

 FUNC_1(VAR_7);
 if (FUNC_3(VAR_4, &VAR_9->flags)) {
  FUNC_0("Deauthenticating due to new SSID\n");
  VAR_10 = 1;
  goto out;
 }

 if (FUNC_3(VAR_3, &VAR_9->flags)) {
  if (VAR_8->secinfo.auth_mode != VAR_9->secinfo.auth_mode) {
   FUNC_0("Deauthenticating due to new security\n");
   VAR_10 = 1;
   goto out;
  }
 }

 if (FUNC_3(VAR_0, &VAR_9->flags)) {
  FUNC_0("Deauthenticating due to new BSSID\n");
  VAR_10 = 1;
  goto out;
 }

 if (FUNC_3(VAR_1, &VAR_9->flags)) {
  FUNC_0("Deauthenticating due to channel switch\n");
  VAR_10 = 1;
  goto out;
 }


 if (FUNC_3(VAR_2, &VAR_9->flags)) {
  if (VAR_9->mode != VAR_5) {
   FUNC_0("Deauthenticating due to leaving "
    "infra mode\n");
   VAR_10 = 1;
   goto out;
  }
 }

out:
 FUNC_2(VAR_7, "ret %d", VAR_10);
 return VAR_10;
}
