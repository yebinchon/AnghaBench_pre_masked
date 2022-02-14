
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ user_data; } ;
typedef TYPE_1__ spiffs ;
typedef int s32_t ;
struct TYPE_5__ {int partition; } ;
typedef TYPE_2__ esp_spiffs_t ;
typedef scalar_t__ esp_err_t ;


 int FUNC_0 (int ,char*,int ,int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;

s32_t FUNC_2(spiffs *VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
    esp_err_t VAR_4 = FUNC_1(((esp_spiffs_t *)(VAR_1->user_data))->partition,
                                        VAR_2, VAR_3);
    if (VAR_4) {
        FUNC_0(VAR_0, "failed to erase addr %08x, size %08x, err %d", VAR_2, VAR_3, VAR_4);
        return -1;
    }
    return 0;
}
