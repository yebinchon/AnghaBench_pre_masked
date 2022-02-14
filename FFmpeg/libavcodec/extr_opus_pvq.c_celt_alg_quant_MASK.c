
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef enum CeltSpread { ____Placeholder_CeltSpread } CeltSpread ;
struct TYPE_3__ {int* qcoeff; int (* pvq_search ) (float*,int*,int ,int ) ;} ;
typedef int OpusRangeCoder ;
typedef TYPE_1__ CeltPVQ ;


 int FUNC_0 (int *,int*,int ,int ) ;
 int FUNC_1 (float*,int ,int ,int ,int,int) ;
 int FUNC_2 (int*,int ,int ) ;
 int FUNC_3 (int*,float*,int ,float) ;
 float FUNC_4 (int ) ;
 int FUNC_5 (float*,int*,int ,int ) ;

__attribute__((used)) static uint32_t FUNC_6(OpusRangeCoder *VAR_0, float *VAR_1, uint32_t VAR_2, uint32_t VAR_3,
                               enum CeltSpread VAR_4, uint32_t VAR_5, float VAR_6,
                               CeltPVQ *VAR_7)
{
    int *VAR_8 = VAR_7->qcoeff;

    FUNC_1(VAR_1, VAR_2, VAR_5, VAR_3, VAR_4, 1);
    VAR_6 /= FUNC_4(VAR_7->pvq_search(VAR_1, VAR_8, VAR_3, VAR_2));
    FUNC_0(VAR_0, VAR_8, VAR_2, VAR_3);
    FUNC_3(VAR_8, VAR_1, VAR_2, VAR_6);
    FUNC_1(VAR_1, VAR_2, VAR_5, VAR_3, VAR_4, 0);
    return FUNC_2(VAR_8, VAR_2, VAR_5);
}
