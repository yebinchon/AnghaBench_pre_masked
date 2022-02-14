
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bkt_hash; } ;
union ixgbe_atr_input {int* dword_stream; TYPE_1__ formatted; } ;
typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

void FUNC_2(union ixgbe_atr_input *VAR_0,
       union ixgbe_atr_input *VAR_1)
{

 u32 VAR_2, VAR_3, VAR_4;
 u32 VAR_5 = 0;


 VAR_0->dword_stream[0] &= VAR_1->dword_stream[0];
 VAR_0->dword_stream[1] &= VAR_1->dword_stream[1];
 VAR_0->dword_stream[2] &= VAR_1->dword_stream[2];
 VAR_0->dword_stream[3] &= VAR_1->dword_stream[3];
 VAR_0->dword_stream[4] &= VAR_1->dword_stream[4];
 VAR_0->dword_stream[5] &= VAR_1->dword_stream[5];
 VAR_0->dword_stream[6] &= VAR_1->dword_stream[6];
 VAR_0->dword_stream[7] &= VAR_1->dword_stream[7];
 VAR_0->dword_stream[8] &= VAR_1->dword_stream[8];
 VAR_0->dword_stream[9] &= VAR_1->dword_stream[9];
 VAR_0->dword_stream[10] &= VAR_1->dword_stream[10];


 VAR_4 = FUNC_1(VAR_0->dword_stream[0]);


 VAR_2 = FUNC_1(VAR_0->dword_stream[1] ^
        VAR_0->dword_stream[2] ^
        VAR_0->dword_stream[3] ^
        VAR_0->dword_stream[4] ^
        VAR_0->dword_stream[5] ^
        VAR_0->dword_stream[6] ^
        VAR_0->dword_stream[7] ^
        VAR_0->dword_stream[8] ^
        VAR_0->dword_stream[9] ^
        VAR_0->dword_stream[10]);


 VAR_3 = (VAR_2 >> 16) | (VAR_2 << 16);


 VAR_2 ^= VAR_4 ^ (VAR_4 >> 16);


 FUNC_0(0);






 VAR_3 ^= VAR_4 ^ (VAR_4 << 16);


 FUNC_0(1);
 FUNC_0(2);
 FUNC_0(3);
 FUNC_0(4);
 FUNC_0(5);
 FUNC_0(6);
 FUNC_0(7);
 FUNC_0(8);
 FUNC_0(9);
 FUNC_0(10);
 FUNC_0(11);
 FUNC_0(12);
 FUNC_0(13);
 FUNC_0(14);
 FUNC_0(15);





 VAR_0->formatted.bkt_hash = VAR_5 & 0x1FFF;
}
