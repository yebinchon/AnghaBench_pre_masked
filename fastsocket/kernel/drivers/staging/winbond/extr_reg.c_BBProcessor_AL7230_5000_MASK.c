
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wb35_reg {int BB0C; int BB2C; int BB3C; int BB50; int BB54; int BB58; } ;
struct hw_data {struct wb35_reg reg; } ;


 int VAR_0 ;
 int FUNC_0 (struct hw_data*,int,int*,int,int ) ;

void FUNC_1( struct hw_data * VAR_1)
{
 struct wb35_reg *VAR_2 = &VAR_1->reg;
 u32 VAR_3[12];

 VAR_3[0] = 0x16AA6678;
 VAR_3[1] = 0x9AFFA0B2;
 VAR_3[2] = 0x55D00A04;
 VAR_3[3] = 0xEFFF233E;
 VAR_2->BB0C = 0xEFFF233E;
 VAR_3[4] = 0x0FacDCC5;
 VAR_3[5] = 0x00CAA333;
 VAR_3[6] = 0xF2432111;
 VAR_3[7] = 0x0FA3F0ED;
 VAR_3[8] = 0x05C43440;
 VAR_3[9] = 0x00002A79;
 VAR_3[10] = 0x40000528;
 VAR_3[11] = 0x232FDF30;
 VAR_2->BB2C = 0x232FDF30;
 FUNC_0( VAR_1, 0x1000, VAR_3, 12, VAR_0 );

 VAR_3[0] = 0x80002C7C;
 VAR_3[1] = 0x00C0D6C5;
 VAR_3[2] = 0x5B2C8769;
 VAR_3[3] = 0x00000000;
 VAR_2->BB3C = 0x00000000;
 VAR_3[4] = 0x00003F29;
 VAR_3[5] = 0x0EFEFBFE;
 VAR_3[6] = 0x00332C1B;
 VAR_3[7] = 0x0A00FEFF;
 VAR_3[8] = 0x2B107208;
 VAR_2->BB50 = 0x2B107208;
 VAR_3[9] = 0;
 VAR_2->BB54 = 0x00000000;
 VAR_3[10] = 0x52524242;
 VAR_2->BB58 = 0x52524242;
 VAR_3[11] = 0xAA0AC000;
 FUNC_0( VAR_1, 0x1030, VAR_3, 12, VAR_0 );

}
