
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
struct hw_data {void** TxVgaSettingInEEPROM; scalar_t__ phy_type; TYPE_1__* TxVgaFor50; void** TxVgaFor24; } ;
typedef int s16 ;
struct TYPE_2__ {int ChanNo; void* TxVgaValue; } ;


 int FUNC_0 (void**,int,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;

void FUNC_2( struct hw_data * VAR_1 )
{
 u8 * VAR_2 = VAR_1->TxVgaSettingInEEPROM;
 s16 VAR_3, VAR_4;



 VAR_4 = VAR_2[1] - VAR_2[0];
 for( VAR_3=0; VAR_3<5; VAR_3++ )
  VAR_1->TxVgaFor24[VAR_3] = VAR_2[0] + VAR_4*VAR_3/4;

 VAR_4 = VAR_2[2] - VAR_2[1];
 for( VAR_3=5; VAR_3<10; VAR_3++ )
  VAR_1->TxVgaFor24[VAR_3] = VAR_2[1] + VAR_4*(VAR_3-5)/4;

 VAR_4 = VAR_2[3] - VAR_2[2];
 for( VAR_3=10; VAR_3<13; VAR_3++ )
  VAR_1->TxVgaFor24[VAR_3] = VAR_2[2] + VAR_4*(VAR_3-10)/2;

 VAR_1->TxVgaFor24[13] = VAR_2[3];


 if( VAR_1->phy_type == VAR_0 )
 {

  VAR_1->TxVgaFor50[0].ChanNo = 184;
  VAR_1->TxVgaFor50[0].TxVgaValue = VAR_2[4];

  VAR_1->TxVgaFor50[3].ChanNo = 196;
  VAR_1->TxVgaFor50[3].TxVgaValue = VAR_2[5];

  VAR_1->TxVgaFor50[1].ChanNo = 188;
  VAR_1->TxVgaFor50[2].ChanNo = 192;
  VAR_4 = VAR_2[5] - VAR_2[4];
  VAR_1->TxVgaFor50[2].TxVgaValue = VAR_2[5] - VAR_4/3;
  VAR_1->TxVgaFor50[1].TxVgaValue = VAR_2[5] - VAR_4*2/3;


  VAR_1->TxVgaFor50[6].ChanNo = 16;
  VAR_1->TxVgaFor50[6].TxVgaValue = VAR_2[6];
  VAR_1->TxVgaFor50[4].ChanNo = 8;
  VAR_1->TxVgaFor50[4].TxVgaValue = VAR_2[6];
  VAR_1->TxVgaFor50[5].ChanNo = 12;
  VAR_1->TxVgaFor50[5].TxVgaValue = VAR_2[6];


  VAR_1->TxVgaFor50[8].ChanNo = 36;
  VAR_1->TxVgaFor50[8].TxVgaValue = VAR_2[7];
  VAR_1->TxVgaFor50[7].ChanNo = 34;
  VAR_1->TxVgaFor50[7].TxVgaValue = VAR_2[7];
  VAR_1->TxVgaFor50[9].ChanNo = 38;
  VAR_1->TxVgaFor50[9].TxVgaValue = VAR_2[7];


  VAR_1->TxVgaFor50[10].ChanNo = 40;
  VAR_1->TxVgaFor50[10].TxVgaValue = VAR_2[8];

  VAR_1->TxVgaFor50[14].ChanNo = 48;
  VAR_1->TxVgaFor50[14].TxVgaValue = VAR_2[9];

  VAR_1->TxVgaFor50[11].ChanNo = 42;
  VAR_1->TxVgaFor50[12].ChanNo = 44;
  VAR_1->TxVgaFor50[13].ChanNo = 46;
  VAR_4 = VAR_2[9] - VAR_2[8];
  VAR_1->TxVgaFor50[13].TxVgaValue = VAR_2[9] - VAR_4/4;
  VAR_1->TxVgaFor50[12].TxVgaValue = VAR_2[9] - VAR_4*2/4;
  VAR_1->TxVgaFor50[11].TxVgaValue = VAR_2[9] - VAR_4*3/4;


  VAR_1->TxVgaFor50[15].ChanNo = 52;
  VAR_1->TxVgaFor50[15].TxVgaValue = VAR_2[10];

  VAR_1->TxVgaFor50[18].ChanNo = 64;
  VAR_1->TxVgaFor50[18].TxVgaValue = VAR_2[11];

  VAR_1->TxVgaFor50[16].ChanNo = 56;
  VAR_1->TxVgaFor50[17].ChanNo = 60;
  VAR_4 = VAR_2[11] - VAR_2[10];
  VAR_1->TxVgaFor50[17].TxVgaValue = VAR_2[11] - VAR_4/3;
  VAR_1->TxVgaFor50[16].TxVgaValue = VAR_2[11] - VAR_4*2/3;


  VAR_1->TxVgaFor50[19].ChanNo = 100;
  VAR_1->TxVgaFor50[19].TxVgaValue = VAR_2[12];

  VAR_1->TxVgaFor50[22].ChanNo = 112;
  VAR_1->TxVgaFor50[22].TxVgaValue = VAR_2[13];

  VAR_1->TxVgaFor50[20].ChanNo = 104;
  VAR_1->TxVgaFor50[21].ChanNo = 108;
  VAR_4 = VAR_2[13] - VAR_2[12];
  VAR_1->TxVgaFor50[21].TxVgaValue = VAR_2[13] - VAR_4/3;
  VAR_1->TxVgaFor50[20].TxVgaValue = VAR_2[13] - VAR_4*2/3;


  VAR_1->TxVgaFor50[26].ChanNo = 128;
  VAR_1->TxVgaFor50[26].TxVgaValue = VAR_2[14];

  VAR_1->TxVgaFor50[23].ChanNo = 116;
  VAR_1->TxVgaFor50[24].ChanNo = 120;
  VAR_1->TxVgaFor50[25].ChanNo = 124;
  VAR_4 = VAR_2[14] - VAR_2[13];
  VAR_1->TxVgaFor50[25].TxVgaValue = VAR_2[14] - VAR_4/4;
  VAR_1->TxVgaFor50[24].TxVgaValue = VAR_2[14] - VAR_4*2/4;
  VAR_1->TxVgaFor50[23].TxVgaValue = VAR_2[14] - VAR_4*3/4;


  VAR_1->TxVgaFor50[29].ChanNo = 140;
  VAR_1->TxVgaFor50[29].TxVgaValue = VAR_2[15];

  VAR_1->TxVgaFor50[27].ChanNo = 132;
  VAR_1->TxVgaFor50[28].ChanNo = 136;
  VAR_4 = VAR_2[15] - VAR_2[14];
  VAR_1->TxVgaFor50[28].TxVgaValue = VAR_2[15] - VAR_4/3;
  VAR_1->TxVgaFor50[27].TxVgaValue = VAR_2[15] - VAR_4*2/3;


  VAR_1->TxVgaFor50[30].ChanNo = 149;
  VAR_1->TxVgaFor50[30].TxVgaValue = VAR_2[16];

  VAR_1->TxVgaFor50[34].ChanNo = 165;
  VAR_1->TxVgaFor50[34].TxVgaValue = VAR_2[17];

  VAR_1->TxVgaFor50[31].ChanNo = 153;
  VAR_1->TxVgaFor50[32].ChanNo = 157;
  VAR_1->TxVgaFor50[33].ChanNo = 161;
  VAR_4 = VAR_2[17] - VAR_2[16];
  VAR_1->TxVgaFor50[33].TxVgaValue = VAR_2[17] - VAR_4/4;
  VAR_1->TxVgaFor50[32].TxVgaValue = VAR_2[17] - VAR_4*2/4;
  VAR_1->TxVgaFor50[31].TxVgaValue = VAR_2[17] - VAR_4*3/4;
 }







}
