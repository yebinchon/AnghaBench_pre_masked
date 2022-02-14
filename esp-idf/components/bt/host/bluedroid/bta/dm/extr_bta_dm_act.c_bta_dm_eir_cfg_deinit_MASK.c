
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * bta_dm_eir_url; scalar_t__ bta_dm_eir_url_len; int * bta_dm_eir_manufac_spec; scalar_t__ bta_dm_eir_manufac_spec_len; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
    VAR_0->bta_dm_eir_manufac_spec_len = 0;
    if (VAR_0->bta_dm_eir_manufac_spec) {
        FUNC_0(VAR_0->bta_dm_eir_manufac_spec);
        VAR_0->bta_dm_eir_manufac_spec = ((void*)0);
    }

    VAR_0->bta_dm_eir_url_len = 0;
    if (VAR_0->bta_dm_eir_url) {
        FUNC_0(VAR_0->bta_dm_eir_url);
        VAR_0->bta_dm_eir_url = ((void*)0);
    }
}
