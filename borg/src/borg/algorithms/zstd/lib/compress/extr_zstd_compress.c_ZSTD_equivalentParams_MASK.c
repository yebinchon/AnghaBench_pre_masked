
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ZSTD_buffered_policy_e ;
struct TYPE_4__ {int cParams; int ldmParams; } ;
typedef TYPE_1__ ZSTD_CCtx_params ;
typedef scalar_t__ U64 ;
typedef int U32 ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (size_t,size_t,size_t,int ,int ,scalar_t__) ;

__attribute__((used)) static U32 FUNC_4(ZSTD_CCtx_params VAR_0,
                                 ZSTD_CCtx_params VAR_1,
                                 size_t VAR_2,
                                 size_t VAR_3, size_t VAR_4,
                                 ZSTD_buffered_policy_e VAR_5,
                                 U64 VAR_6)
{
    FUNC_0(4, "ZSTD_equivalentParams: pledgedSrcSize=%u", (U32)VAR_6);
    if (!FUNC_1(VAR_0, VAR_1)) {
      FUNC_0(4, "ZSTD_equivalentCParams() == 0");
      return 0;
    }
    if (!FUNC_2(VAR_0, VAR_1)) {
      FUNC_0(4, "ZSTD_equivalentLdmParams() == 0");
      return 0;
    }
    if (!FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5,
                             VAR_1, VAR_6)) {
      FUNC_0(4, "ZSTD_sufficientBuff() == 0");
      return 0;
    }
    return 1;
}
