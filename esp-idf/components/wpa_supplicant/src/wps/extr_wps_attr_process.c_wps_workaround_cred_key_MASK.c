
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_credential {int auth_type; int key_len; scalar_t__* key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__*,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct wps_credential *VAR_4)
{
 if (VAR_4->auth_type & (VAR_3 | VAR_2) &&
     VAR_4->key_len > 8 && VAR_4->key_len < 64 &&
     VAR_4->key[VAR_4->key_len - 1] == 0) {
  FUNC_1(VAR_0, "WPS: Workaround - remove NULL "
      "termination from ASCII passphrase");
  VAR_4->key_len--;

 }
 return 0;
}
