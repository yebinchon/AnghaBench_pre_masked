
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {scalar_t__ token_id; scalar_t__ token_value; scalar_t__ cmd; scalar_t__ on; } ;
typedef TYPE_1__ mesh_light_ctl_t ;
typedef int mesh_addr_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

esp_err_t FUNC_3(mesh_addr_t *VAR_5, uint8_t *VAR_6, uint16_t VAR_7)
{
    mesh_light_ctl_t *VAR_8 = (mesh_light_ctl_t *) VAR_6;
    if (!VAR_5 || !VAR_6 || VAR_7 < sizeof(mesh_light_ctl_t)) {
        return VAR_0;
    }
    if (VAR_8->token_id != VAR_3 || VAR_8->token_value != VAR_4) {
        return VAR_0;
    }
    if (VAR_8->cmd == VAR_2) {
        if (VAR_8->on) {
            FUNC_1(FUNC_0());
        } else {
            FUNC_2(0);
        }
    }
    return VAR_1;
}
