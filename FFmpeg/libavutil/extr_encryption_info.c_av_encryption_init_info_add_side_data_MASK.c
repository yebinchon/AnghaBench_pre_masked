
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint64_t ;
typedef size_t uint32_t ;
struct TYPE_3__ {size_t system_id_size; size_t data_size; size_t num_key_ids; size_t key_id_size; int data; int * key_ids; int system_id; struct TYPE_3__* next; } ;
typedef TYPE_1__ AVEncryptionInitInfo ;


 int FUNC_0 (int *,size_t) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *,int ,size_t) ;

uint8_t *FUNC_3(const AVEncryptionInitInfo *VAR_2, size_t *VAR_3)
{
    const AVEncryptionInitInfo *VAR_4;
    uint8_t *VAR_5, *VAR_6;
    uint32_t VAR_7, VAR_8;
    uint64_t VAR_9;

    VAR_9 = 4;
    VAR_8 = 0;
    for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next) {
        VAR_9 += (uint64_t)VAR_0 + VAR_4->system_id_size + VAR_4->data_size;
        if (VAR_8 == VAR_1 || VAR_9 > VAR_1) {
            return ((void*)0);
        }
        VAR_8++;

        if (VAR_4->num_key_ids) {
            VAR_9 += (uint64_t)VAR_4->num_key_ids * VAR_4->key_id_size;
            if (VAR_9 > VAR_1) {
                return ((void*)0);
            }
        }
    }
    *VAR_3 = VAR_9;

    VAR_6 = VAR_5 = FUNC_1(*VAR_3);
    if (!VAR_5)
        return ((void*)0);

    FUNC_0(VAR_6, VAR_8);
    VAR_6 += 4;
    for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->next) {
        FUNC_0(VAR_6, VAR_4->system_id_size);
        FUNC_0(VAR_6 + 4, VAR_4->num_key_ids);
        FUNC_0(VAR_6 + 8, VAR_4->key_id_size);
        FUNC_0(VAR_6 + 12, VAR_4->data_size);
        VAR_6 += 16;

        FUNC_2(VAR_6, VAR_4->system_id, VAR_4->system_id_size);
        VAR_6 += VAR_4->system_id_size;
        for (VAR_7 = 0; VAR_7 < VAR_4->num_key_ids; VAR_7++) {
            FUNC_2(VAR_6, VAR_4->key_ids[VAR_7], VAR_4->key_id_size);
            VAR_6 += VAR_4->key_id_size;
        }
        if (VAR_4->data_size > 0) {
            FUNC_2(VAR_6, VAR_4->data, VAR_4->data_size);
            VAR_6 += VAR_4->data_size;
        }
    }

    return VAR_5;
}
