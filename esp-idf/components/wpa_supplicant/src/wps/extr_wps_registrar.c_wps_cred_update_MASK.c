
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_credential {int key_len; int key; int key_idx; int encr_type; int auth_type; int ssid_len; int ssid; } ;


 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static void FUNC_1(struct wps_credential *VAR_0,
       struct wps_credential *VAR_1)
{
 FUNC_0(VAR_0->ssid, VAR_1->ssid, sizeof(VAR_0->ssid));
 VAR_0->ssid_len = VAR_1->ssid_len;
 VAR_0->auth_type = VAR_1->auth_type;
 VAR_0->encr_type = VAR_1->encr_type;
 VAR_0->key_idx = VAR_1->key_idx;
 FUNC_0(VAR_0->key, VAR_1->key, sizeof(VAR_0->key));
 VAR_0->key_len = VAR_1->key_len;
}
