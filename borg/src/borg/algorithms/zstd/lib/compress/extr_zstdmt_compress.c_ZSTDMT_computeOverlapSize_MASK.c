
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int const windowLog; int strategy; } ;
struct TYPE_6__ {scalar_t__ enableLdm; } ;
struct TYPE_8__ {int overlapLog; TYPE_2__ cParams; TYPE_1__ ldmParams; } ;
typedef TYPE_3__ ZSTD_CCtx_params ;


 int FUNC_0 (int,char*,int) ;
 int const FUNC_1 (int const,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_3__ const) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static size_t FUNC_5(ZSTD_CCtx_params const VAR_0)
{
    int const VAR_1 = 9 - FUNC_3(VAR_0.overlapLog, VAR_0.cParams.strategy);
    int VAR_2 = (VAR_1 >= 8) ? 0 : (VAR_0.cParams.windowLog - VAR_1);
    FUNC_4(0 <= VAR_1 && VAR_1 <= 8);
    if (VAR_0.ldmParams.enableLdm) {




        VAR_2 = FUNC_1(VAR_0.cParams.windowLog, FUNC_2(VAR_0) - 2)
                - VAR_1;
    }
    FUNC_4(0 <= VAR_2 && VAR_2 <= 30);
    FUNC_0(4, "overlapLog : %i", VAR_0.overlapLog);
    FUNC_0(4, "overlap size : %i", 1 << VAR_2);
    return (VAR_2==0) ? 0 : (size_t)1 << VAR_2;
}
