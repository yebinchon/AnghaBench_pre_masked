
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ windowLog; scalar_t__ chainLog; } ;
struct TYPE_5__ {scalar_t__ enableLdm; } ;
struct TYPE_7__ {TYPE_2__ cParams; TYPE_1__ ldmParams; } ;
typedef TYPE_3__ ZSTD_CCtx_params ;


 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static unsigned FUNC_1(ZSTD_CCtx_params const VAR_0)
{
    if (VAR_0.ldmParams.enableLdm)



        return FUNC_0(21, VAR_0.cParams.chainLog + 4);
    return FUNC_0(20, VAR_0.cParams.windowLog + 2);
}
