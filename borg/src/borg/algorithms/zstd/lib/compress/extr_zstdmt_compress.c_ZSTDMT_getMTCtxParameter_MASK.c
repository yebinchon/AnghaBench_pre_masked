
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTDMT_parameter ;
struct TYPE_4__ {int overlapLog; int rsyncable; scalar_t__ jobSize; } ;
struct TYPE_5__ {TYPE_1__ params; } ;
typedef TYPE_2__ ZSTDMT_CCtx ;


 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;



 int FUNC_1 (int) ;
 int VAR_1 ;

size_t FUNC_2(ZSTDMT_CCtx* VAR_2, ZSTDMT_parameter VAR_3, int* VAR_4)
{
    switch (VAR_3) {
    case 130:
        FUNC_1(VAR_2->params.jobSize <= VAR_0);
        *VAR_4 = (int)(VAR_2->params.jobSize);
        break;
    case 129:
        *VAR_4 = VAR_2->params.overlapLog;
        break;
    case 128:
        *VAR_4 = VAR_2->params.rsyncable;
        break;
    default:
        return FUNC_0(VAR_1);
    }
    return 0;
}
