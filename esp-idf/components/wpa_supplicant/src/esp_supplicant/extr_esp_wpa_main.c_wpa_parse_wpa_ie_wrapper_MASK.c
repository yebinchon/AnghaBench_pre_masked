
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* mgmt_group_cipher; int pmkid; int capabilities; int key_mgmt; void* group_cipher; void* pairwise_cipher; int proto; } ;
typedef TYPE_1__ wifi_wpa_ie_t ;
typedef int u8 ;
struct wpa_ie_data {int mgmt_group_cipher; int pmkid; int capabilities; int key_mgmt; int group_cipher; int pairwise_cipher; int proto; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (int const*,size_t,struct wpa_ie_data*) ;

int FUNC_2(const u8 *VAR_0, size_t VAR_1, wifi_wpa_ie_t *VAR_2)
{
    struct wpa_ie_data VAR_3;
    int VAR_4 = 0;

    VAR_4 = FUNC_1(VAR_0, VAR_1, &VAR_3);
    VAR_2->proto = VAR_3.proto;
    VAR_2->pairwise_cipher = FUNC_0(VAR_3.pairwise_cipher);
    VAR_2->group_cipher = FUNC_0(VAR_3.group_cipher);
    VAR_2->key_mgmt = VAR_3.key_mgmt;
    VAR_2->capabilities = VAR_3.capabilities;
    VAR_2->pmkid = VAR_3.pmkid;
    VAR_2->mgmt_group_cipher = FUNC_0(VAR_3.mgmt_group_cipher);

    return VAR_4;
}
