
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8_t ;
typedef scalar_t__ u16_t ;
struct bt_mesh_model {TYPE_1__* pub; } ;
typedef scalar_t__ s32_t ;
struct TYPE_2__ {scalar_t__ addr; unsigned int key; unsigned int cred; unsigned int ttl; unsigned int period; unsigned int retransmit; unsigned int count; int timer; scalar_t__ update; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct bt_mesh_model*) ;
 int FUNC_4 (struct bt_mesh_model*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__) ;

__attribute__((used)) static u8_t FUNC_7(struct bt_mesh_model *VAR_7, u16_t VAR_8,
                         u16_t VAR_9, u8_t VAR_10, u8_t VAR_11, u8_t VAR_12,
                         u8_t VAR_13, bool VAR_14)
{
    if (!VAR_7->pub) {
        return VAR_5;
    }

    if (!FUNC_1(VAR_1) && VAR_10) {
        return VAR_3;
    }

    if (!VAR_7->pub->update && VAR_12) {
        return VAR_5;
    }

    if (VAR_8 == VAR_0) {
        if (VAR_7->pub->addr == VAR_0) {
            return VAR_6;
        }

        VAR_7->pub->addr = VAR_0;
        VAR_7->pub->key = 0U;
        VAR_7->pub->cred = 0U;
        VAR_7->pub->ttl = 0U;
        VAR_7->pub->period = 0U;
        VAR_7->pub->retransmit = 0U;
        VAR_7->pub->count = 0U;

        if (VAR_7->pub->update) {
            FUNC_5(&VAR_7->pub->timer);
        }

        if (FUNC_1(VAR_2) && VAR_14) {
            FUNC_4(VAR_7);
        }

        return VAR_6;
    }

    if (!FUNC_2(VAR_9)) {
        return VAR_4;
    }

    VAR_7->pub->addr = VAR_8;
    VAR_7->pub->key = VAR_9;
    VAR_7->pub->cred = VAR_10;
    VAR_7->pub->ttl = VAR_11;
    VAR_7->pub->period = VAR_12;
    VAR_7->pub->retransmit = VAR_13;

    if (VAR_7->pub->update) {
        s32_t VAR_15;

        VAR_15 = FUNC_3(VAR_7);
        FUNC_0("period %u ms", VAR_15);

        if (VAR_15) {
            FUNC_6(&VAR_7->pub->timer, VAR_15);
        } else {
            FUNC_5(&VAR_7->pub->timer);
        }
    }

    if (FUNC_1(VAR_2) && VAR_14) {
        FUNC_4(VAR_7);
    }

    return VAR_6;
}
