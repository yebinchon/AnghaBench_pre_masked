
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void* hmac_update ;
typedef int hmac_init ;
typedef void* hmac_final ;
typedef enum AVHMACType { ____Placeholder_AVHMACType } AVHMACType ;
struct TYPE_5__ {int blocklen; int hashlen; void* hash; void* final; void* update; int init; } ;
typedef TYPE_1__ AVHMAC ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 void* FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_4 () ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

AVHMAC *FUNC_5(enum AVHMACType VAR_12)
{
    AVHMAC *VAR_13 = FUNC_1(sizeof(*VAR_13));
    if (!VAR_13)
        return ((void*)0);
    switch (VAR_12) {
    case 133:
        VAR_13->blocklen = 64;
        VAR_13->hashlen = 16;
        VAR_13->init = (hmac_init) VAR_1;
        VAR_13->update = (hmac_update) VAR_2;
        VAR_13->final = (hmac_final) VAR_0;
        VAR_13->hash = FUNC_2();
        break;
    case 132:
        VAR_13->blocklen = 64;
        VAR_13->hashlen = 20;
        VAR_13->init = VAR_7;
        VAR_13->update = (hmac_update) VAR_6;
        VAR_13->final = (hmac_final) VAR_5;
        VAR_13->hash = FUNC_4();
        break;
    case 131:
        VAR_13->blocklen = 64;
        VAR_13->hashlen = 28;
        VAR_13->init = VAR_8;
        VAR_13->update = (hmac_update) VAR_6;
        VAR_13->final = (hmac_final) VAR_5;
        VAR_13->hash = FUNC_4();
        break;
    case 130:
        VAR_13->blocklen = 64;
        VAR_13->hashlen = 32;
        VAR_13->init = VAR_9;
        VAR_13->update = (hmac_update) VAR_6;
        VAR_13->final = (hmac_final) VAR_5;
        VAR_13->hash = FUNC_4();
        break;
    case 129:
        VAR_13->blocklen = 128;
        VAR_13->hashlen = 48;
        VAR_13->init = VAR_10;
        VAR_13->update = (hmac_update) VAR_4;
        VAR_13->final = (hmac_final) VAR_3;
        VAR_13->hash = FUNC_3();
        break;
    case 128:
        VAR_13->blocklen = 128;
        VAR_13->hashlen = 64;
        VAR_13->init = VAR_11;
        VAR_13->update = (hmac_update) VAR_4;
        VAR_13->final = (hmac_final) VAR_3;
        VAR_13->hash = FUNC_3();
        break;
    default:
        FUNC_0(VAR_13);
        return ((void*)0);
    }
    if (!VAR_13->hash) {
        FUNC_0(VAR_13);
        return ((void*)0);
    }
    return VAR_13;
}
