
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t pos; size_t size; void* dst; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
struct TYPE_6__ {size_t pos; size_t size; void const* src; } ;
typedef TYPE_2__ ZSTD_inBuffer ;
typedef int ZBUFF_DCtx ;


 size_t FUNC_0 (int *,TYPE_1__*,TYPE_2__*) ;

size_t FUNC_1(ZBUFF_DCtx* VAR_0,
                                void* VAR_1, size_t* VAR_2,
                          const void* VAR_3, size_t* VAR_4)
{
    ZSTD_outBuffer VAR_5;
    ZSTD_inBuffer VAR_6;
    size_t VAR_7;
    VAR_5.dst = VAR_1;
    VAR_5.pos = 0;
    VAR_5.size = *VAR_2;
    VAR_6.src = VAR_3;
    VAR_6.pos = 0;
    VAR_6.size = *VAR_4;
    VAR_7 = FUNC_0(VAR_0, &VAR_5, &VAR_6);
    *VAR_2 = VAR_5.pos;
    *VAR_4 = VAR_6.pos;
    return VAR_7;
}
