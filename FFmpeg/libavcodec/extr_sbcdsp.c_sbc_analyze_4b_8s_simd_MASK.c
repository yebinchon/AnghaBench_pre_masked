
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
typedef int int16_t ;
struct TYPE_3__ {int (* sbc_analyze_8 ) (int *,int *,int ) ;} ;
typedef TYPE_1__ SBCDSPContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static inline void FUNC_4(SBCDSPContext *VAR_2,
                                          int16_t *VAR_3, int32_t *VAR_4, int VAR_5)
{

    VAR_2->sbc_analyze_8(VAR_3 + 24, VAR_4, VAR_1);
    VAR_4 += VAR_5;
    VAR_2->sbc_analyze_8(VAR_3 + 16, VAR_4, VAR_0);
    VAR_4 += VAR_5;
    VAR_2->sbc_analyze_8(VAR_3 + 8, VAR_4, VAR_1);
    VAR_4 += VAR_5;
    VAR_2->sbc_analyze_8(VAR_3 + 0, VAR_4, VAR_0);
}
