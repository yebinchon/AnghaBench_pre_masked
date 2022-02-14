
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wps_registrar {TYPE_1__* wps; } ;
struct wps_credential {int encr_type; int auth_type; } ;
struct TYPE_2__ {int (* cred_cb ) (int ,struct wps_credential*) ;int cb_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,struct wps_credential*) ;
 int FUNC_1 (int ,char*,...) ;

int FUNC_2(struct wps_registrar *VAR_8,
       struct wps_credential *VAR_9)
{
 if (VAR_8->wps->cred_cb)
  return VAR_8->wps->cred_cb(VAR_8->wps->cb_ctx, VAR_9);

 return -1;
}
