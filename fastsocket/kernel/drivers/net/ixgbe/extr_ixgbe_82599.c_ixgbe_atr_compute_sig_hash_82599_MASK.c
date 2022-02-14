
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ixgbe_atr_hash_dword {int dword; } ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32 FUNC_2(union ixgbe_atr_hash_dword VAR_1,
         union ixgbe_atr_hash_dword VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;
 u32 VAR_6 = 0, VAR_7 = 0, VAR_8 = 0;


 VAR_5 = FUNC_1(VAR_1.dword);


 VAR_3 = FUNC_1(VAR_2.dword);


 VAR_4 = (VAR_3 >> 16) | (VAR_3 << 16);


 VAR_3 ^= VAR_5 ^ (VAR_5 >> 16);


 FUNC_0(0);






 VAR_4 ^= VAR_5 ^ (VAR_5 << 16);


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


 VAR_7 ^= VAR_8;
 VAR_7 &= VAR_0;

 VAR_6 ^= VAR_8 << 16;
 VAR_6 &= VAR_0 << 16;


 return VAR_6 ^ VAR_7;
}
