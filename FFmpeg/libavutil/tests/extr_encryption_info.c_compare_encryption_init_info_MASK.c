
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_4__ {scalar_t__ system_id_size; scalar_t__ num_key_ids; scalar_t__ key_id_size; scalar_t__ data_size; struct TYPE_4__* next; int * key_ids; int data; int system_id; } ;
typedef TYPE_1__ AVEncryptionInitInfo ;


 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(const AVEncryptionInitInfo *VAR_0, const AVEncryptionInitInfo *VAR_1) {
    if (!VAR_0 || !VAR_1 || VAR_0->system_id_size != VAR_1->system_id_size ||
        VAR_0->num_key_ids != VAR_1->num_key_ids || VAR_0->key_id_size != VAR_1->key_id_size ||
        VAR_0->data_size != VAR_1->data_size)
        return 1;

    if (FUNC_0(VAR_0->system_id, VAR_1->system_id, VAR_0->system_id_size) != 0 ||
        FUNC_0(VAR_0->data, VAR_1->data, VAR_0->data_size) != 0)
        return 1;

    for (uint32_t VAR_2 = 0; VAR_2 < VAR_0->num_key_ids; VAR_2++) {
        if (FUNC_0(VAR_0->key_ids[VAR_2], VAR_1->key_ids[VAR_2], VAR_0->key_id_size) != 0)
            return 1;
    }

    if (VAR_0->next || VAR_1->next) {
        if (!VAR_0->next || !VAR_1->next)
            return 1;
        if (FUNC_1(VAR_0->next, VAR_1->next) != 0)
            return 1;
    }

    return 0;
}
