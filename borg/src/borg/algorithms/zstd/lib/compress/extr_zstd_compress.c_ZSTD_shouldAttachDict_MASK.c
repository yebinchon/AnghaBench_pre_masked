
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t strategy; } ;
struct TYPE_8__ {TYPE_1__ cParams; } ;
struct TYPE_9__ {TYPE_2__ matchState; } ;
typedef TYPE_3__ ZSTD_CDict ;
struct TYPE_10__ {scalar_t__ attachDictPref; int forceWindow; } ;
typedef TYPE_4__ ZSTD_CCtx_params ;
typedef size_t U64 ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t* VAR_3 ;

__attribute__((used)) static int FUNC_0(const ZSTD_CDict* VAR_4,
                                 ZSTD_CCtx_params VAR_5,
                                 U64 VAR_6)
{
    size_t VAR_7 = VAR_3[VAR_4->matchState.cParams.strategy];
    return ( VAR_6 <= VAR_7
          || VAR_6 == VAR_0
          || VAR_5.attachDictPref == VAR_1 )
        && VAR_5.attachDictPref != VAR_2
        && !VAR_5.forceWindow;

}
