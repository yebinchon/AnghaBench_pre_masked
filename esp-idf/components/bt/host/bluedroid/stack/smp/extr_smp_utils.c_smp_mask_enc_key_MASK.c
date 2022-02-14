
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT8 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;

void FUNC_1(UINT8 VAR_1, UINT8 *VAR_2)
{
    FUNC_0("smp_mask_enc_key\n");
    if (VAR_1 < VAR_0) {
        for (; VAR_1 < VAR_0; VAR_1 ++) {
            * (VAR_2 + VAR_1) = 0;
        }
    }
    return;
}
