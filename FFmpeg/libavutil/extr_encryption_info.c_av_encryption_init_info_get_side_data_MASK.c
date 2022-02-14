
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_5__ {int data; int * key_ids; int system_id; struct TYPE_5__* next; } ;
typedef TYPE_1__ AVEncryptionInitInfo ;


 scalar_t__ FUNC_0 (int const*) ;
 size_t VAR_0 ;
 TYPE_1__* FUNC_1 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int const*,scalar_t__) ;

AVEncryptionInitInfo *FUNC_4(
    const uint8_t *VAR_1, size_t VAR_2)
{

    AVEncryptionInitInfo *VAR_3 = ((void*)0), *VAR_4, *VAR_5;
    uint64_t VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    uint64_t VAR_12;

    if (!VAR_1 || VAR_2 < 4)
        return ((void*)0);

    VAR_12 = FUNC_0(VAR_1);
    VAR_1 += 4;
    VAR_2 -= 4;
    for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
        if (VAR_2 < VAR_0) {
            FUNC_2(VAR_3);
            return ((void*)0);
        }

        VAR_6 = FUNC_0(VAR_1);
        VAR_7 = FUNC_0(VAR_1 + 4);
        VAR_8 = FUNC_0(VAR_1 + 8);
        VAR_9 = FUNC_0(VAR_1 + 12);


        if (VAR_2 - VAR_0 < VAR_6 + VAR_9 + VAR_7 * VAR_8) {
            FUNC_2(VAR_3);
            return ((void*)0);
        }
        VAR_1 += VAR_0;
        VAR_2 -= VAR_0;

        VAR_5 = FUNC_1(VAR_6, VAR_7, VAR_8, VAR_9);
        if (!VAR_5) {
            FUNC_2(VAR_3);
            return ((void*)0);
        }
        if (VAR_10 == 0) {
            VAR_4 = VAR_3 = VAR_5;
        } else {
            VAR_4->next = VAR_5;
            VAR_4 = VAR_5;
        }

        FUNC_3(VAR_4->system_id, VAR_1, VAR_6);
        VAR_1 += VAR_6;
        VAR_2 -= VAR_6;
        for (VAR_11 = 0; VAR_11 < VAR_7; VAR_11++) {
            FUNC_3(VAR_4->key_ids[VAR_11], VAR_1, VAR_8);
            VAR_1 += VAR_8;
            VAR_2 -= VAR_8;
        }
        FUNC_3(VAR_4->data, VAR_1, VAR_9);
        VAR_1 += VAR_9;
        VAR_2 -= VAR_9;
    }

    return VAR_3;
}
