
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint64_t ;
struct TYPE_6__ {TYPE_1__* subsamples; int iv; int key_id; void* skip_byte_block; void* crypt_byte_block; void* scheme; } ;
struct TYPE_5__ {void* bytes_of_protected_data; void* bytes_of_clear_data; } ;
typedef TYPE_2__ AVEncryptionInfo ;


 void* FUNC_0 (int const*) ;
 size_t VAR_0 ;
 TYPE_2__* FUNC_1 (size_t,size_t,size_t) ;
 int FUNC_2 (int ,int const*,size_t) ;

AVEncryptionInfo *FUNC_3(const uint8_t* VAR_1, size_t VAR_2)
{
    AVEncryptionInfo *VAR_3;
    uint64_t VAR_4, VAR_5, VAR_6, VAR_7;

    if (!VAR_1 || VAR_2 < VAR_0)
        return ((void*)0);

    VAR_4 = FUNC_0(VAR_1 + 12);
    VAR_5 = FUNC_0(VAR_1 + 16);
    VAR_6 = FUNC_0(VAR_1 + 20);

    if (VAR_2 < VAR_0 + VAR_4 + VAR_5 + VAR_6 * 8)
        return ((void*)0);

    VAR_3 = FUNC_1(VAR_6, VAR_4, VAR_5);
    if (!VAR_3)
        return ((void*)0);

    VAR_3->scheme = FUNC_0(VAR_1);
    VAR_3->crypt_byte_block = FUNC_0(VAR_1 + 4);
    VAR_3->skip_byte_block = FUNC_0(VAR_1 + 8);
    FUNC_2(VAR_3->key_id, VAR_1 + 24, VAR_4);
    FUNC_2(VAR_3->iv, VAR_1 + VAR_4 + 24, VAR_5);

    VAR_1 += VAR_4 + VAR_5 + 24;
    for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
        VAR_3->subsamples[VAR_7].bytes_of_clear_data = FUNC_0(VAR_1);
        VAR_3->subsamples[VAR_7].bytes_of_protected_data = FUNC_0(VAR_1 + 4);
        VAR_1 += 8;
    }

    return VAR_3;
}
