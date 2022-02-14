
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hostapd_wep_keys {scalar_t__ idx; scalar_t__ default_len; scalar_t__* len; int * key; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

int FUNC_1(struct hostapd_wep_keys *VAR_1, struct hostapd_wep_keys *VAR_2)
{
    int VAR_3;

    if (VAR_1->idx != VAR_2->idx || VAR_1->default_len != VAR_2->default_len)
        return 1;
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
        if (VAR_1->len[VAR_3] != VAR_2->len[VAR_3] ||
         FUNC_0(VAR_1->key[VAR_3], VAR_2->key[VAR_3], VAR_1->len[VAR_3]) != 0)
            return 1;
    return 0;
}
