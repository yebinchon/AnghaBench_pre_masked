
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int jobSize; int overlapLog; int rsyncable; } ;
typedef TYPE_1__ ZSTD_CCtx_params ;
typedef int ZSTDMT_parameter ;


 int FUNC_0 (int,char*,...) ;
 size_t FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int VAR_4 ;

size_t
FUNC_3(ZSTD_CCtx_params* VAR_5,
                                   ZSTDMT_parameter VAR_6,
                                   int VAR_7)
{
    FUNC_0(4, "ZSTDMT_CCtxParam_setMTCtxParameter");
    switch(VAR_6)
    {
    case 130 :
        FUNC_0(4, "ZSTDMT_CCtxParam_setMTCtxParameter : set jobSize to %i", VAR_7);
        if ( VAR_7 != 0
          && VAR_7 < VAR_1)
            VAR_7 = VAR_1;
        FUNC_2(VAR_7 >= 0);
        if (VAR_7 > VAR_0) VAR_7 = VAR_0;
        VAR_5->jobSize = VAR_7;
        return VAR_7;

    case 129 :
        FUNC_0(4, "ZSTDMT_p_overlapLog : %i", VAR_7);
        if (VAR_7 < VAR_3) VAR_7 = VAR_3;
        if (VAR_7 > VAR_2) VAR_7 = VAR_2;
        VAR_5->overlapLog = VAR_7;
        return VAR_7;

    case 128 :
        VAR_7 = (VAR_7 != 0);
        VAR_5->rsyncable = VAR_7;
        return VAR_7;

    default :
        return FUNC_1(VAR_4);
    }
}
