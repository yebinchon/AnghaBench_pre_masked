
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t UINT8 ;
typedef size_t* BT_OCTET16 ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;

void FUNC_1(BT_OCTET16 VAR_1, const BT_OCTET16 VAR_2)
{
    UINT8 VAR_3, *VAR_4 = VAR_1;
    const UINT8 *VAR_5 = VAR_2;

    FUNC_0("smp_xor_128\n");
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        VAR_4[VAR_3] = VAR_4[VAR_3] ^ VAR_5[VAR_3];
    }
}
