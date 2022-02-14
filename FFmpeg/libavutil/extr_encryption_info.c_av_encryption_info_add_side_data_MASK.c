
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_5__ {int key_id_size; int iv_size; int subsample_count; int scheme; int crypt_byte_block; int skip_byte_block; TYPE_1__* subsamples; int iv; int key_id; } ;
struct TYPE_4__ {int bytes_of_clear_data; int bytes_of_protected_data; } ;
typedef TYPE_2__ AVEncryptionInfo ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (size_t) ;
 int FUNC_2 (int *,int ,int) ;

uint8_t *FUNC_3(const AVEncryptionInfo *VAR_2, size_t *VAR_3)
{
    uint8_t *VAR_4, *VAR_5;
    uint32_t VAR_6;

    if (VAR_1 - VAR_0 < VAR_2->key_id_size ||
        VAR_1 - VAR_0 - VAR_2->key_id_size < VAR_2->iv_size ||
        (VAR_1 - VAR_0 - VAR_2->key_id_size - VAR_2->iv_size) / 8 < VAR_2->subsample_count) {
        return ((void*)0);
    }

    *VAR_3 = VAR_0 + VAR_2->key_id_size + VAR_2->iv_size +
            (VAR_2->subsample_count * 8);
    VAR_5 = VAR_4 = FUNC_1(*VAR_3);
    if (!VAR_4)
        return ((void*)0);

    FUNC_0(VAR_5, VAR_2->scheme);
    FUNC_0(VAR_5 + 4, VAR_2->crypt_byte_block);
    FUNC_0(VAR_5 + 8, VAR_2->skip_byte_block);
    FUNC_0(VAR_5 + 12, VAR_2->key_id_size);
    FUNC_0(VAR_5 + 16, VAR_2->iv_size);
    FUNC_0(VAR_5 + 20, VAR_2->subsample_count);
    VAR_5 += 24;
    FUNC_2(VAR_5, VAR_2->key_id, VAR_2->key_id_size);
    VAR_5 += VAR_2->key_id_size;
    FUNC_2(VAR_5, VAR_2->iv, VAR_2->iv_size);
    VAR_5 += VAR_2->iv_size;
    for (VAR_6 = 0; VAR_6 < VAR_2->subsample_count; VAR_6++) {
        FUNC_0(VAR_5, VAR_2->subsamples[VAR_6].bytes_of_clear_data);
        FUNC_0(VAR_5 + 4, VAR_2->subsamples[VAR_6].bytes_of_protected_data);
        VAR_5 += 8;
    }

    return VAR_4;
}
