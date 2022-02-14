
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ptrdiff_t ;
struct TYPE_3__ {int fill_val; int coef_model; } ;
typedef int RangeCoder ;
typedef TYPE_1__ FillBlockCoder ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static void FUNC_2(RangeCoder *VAR_0, FillBlockCoder *VAR_1,
                              uint8_t *VAR_2, ptrdiff_t VAR_3, int VAR_4)
{
    int VAR_5;

    VAR_1->fill_val += FUNC_0(VAR_0, &VAR_1->coef_model);

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++, VAR_2 += VAR_3)
        FUNC_1(VAR_2, VAR_1->fill_val, VAR_4);
}
