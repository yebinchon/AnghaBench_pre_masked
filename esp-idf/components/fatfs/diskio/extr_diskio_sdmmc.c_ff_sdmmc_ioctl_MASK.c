
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sector_size; int capacity; } ;
struct TYPE_6__ {TYPE_1__ csd; } ;
typedef TYPE_2__ sdmmc_card_t ;
typedef int WORD ;
typedef int DWORD ;
typedef int DRESULT ;
typedef size_t BYTE ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__** VAR_2 ;

DRESULT FUNC_1 (BYTE VAR_3, BYTE VAR_4, void* VAR_5)
{
    sdmmc_card_t* VAR_6 = VAR_2[VAR_3];
    FUNC_0(VAR_6);
    switch(VAR_4) {
        case 131:
            return VAR_1;
        case 129:
            *((DWORD*) VAR_5) = VAR_6->csd.capacity;
            return VAR_1;
        case 128:
            *((WORD*) VAR_5) = VAR_6->csd.sector_size;
            return VAR_1;
        case 130:
            return VAR_0;
    }
    return VAR_0;
}
