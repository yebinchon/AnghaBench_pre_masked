
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {unsigned int hashlen; int keylen; int* key; int blocklen; int hash; int (* final ) (int ,int*) ;int (* update ) (int ,int*,unsigned int) ;int (* init ) (int ) ;} ;
typedef TYPE_1__ AVHMAC ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*,int) ;
 int FUNC_4 (int ,int*,unsigned int) ;
 int FUNC_5 (int ,int*) ;

int FUNC_6(AVHMAC *VAR_2, uint8_t *VAR_3, unsigned int VAR_4)
{
    uint8_t VAR_5[VAR_1];
    int VAR_6;
    if (VAR_4 < VAR_2->hashlen)
        return FUNC_0(VAR_0);
    VAR_2->final(VAR_2->hash, VAR_3);
    VAR_2->init(VAR_2->hash);
    for (VAR_6 = 0; VAR_6 < VAR_2->keylen; VAR_6++)
        VAR_5[VAR_6] = VAR_2->key[VAR_6] ^ 0x5C;
    for (VAR_6 = VAR_2->keylen; VAR_6 < VAR_2->blocklen; VAR_6++)
        VAR_5[VAR_6] = 0x5C;
    VAR_2->update(VAR_2->hash, VAR_5, VAR_2->blocklen);
    VAR_2->update(VAR_2->hash, VAR_3, VAR_2->hashlen);
    VAR_2->final(VAR_2->hash, VAR_3);
    return VAR_2->hashlen;
}
