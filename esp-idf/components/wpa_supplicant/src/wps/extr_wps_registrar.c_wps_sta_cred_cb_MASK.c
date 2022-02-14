
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int auth_type; int encr_type; } ;
struct wps_data {TYPE_2__ cred; TYPE_1__* wps; } ;
struct TYPE_3__ {int cb_ctx; int (* cred_cb ) (int ,TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct wps_data *VAR_5)
{





 if (VAR_5->cred.auth_type & VAR_1)
  VAR_5->cred.auth_type = VAR_1;
 else if (VAR_5->cred.auth_type & VAR_2)
  VAR_5->cred.auth_type = VAR_2;
 if (VAR_5->cred.encr_type & VAR_3)
  VAR_5->cred.encr_type = VAR_3;
 else if (VAR_5->cred.encr_type & VAR_4)
  VAR_5->cred.encr_type = VAR_4;
 FUNC_1(VAR_0, "WPS: Update local configuration based on the "
     "AP configuration");
 if (VAR_5->wps->cred_cb)
  VAR_5->wps->cred_cb(VAR_5->wps->cb_ctx, &VAR_5->cred);
}
