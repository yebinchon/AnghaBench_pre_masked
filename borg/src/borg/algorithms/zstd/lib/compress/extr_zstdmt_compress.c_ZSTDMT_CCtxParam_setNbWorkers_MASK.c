
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int nbWorkers; scalar_t__ jobSize; int overlapLog; } ;
typedef TYPE_1__ ZSTD_CCtx_params ;


 unsigned int VAR_0 ;
 int VAR_1 ;

size_t FUNC_0(ZSTD_CCtx_params* VAR_2, unsigned VAR_3)
{
    if (VAR_3 > VAR_0) VAR_3 = VAR_0;
    VAR_2->nbWorkers = VAR_3;
    VAR_2->overlapLog = VAR_1;
    VAR_2->jobSize = 0;
    return VAR_3;
}
