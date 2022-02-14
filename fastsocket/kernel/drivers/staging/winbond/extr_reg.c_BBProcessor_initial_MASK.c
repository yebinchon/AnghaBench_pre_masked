
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef size_t u32 ;
struct wb35_reg {int BB0C; int BB2C; int BB30; int BB3C; int BB50; int BB54; int BB58; int* SQ3_filter; void** LNAValue; void* BB4C; void* BB48; } ;
struct hw_data {int phy_type; size_t BB3c_cal; size_t BB54_cal; struct wb35_reg reg; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (struct hw_data*) ;
 size_t VAR_5 ;
 int FUNC_1 (struct hw_data*,int,size_t*,int,int ) ;
 int FUNC_2 (struct hw_data*,int,int) ;

void
FUNC_3( struct hw_data * VAR_6 )
{
 struct wb35_reg *VAR_7 = &VAR_6->reg;
 u32 VAR_8, VAR_9[12];

    switch( VAR_6->phy_type )
    {
  case 130:

   VAR_9[0] = 0x16F47E77;
   VAR_9[1] = 0x9AFFAEA4;
   VAR_9[2] = 0x55D00A04;
   VAR_9[3] = 0xEFFF1A34;
   VAR_7->BB0C = 0xEFFF1A34;
   VAR_9[4] = 0x0FABE0B7;
   VAR_9[5] = 0x00CAA332;
   VAR_9[6] = 0xF6632111;
   VAR_9[7] = 0x0FA3F0ED;
   VAR_9[8] = 0x04CC3640;
   VAR_9[9] = 0x00002A79;
   VAR_9[10] = (VAR_6->phy_type==3) ? 0x40000a28 : 0x40000228;
   VAR_9[11] = 0x232FDF30;
   VAR_7->BB2C = 0x232FDF30;
   FUNC_1( VAR_6, 0x1000, VAR_9, 12, VAR_0 );

   VAR_9[0] = 0x00002C54;
   VAR_7->BB30 = 0x00002C54;
   VAR_9[1] = 0x00C0D6C5;
   VAR_9[2] = 0x5B6C8769;
   VAR_9[3] = 0x00000000;
   VAR_7->BB3C = 0x00000000;
   VAR_9[4] = 0x00003F29;
   VAR_9[5] = 0x0EFEFBFE;
   VAR_9[6] = 0x00453B24;
   VAR_9[7] = 0x0E00FEFF;
   VAR_9[8] = 0x27106208;
   VAR_7->BB50 = 0x27106208;
   VAR_9[9] = 0;
   VAR_7->BB54 = 0x00000000;
   VAR_9[10] = 0x64646464;
   VAR_7->BB58 = 0x64646464;
   VAR_9[11] = 0xAA0AC000;
   FUNC_1( VAR_6, 0x1030, VAR_9, 12, VAR_0 );

   FUNC_2( VAR_6, 0x1070, 0x00000045 );
   break;





  case 134:
  case 133:
  case 132:

   VAR_9[0] = 0x16b47e77;
   VAR_9[1] = 0x9affaea4;
   VAR_9[2] = 0x55d00a04;
   VAR_9[3] = 0xefff1a34;
   VAR_7->BB0C = 0xefff1a34;
   VAR_9[4] = 0x0fabe0b7;
   VAR_9[5] = 0x00caa332;
   VAR_9[6] = 0xf6632111;
   VAR_9[7] = 0x0FA3F0ED;
   VAR_9[8] = 0x04CC3640;
   VAR_9[9] = 0x00002A79;
   VAR_9[10] = 0x40000528;
   VAR_9[11] = 0x232fdf30;
   VAR_7->BB2C = 0x232fdf30;
   FUNC_1( VAR_6, 0x1000, VAR_9, 12, VAR_0 );

   VAR_9[0] = 0x00002C54;
   VAR_7->BB30 = 0x00002C54;
   VAR_9[1] = 0x00C0D6C5;
   VAR_9[2] = 0x5B6C8769;
   VAR_9[3] = 0x00000000;
   VAR_7->BB3C = 0x00000000;
   VAR_9[4] = 0x00003F29;
   VAR_9[5] = 0x0EFEFBFE;
   VAR_9[6] = 0x00453B24;
   VAR_9[7] = 0x0D00FDFF;
   VAR_9[8] = 0x27106208;
   VAR_7->BB50 = 0x27106208;
   VAR_9[9] = 0;
   VAR_7->BB54 = 0x00000000;
   VAR_9[10] = 0x64646464;
   VAR_7->BB58 = 0x64646464;
   VAR_9[11] = 0xAA28C000;
   FUNC_1( VAR_6, 0x1030, VAR_9, 12, VAR_0 );

   FUNC_2( VAR_6, 0x1070, 0x00000045 );
   break;

  case 131:

   VAR_9[0] = 0x16b47e77;
   VAR_9[1] = 0x9affaea4;
   VAR_9[2] = 0x55d00a04;
   VAR_9[3] = 0xf4ff1632;
   VAR_7->BB0C = 0xf4ff1632;
   VAR_9[4] = 0x0fabe0b7;
   VAR_9[5] = 0x00caa332;
   VAR_9[6] = 0xf8632112;
   VAR_9[7] = 0x0FA3F0ED;
   VAR_9[8] = 0x04CC3640;
   VAR_9[9] = 0x00002A79;
   VAR_9[10] = 0x40000528;
   VAR_9[11] = 0x232fdf30;
   VAR_7->BB2C = 0x232fdf30;
   FUNC_1( VAR_6, 0x1000, VAR_9, 12, VAR_0 );

   VAR_9[0] = 0x00002C54;
   VAR_7->BB30 = 0x00002C54;
   VAR_9[1] = 0x00C0D6C5;
   VAR_9[2] = 0x5b2c8769;
   VAR_9[3] = 0x00000000;
   VAR_7->BB3C = 0x00000000;
   VAR_9[4] = 0x00003F29;
   VAR_9[5] = 0x0EFEFBFE;
   VAR_9[6] = 0x002c2617;
   VAR_9[7] = 0x0800feff;
   VAR_9[8] = 0x27106208;
   VAR_7->BB50 = 0x27106208;
   VAR_9[9] = 0;
   VAR_7->BB54 = 0x00000000;
   VAR_9[10] = 0x64644a4a;
   VAR_7->BB58 = 0x64646464;
   VAR_9[11] = 0xAA28C000;
   FUNC_1( VAR_6, 0x1030, VAR_9, 12, VAR_0 );

   FUNC_2( VAR_6, 0x1070, 0x00000045 );
   break;

  case 137:

   VAR_9[0] = 0X16764A77;
   VAR_9[1] = 0x9affafb2;
   VAR_9[2] = 0x55d00a04;
   VAR_9[3] = 0xFFFd203c;
   VAR_7->BB0C = 0xFFFd203c;
   VAR_9[4] = 0X0FBFDCc5;
   VAR_9[5] = 0x00caa332;
   VAR_9[6] = 0XF6632111;
   VAR_9[7] = 0x0FA3F0ED;
   VAR_9[8] = 0x04C43640;
   VAR_9[9] = 0x00002A79;
   VAR_9[10] = 0X40000528;
   VAR_9[11] = 0x232dfF30;
   VAR_7->BB2C = 0x232dfF30;
   FUNC_1( VAR_6, 0x1000, VAR_9, 12, VAR_0 );

   VAR_9[0] = 0x00002C54;
   VAR_7->BB30 = 0x00002C54;
   VAR_9[1] = 0x00C0D6C5;
   VAR_9[2] = 0x5B2C8769;
   VAR_9[3] = 0x00000000;
   VAR_7->BB3C = 0x00000000;
   VAR_9[4] = 0x00003F29;
   VAR_9[5] = 0x0EFEFBFE;
   VAR_9[6] = VAR_1;
   VAR_7->BB48 = VAR_1;
   VAR_9[7] = VAR_3;
   VAR_7->BB4C = VAR_3;
   VAR_9[8] = 0x27106200;
   VAR_7->BB50 = 0x27106200;
   VAR_9[9] = 0;
   VAR_7->BB54 = 0x00000000;
   VAR_9[10] = 0x52524242;
   VAR_7->BB58 = 0x52524242;
   VAR_9[11] = 0xAA0AC000;
   FUNC_1( VAR_6, 0x1030, VAR_9, 12, VAR_0 );

   FUNC_2( VAR_6, 0x1070, 0x00000045 );
   break;

  case 136:

   VAR_9[0] = 0X16764A77;
   VAR_9[1] = 0x9affafb2;
   VAR_9[2] = 0x55d00a04;
   VAR_9[3] = 0xFFFd203c;
   VAR_7->BB0C = 0xFFFd203c;
   VAR_9[4] = 0X0FBFDCc5;
   VAR_9[5] = 0x00caa332;
   VAR_9[6] = 0XF6632111;
   VAR_9[7] = 0x0FA3F0ED;
   VAR_9[8] = 0x04C43640;
   VAR_9[9] = 0x00002A79;
   VAR_9[10] = 0X40000528;
   VAR_9[11] = 0x232dfF30;
   VAR_7->BB2C = 0x232dfF30;
   FUNC_1( VAR_6, 0x1000, VAR_9, 12, VAR_0 );

   VAR_9[0] = 0x00002C54;
   VAR_7->BB30 = 0x00002C54;
   VAR_9[1] = 0x00C0D6C5;
   VAR_9[2] = 0x5B2C8769;
   VAR_9[3] = 0x00000000;
   VAR_7->BB3C = 0x00000000;
   VAR_9[4] = 0x00003F29;
   VAR_9[5] = 0x0EFEFBFE;
   VAR_9[6] = VAR_1;
   VAR_7->BB48 = VAR_1;
   VAR_9[7] = VAR_3;
   VAR_7->BB4C = VAR_3;
   VAR_9[8] = 0x27106200;
   VAR_7->BB50 = 0x27106200;
   VAR_9[9] = 0;
   VAR_7->BB54 = 0x00000000;
   VAR_9[10] = 0x52523232;
   VAR_7->BB58 = 0x52523232;
   VAR_9[11] = 0xAA0AC000;
   FUNC_1( VAR_6, 0x1030, VAR_9, 12, VAR_0 );

   FUNC_2( VAR_6, 0x1070, 0x00000045 );
   break;

  case 135:
   FUNC_0( VAR_6 );

   FUNC_2( VAR_6, 0x1070, 0x00000045 );
   break;

  case 129:
  case 128:

   VAR_9[0] = 0x16A8525D;
   VAR_9[1] = 0x9AFF9ABA;
   VAR_9[2] = 0x55D00A04;
   VAR_9[3] = 0xEEE91C32;
   VAR_7->BB0C = 0xEEE91C32;
   VAR_9[4] = 0x0FACDCC5;
   VAR_9[5] = 0x000AA344;
   VAR_9[6] = 0x22222221;
   VAR_9[7] = 0x0FA3F0ED;
   VAR_9[8] = 0x04CC3440;
   VAR_9[9] = 0xA9002A79;
   VAR_9[10] = 0x40000528;
   VAR_9[11] = 0x23457F30;
   VAR_7->BB2C = 0x23457F30;
   FUNC_1( VAR_6, 0x1000, VAR_9, 12, VAR_0 );

   VAR_9[0] = 0x00002C54;
   VAR_7->BB30 = 0x00002C54;
   VAR_9[1] = 0x00C0D6C5;
   VAR_9[2] = 0x5B2C8769;
   VAR_9[3] = VAR_6->BB3c_cal;
   VAR_7->BB3C = VAR_6->BB3c_cal;
   VAR_9[4] = 0x00003F29;
   VAR_9[5] = 0x0EFEFBFE;
   VAR_9[6] = VAR_2;
   VAR_7->BB48 = VAR_2;
   VAR_9[7] = VAR_4;
   VAR_7->BB4C = VAR_4;
   VAR_9[8] = 0x27106208;
   VAR_7->BB50 = 0x27106208;
   VAR_9[9] = VAR_6->BB54_cal;
   VAR_7->BB54 = VAR_6->BB54_cal;
   VAR_9[10] = 0x52523131;
   VAR_7->BB58 = 0x52523131;
   VAR_9[11] = 0xAA0AC000;
   FUNC_1( VAR_6, 0x1030, VAR_9, 12, VAR_0 );

   FUNC_2( VAR_6, 0x1070, 0x00000045 );
   break;
    }


 VAR_7->LNAValue[0] = (u8)(VAR_7->BB0C & 0xff);
 VAR_7->LNAValue[1] = 0;
 VAR_7->LNAValue[2] = (u8)((VAR_7->BB0C & 0xff00)>>8);
 VAR_7->LNAValue[3] = 0;


 for( VAR_8=0; VAR_8<VAR_5; VAR_8++ )
  VAR_7->SQ3_filter[VAR_8] = 0x2f;
}
