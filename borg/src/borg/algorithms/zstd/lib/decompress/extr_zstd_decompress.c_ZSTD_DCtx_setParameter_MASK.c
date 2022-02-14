
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ZSTD_format_e ;
typedef int ZSTD_dParameter ;
struct TYPE_3__ {scalar_t__ streamStage; size_t maxWindowSize; int format; } ;
typedef TYPE_1__ ZSTD_DCtx ;


 int FUNC_0 (int const,int) ;
 size_t FUNC_1 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

size_t FUNC_2(ZSTD_DCtx* VAR_3, ZSTD_dParameter VAR_4, int VAR_5)
{
    if (VAR_3->streamStage != VAR_2) return FUNC_1(VAR_1);
    switch(VAR_4) {
        case 128:
            FUNC_0(128, VAR_5);
            VAR_3->maxWindowSize = ((size_t)1) << VAR_5;
            return 0;
        case 129:
            FUNC_0(129, VAR_5);
            VAR_3->format = (ZSTD_format_e)VAR_5;
            return 0;
        default:;
    }
    return FUNC_1(VAR_0);
}
