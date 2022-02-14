
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_cParameter ;
struct TYPE_3__ {scalar_t__ streamStage; int cParamsChanged; int requestedParams; int cdict; int staticSize; } ;
typedef TYPE_1__ ZSTD_CCtx ;


 int FUNC_0 (int,char*,int,int) ;
 size_t FUNC_1 (int ) ;
 size_t FUNC_2 (int *,int,int) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

size_t FUNC_4(ZSTD_CCtx* VAR_3, ZSTD_cParameter VAR_4, int VAR_5)
{
    FUNC_0(4, "ZSTD_CCtx_setParameter (%i, %i)", (int)VAR_4, VAR_5);
    if (VAR_3->streamStage != VAR_2) {
        if (FUNC_3(VAR_4)) {
            VAR_3->cParamsChanged = 1;
        } else {
            return FUNC_1(VAR_1);
    } }

    switch(VAR_4)
    {
    case 142 :
        return FUNC_2(&VAR_3->requestedParams, VAR_4, VAR_5);

    case 148:
        if (VAR_3->cdict) return FUNC_1(VAR_1);
        return FUNC_2(&VAR_3->requestedParams, VAR_4, VAR_5);

    case 128:
    case 141:
    case 150:
    case 131:
    case 135:
    case 129:
    case 130:
        if (VAR_3->cdict) return FUNC_1(VAR_1);
        return FUNC_2(&VAR_3->requestedParams, VAR_4, VAR_5);

    case 147:
    case 149:
    case 146:
        return FUNC_2(&VAR_3->requestedParams, VAR_4, VAR_5);

    case 143 :


        return FUNC_2(&VAR_3->requestedParams, VAR_4, VAR_5);

    case 144:
        return FUNC_2(&VAR_3->requestedParams, VAR_4, VAR_5);

    case 134:
        if ((VAR_5!=0) && VAR_3->staticSize) {
            return FUNC_1(VAR_0);
        }
        return FUNC_2(&VAR_3->requestedParams, VAR_4, VAR_5);

    case 140:
    case 133:
    case 132:
        return FUNC_2(&VAR_3->requestedParams, VAR_4, VAR_5);

    case 145:
    case 138:
    case 136:
    case 139:
    case 137:
        if (VAR_3->cdict) return FUNC_1(VAR_1);
        return FUNC_2(&VAR_3->requestedParams, VAR_4, VAR_5);

    default: return FUNC_1(VAR_0);
    }
}
