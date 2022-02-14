
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sdmmc_desc_t ;
struct TYPE_5__ {int enable; int fb; } ;
struct TYPE_4__ {int dma_enable; int use_internal_dma; } ;
struct TYPE_6__ {size_t bytcnt; size_t blksiz; TYPE_2__ bmod; TYPE_1__ ctrl; int * dbaddr; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 () ;

void FUNC_1(sdmmc_desc_t* VAR_1, size_t VAR_2, size_t VAR_3)
{

    VAR_0.bytcnt = VAR_3;
    VAR_0.blksiz = VAR_2;
    VAR_0.dbaddr = VAR_1;


    VAR_0.ctrl.dma_enable = 1;
    VAR_0.ctrl.use_internal_dma = 1;
    VAR_0.bmod.enable = 1;
    VAR_0.bmod.fb = 1;
    FUNC_0();
}
