
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int fParams; int cParams; } ;
typedef TYPE_1__ ZSTD_parameters ;
struct TYPE_9__ {int fParams; int cParams; } ;
typedef TYPE_2__ ZSTD_CCtx_params ;
struct TYPE_10__ {TYPE_2__ params; } ;
typedef TYPE_3__ ZSTDMT_CCtx ;


 int FUNC_0 (int,char*,int) ;
 size_t FUNC_1 (TYPE_3__*,int *,int ,int ,int *,TYPE_2__,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ FUNC_2 (int,int ,int ) ;

size_t FUNC_3(ZSTDMT_CCtx* VAR_2, int VAR_3) {
    ZSTD_parameters const VAR_4 = FUNC_2(VAR_3, VAR_0, 0);
    ZSTD_CCtx_params VAR_5 = VAR_2->params;
    FUNC_0(4, "ZSTDMT_initCStream (cLevel=%i)", VAR_3);
    VAR_5.cParams = VAR_4.cParams;
    VAR_5.fParams = VAR_4.fParams;
    return FUNC_1(VAR_2, ((void*)0), 0, VAR_1, ((void*)0), VAR_5, VAR_0);
}
