
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {unsigned int blocklen; int* key; unsigned int keylen; unsigned int hashlen; int hash; int (* update ) (int ,int*,int) ;int (* init ) (int ) ;int (* final ) (int ,int*) ;} ;
typedef TYPE_1__ AVHMAC ;


 int VAR_0 ;
 int FUNC_0 (int*,int const*,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int const*,unsigned int) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int*,int) ;

void FUNC_6(AVHMAC *VAR_1, const uint8_t *VAR_2, unsigned int VAR_3)
{
    int VAR_4;
    uint8_t VAR_5[VAR_0];
    if (VAR_3 > VAR_1->blocklen) {
        VAR_1->init(VAR_1->hash);
        VAR_1->update(VAR_1->hash, VAR_2, VAR_3);
        VAR_1->final(VAR_1->hash, VAR_1->key);
        VAR_1->keylen = VAR_1->hashlen;
    } else {
        FUNC_0(VAR_1->key, VAR_2, VAR_3);
        VAR_1->keylen = VAR_3;
    }
    VAR_1->init(VAR_1->hash);
    for (VAR_4 = 0; VAR_4 < VAR_1->keylen; VAR_4++)
        VAR_5[VAR_4] = VAR_1->key[VAR_4] ^ 0x36;
    for (VAR_4 = VAR_1->keylen; VAR_4 < VAR_1->blocklen; VAR_4++)
        VAR_5[VAR_4] = 0x36;
    VAR_1->update(VAR_1->hash, VAR_5, VAR_1->blocklen);
}
