
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ldmState_t ;
struct TYPE_6__ {int hashRateLog; } ;
typedef TYPE_1__ ldmParams_t ;
struct TYPE_7__ {int offset; int checksum; } ;
typedef TYPE_2__ ldmEntry_t ;
typedef int U64 ;
typedef int U32 ;


 int FUNC_0 (int const,int const) ;
 int FUNC_1 (int const,int const) ;
 int FUNC_2 (int const,int const,int) ;
 int FUNC_3 (int *,int const,TYPE_2__,TYPE_1__ const) ;

__attribute__((used)) static void FUNC_4(ldmState_t* VAR_0,
                                             U64 const VAR_1,
                                             U32 const VAR_2,
                                             U32 const VAR_3,
                                             ldmParams_t const VAR_4)
{
    U32 const VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_4.hashRateLog);
    U32 const VAR_6 = ((U32)1 << VAR_4.hashRateLog) - 1;
    if (VAR_5 == VAR_6) {
        U32 const VAR_7 = FUNC_1(VAR_1, VAR_2);
        U32 const VAR_8 = FUNC_0(VAR_1, VAR_2);
        ldmEntry_t VAR_9;
        VAR_9.offset = VAR_3;
        VAR_9.checksum = VAR_8;
        FUNC_3(VAR_0, VAR_7, VAR_9, VAR_4);
    }
}
