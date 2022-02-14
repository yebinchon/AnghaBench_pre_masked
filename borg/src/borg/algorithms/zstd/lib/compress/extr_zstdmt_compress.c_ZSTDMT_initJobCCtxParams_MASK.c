
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int jobParams ;
struct TYPE_5__ {int compressionLevel; int fParams; int cParams; } ;
typedef TYPE_1__ ZSTD_CCtx_params ;


 int FUNC_0 (TYPE_1__*,int ,int) ;

__attribute__((used)) static ZSTD_CCtx_params FUNC_1(ZSTD_CCtx_params const VAR_0)
{
    ZSTD_CCtx_params VAR_1;
    FUNC_0(&VAR_1, 0, sizeof(VAR_1));

    VAR_1.cParams = VAR_0.cParams;
    VAR_1.fParams = VAR_0.fParams;
    VAR_1.compressionLevel = VAR_0.compressionLevel;

    return VAR_1;
}
