
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ZSTD_strategy ;
typedef int ZSTD_format_e ;
typedef int ZSTD_dictAttachPref_e ;
typedef int ZSTD_cParameter ;
struct TYPE_10__ {int enableLdm; int hashLog; int minMatchLength; int bucketSizeLog; int hashRateLog; } ;
struct TYPE_9__ {int contentSizeFlag; int checksumFlag; int noDictIDFlag; } ;
struct TYPE_8__ {int windowLog; int hashLog; int chainLog; int searchLog; int minMatch; int targetLength; int strategy; } ;
struct TYPE_11__ {int compressionLevel; int forceWindow; int attachDictPref; TYPE_3__ ldmParams; TYPE_2__ fParams; TYPE_1__ cParams; int format; } ;
typedef TYPE_4__ ZSTD_CCtx_params ;


 int FUNC_0 (int const,int const) ;
 int FUNC_1 (int,char*,int,...) ;
 size_t FUNC_2 (int ) ;
 size_t FUNC_3 (TYPE_4__*,int ,int) ;
 size_t FUNC_4 (TYPE_4__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_5 ;
 int VAR_6 ;

size_t FUNC_7(ZSTD_CCtx_params* VAR_7,
                                   ZSTD_cParameter VAR_8, int VAR_9)
{
    FUNC_1(4, "ZSTD_CCtxParam_setParameter (%i, %i)", (int)VAR_8, VAR_9);
    switch(VAR_8)
    {
    case 142 :
        FUNC_0(142, VAR_9);
        VAR_7->format = (ZSTD_format_e)VAR_9;
        return (size_t)VAR_7->format;

    case 148 : {
        int VAR_10 = VAR_9;
        if (VAR_10 > FUNC_5()) VAR_10 = FUNC_5();
        if (VAR_10 < FUNC_6()) VAR_10 = FUNC_6();
        if (VAR_10) {
            VAR_7->compressionLevel = VAR_10;
        }
        if (VAR_7->compressionLevel >= 0) return VAR_7->compressionLevel;
        return 0;
    }

    case 128 :
        if (VAR_9!=0)
            FUNC_0(128, VAR_9);
        VAR_7->cParams.windowLog = VAR_9;
        return VAR_7->cParams.windowLog;

    case 141 :
        if (VAR_9!=0)
            FUNC_0(141, VAR_9);
        VAR_7->cParams.hashLog = VAR_9;
        return VAR_7->cParams.hashLog;

    case 150 :
        if (VAR_9!=0)
            FUNC_0(150, VAR_9);
        VAR_7->cParams.chainLog = VAR_9;
        return VAR_7->cParams.chainLog;

    case 131 :
        if (VAR_9!=0)
            FUNC_0(131, VAR_9);
        VAR_7->cParams.searchLog = VAR_9;
        return VAR_9;

    case 135 :
        if (VAR_9!=0)
            FUNC_0(135, VAR_9);
        VAR_7->cParams.minMatch = VAR_9;
        return VAR_7->cParams.minMatch;

    case 129 :
        FUNC_0(129, VAR_9);
        VAR_7->cParams.targetLength = VAR_9;
        return VAR_7->cParams.targetLength;

    case 130 :
        if (VAR_9!=0)
            FUNC_0(130, VAR_9);
        VAR_7->cParams.strategy = (ZSTD_strategy)VAR_9;
        return (size_t)VAR_7->cParams.strategy;

    case 147 :

        FUNC_1(4, "set content size flag = %u", (VAR_9!=0));
        VAR_7->fParams.contentSizeFlag = VAR_9 != 0;
        return VAR_7->fParams.contentSizeFlag;

    case 149 :

        VAR_7->fParams.checksumFlag = VAR_9 != 0;
        return VAR_7->fParams.checksumFlag;

    case 146 :
        FUNC_1(4, "set dictIDFlag = %u", (VAR_9!=0));
        VAR_7->fParams.noDictIDFlag = !VAR_9;
        return !VAR_7->fParams.noDictIDFlag;

    case 143 :
        VAR_7->forceWindow = (VAR_9 != 0);
        return VAR_7->forceWindow;

    case 144 : {
        const ZSTD_dictAttachPref_e VAR_11 = (ZSTD_dictAttachPref_e)VAR_9;
        FUNC_0(144, VAR_11);
        VAR_7->attachDictPref = VAR_11;
        return VAR_7->attachDictPref;
    }

    case 134 :

        if (VAR_9!=0) return FUNC_2(VAR_6);
        return 0;




    case 140 :

        return FUNC_2(VAR_6);




    case 133 :

        return FUNC_2(VAR_6);




    case 132 :

        return FUNC_2(VAR_6);




    case 145 :
        VAR_7->ldmParams.enableLdm = (VAR_9!=0);
        return VAR_7->ldmParams.enableLdm;

    case 138 :
        if (VAR_9!=0)
            FUNC_0(138, VAR_9);
        VAR_7->ldmParams.hashLog = VAR_9;
        return VAR_7->ldmParams.hashLog;

    case 136 :
        if (VAR_9!=0)
            FUNC_0(136, VAR_9);
        VAR_7->ldmParams.minMatchLength = VAR_9;
        return VAR_7->ldmParams.minMatchLength;

    case 139 :
        if (VAR_9!=0)
            FUNC_0(139, VAR_9);
        VAR_7->ldmParams.bucketSizeLog = VAR_9;
        return VAR_7->ldmParams.bucketSizeLog;

    case 137 :
        if (VAR_9 > VAR_4 - VAR_3)
            return FUNC_2(VAR_5);
        VAR_7->ldmParams.hashRateLog = VAR_9;
        return VAR_7->ldmParams.hashRateLog;

    default: return FUNC_2(VAR_6);
    }
}
