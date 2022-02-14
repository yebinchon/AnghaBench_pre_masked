
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t pos; size_t size; void* dst; } ;
typedef TYPE_1__ ZSTD_outBuffer ;
typedef int ZBUFF_CCtx ;


 size_t FUNC_0 (int *,TYPE_1__*) ;

size_t FUNC_1(ZBUFF_CCtx* VAR_0, void* VAR_1, size_t* VAR_2)
{
    size_t VAR_3;
    ZSTD_outBuffer VAR_4;
    VAR_4.dst = VAR_1;
    VAR_4.pos = 0;
    VAR_4.size = *VAR_2;
    VAR_3 = FUNC_0(VAR_0, &VAR_4);
    *VAR_2 = VAR_4.pos;
    return VAR_3;
}
