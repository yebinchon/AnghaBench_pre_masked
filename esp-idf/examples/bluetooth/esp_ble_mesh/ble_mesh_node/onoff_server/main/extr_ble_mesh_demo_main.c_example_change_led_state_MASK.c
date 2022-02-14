
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ uint16_t ;
struct _led_state {int pin; } ;
struct TYPE_8__ {scalar_t__ recv_dst; } ;
typedef TYPE_2__ esp_ble_mesh_msg_ctx_t ;
struct TYPE_9__ {TYPE_1__* element; } ;
typedef TYPE_3__ esp_ble_mesh_model_t ;
struct TYPE_7__ {scalar_t__ element_addr; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,size_t) ;
 size_t FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (TYPE_3__*,scalar_t__) ;
 struct _led_state* VAR_0 ;

__attribute__((used)) static void FUNC_6(esp_ble_mesh_model_t *VAR_1,
                                     esp_ble_mesh_msg_ctx_t *VAR_2, uint8_t VAR_3)
{
    uint16_t VAR_4 = FUNC_4();
    uint8_t VAR_5 = FUNC_3();
    struct _led_state *VAR_6 = ((void*)0);
    uint8_t VAR_7;

    if (FUNC_1(VAR_2->recv_dst)) {
        for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
            if (VAR_2->recv_dst == (VAR_4 + VAR_7)) {
                VAR_6 = &VAR_0[VAR_7];
                FUNC_2(VAR_6->pin, VAR_3);
            }
        }
    } else if (FUNC_0(VAR_2->recv_dst)) {
        if (FUNC_5(VAR_1, VAR_2->recv_dst)) {
            VAR_6 = &VAR_0[VAR_1->element->element_addr - VAR_4];
            FUNC_2(VAR_6->pin, VAR_3);
        }
    } else if (VAR_2->recv_dst == 0xFFFF) {
        VAR_6 = &VAR_0[VAR_1->element->element_addr - VAR_4];
        FUNC_2(VAR_6->pin, VAR_3);
    }
}
