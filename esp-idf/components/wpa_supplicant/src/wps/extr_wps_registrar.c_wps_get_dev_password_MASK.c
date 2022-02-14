
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wps_data {size_t dev_password_len; int * dev_password; int peer_dev; int uuid_e; TYPE_2__* wps; TYPE_1__* nfc_pw_token; scalar_t__ pbc; } ;
struct TYPE_4__ {int registrar; } ;
struct TYPE_3__ {size_t dev_pw_len; int * dev_pw; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (size_t) ;
 int FUNC_2 (int *,int const*,size_t) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ,int *) ;
 int * FUNC_5 (int ,int ,size_t*) ;

__attribute__((used)) static int FUNC_6(struct wps_data *VAR_1)
{
 const u8 *VAR_2;
 size_t VAR_3 = 0;

 FUNC_0(VAR_1->dev_password);
 VAR_1->dev_password = ((void*)0);

 if (VAR_1->pbc) {
  FUNC_3(VAR_0, "WPS: Use default PIN for PBC");
  VAR_2 = (const u8 *) "00000000";
  VAR_3 = 8;







 } else {
 }

 VAR_1->dev_password = (u8 *)FUNC_1(VAR_3);
 if (VAR_1->dev_password == ((void*)0))
  return -1;
 FUNC_2(VAR_1->dev_password, VAR_2, VAR_3);
 VAR_1->dev_password_len = VAR_3;

 return 0;
}
