
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ota_seq; scalar_t__ crc; scalar_t__ ota_state; } ;
typedef TYPE_1__ esp_ota_select_entry_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__ const*) ;

__attribute__((used)) static bool FUNC_1 (const esp_ota_select_entry_t *VAR_3) {
    return VAR_3->ota_seq != VAR_2 &&
           VAR_3->crc == FUNC_0(VAR_3) &&
           (VAR_3->ota_state == VAR_1 ||
            VAR_3->ota_state == VAR_0);
}
