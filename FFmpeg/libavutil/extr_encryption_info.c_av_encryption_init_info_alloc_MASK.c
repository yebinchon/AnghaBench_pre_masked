
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {size_t system_id_size; size_t num_key_ids; size_t key_id_size; size_t data_size; void** key_ids; void* data; void* system_id; } ;
typedef TYPE_1__ AVEncryptionInitInfo ;


 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (size_t) ;
 void** FUNC_2 (size_t,int) ;

AVEncryptionInitInfo *FUNC_3(
    uint32_t VAR_0, uint32_t VAR_1, uint32_t VAR_2, uint32_t VAR_3)
{
    AVEncryptionInitInfo *VAR_4;
    uint32_t VAR_5;

    VAR_4 = FUNC_1(sizeof(*VAR_4));
    if (!VAR_4)
        return ((void*)0);

    VAR_4->system_id = FUNC_1(VAR_0);
    VAR_4->system_id_size = VAR_0;
    VAR_4->key_ids = VAR_2 ? FUNC_2(VAR_1, sizeof(*VAR_4->key_ids)) : ((void*)0);
    VAR_4->num_key_ids = VAR_1;
    VAR_4->key_id_size = VAR_2;
    VAR_4->data = FUNC_1(VAR_3);
    VAR_4->data_size = VAR_3;


    if ((!VAR_4->system_id && VAR_0) || (!VAR_4->data && VAR_3) ||
        (!VAR_4->key_ids && VAR_1 && VAR_2)) {
        FUNC_0(VAR_4);
        return ((void*)0);
    }

    if (VAR_2) {
        for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
            VAR_4->key_ids[VAR_5] = FUNC_1(VAR_2);
            if (!VAR_4->key_ids[VAR_5]) {
                FUNC_0(VAR_4);
                return ((void*)0);
            }
        }
    }

    return VAR_4;
}
