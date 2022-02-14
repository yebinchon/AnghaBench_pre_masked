
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dictID; scalar_t__ checksumFlag; } ;
struct TYPE_4__ {scalar_t__ dictID; int xxhState; TYPE_2__ fParams; int format; } ;
typedef TYPE_1__ ZSTD_DCtx ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 size_t FUNC_2 (TYPE_2__*,void const*,size_t,int ) ;
 scalar_t__ FUNC_3 (size_t const) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static size_t FUNC_4(ZSTD_DCtx* VAR_2, const void* VAR_3, size_t VAR_4)
{
    size_t const VAR_5 = FUNC_2(&(VAR_2->fParams), VAR_3, VAR_4, VAR_2->format);
    if (FUNC_3(VAR_5)) return VAR_5;
    if (VAR_5>0) return FUNC_0(VAR_1);
    if (VAR_2->fParams.dictID && (VAR_2->dictID != VAR_2->fParams.dictID))
        return FUNC_0(VAR_0);
    if (VAR_2->fParams.checksumFlag) FUNC_1(&VAR_2->xxhState, 0);
    return 0;
}
