
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {int attr_length; scalar_t__* attr_text; } ;
struct TYPE_5__ {TYPE_1__ meta_rsp; } ;
typedef TYPE_2__ esp_avrc_ct_cb_param_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,scalar_t__*,int) ;

void FUNC_2(esp_avrc_ct_cb_param_t *VAR_0)
{
    esp_avrc_ct_cb_param_t *VAR_1 = (esp_avrc_ct_cb_param_t *)(VAR_0);
    uint8_t *VAR_2 = (uint8_t *) FUNC_0 (VAR_1->meta_rsp.attr_length + 1);
    FUNC_1(VAR_2, VAR_1->meta_rsp.attr_text, VAR_1->meta_rsp.attr_length);
    VAR_2[VAR_1->meta_rsp.attr_length] = 0;

    VAR_1->meta_rsp.attr_text = VAR_2;
}
