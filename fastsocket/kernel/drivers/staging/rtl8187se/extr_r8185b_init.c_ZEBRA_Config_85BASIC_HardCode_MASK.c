
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct r8180_priv {scalar_t__ card_8185; int XtalCal_Xin; int XtalCal_Xout; int bSwAntennaDiverity; int bDefaultAntenna1; scalar_t__ bXtalCalibration; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*,int ,int) ;
 int FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,int,int) ;
 int FUNC_3 (struct net_device*,int ,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_4 (struct net_device*,int) ;
 int* VAR_11 ;
 int* VAR_12 ;
 scalar_t__ FUNC_5 (struct net_device*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (struct net_device*,int) ;
 int FUNC_9 (struct net_device*,int,int) ;
 int FUNC_10 (struct net_device*,int,int) ;
 int FUNC_11 (struct net_device*,int,int) ;

void
FUNC_12(
 struct net_device *VAR_13
 )
{

 struct r8180_priv *VAR_14 = (struct r8180_priv *)FUNC_5(VAR_13);
 u32 VAR_15;
 u32 VAR_16,VAR_17;
 u32 VAR_18, VAR_19, VAR_20, VAR_21;
       u8 VAR_22;
 FUNC_2(VAR_13, 0x00, 0x013f); FUNC_6(1);
 VAR_20= FUNC_1(VAR_13, 0x08); FUNC_6(1);
 VAR_21= FUNC_1(VAR_13, 0x09); FUNC_6(1);

 if (VAR_20==0x818 && VAR_21==0x70C && VAR_14->card_8185 == VAR_9)
  VAR_14->card_8185 = VAR_10;




 FUNC_2(VAR_13, 0x00, 0x009f); FUNC_6(1);

 FUNC_2(VAR_13, 0x01, 0x06e0); FUNC_6(1);


 FUNC_2(VAR_13, 0x02, 0x004d); FUNC_6(1);


 FUNC_2(VAR_13, 0x03, 0x07f1); FUNC_6(1);

 FUNC_2(VAR_13, 0x04, 0x0975); FUNC_6(1);
 FUNC_2(VAR_13, 0x05, 0x0c72); FUNC_6(1);
 FUNC_2(VAR_13, 0x06, 0x0ae6); FUNC_6(1);
 FUNC_2(VAR_13, 0x07, 0x00ca); FUNC_6(1);
 FUNC_2(VAR_13, 0x08, 0x0e1c); FUNC_6(1);
 FUNC_2(VAR_13, 0x09, 0x02f0); FUNC_6(1);
 FUNC_2(VAR_13, 0x0a, 0x09d0); FUNC_6(1);
 FUNC_2(VAR_13, 0x0b, 0x01ba); FUNC_6(1);
 FUNC_2(VAR_13, 0x0c, 0x0640); FUNC_6(1);
 FUNC_2(VAR_13, 0x0d, 0x08df); FUNC_6(1);
 FUNC_2(VAR_13, 0x0e, 0x0020); FUNC_6(1);
 FUNC_2(VAR_13, 0x0f, 0x0990); FUNC_6(1);



 FUNC_2(VAR_13, 0x00, 0x013f); FUNC_6(1);

 FUNC_2(VAR_13, 0x03, 0x0806); FUNC_6(1);

 if(VAR_14->card_8185 < VAR_9)
 {
  FUNC_2(VAR_13, 0x04, 0x03f7); FUNC_6(1);
  FUNC_2(VAR_13, 0x05, 0x05ab); FUNC_6(1);
  FUNC_2(VAR_13, 0x06, 0x00c1); FUNC_6(1);
 }
 else
 {
  FUNC_2(VAR_13, 0x04, 0x03a7); FUNC_6(1);
  FUNC_2(VAR_13, 0x05, 0x059b); FUNC_6(1);
  FUNC_2(VAR_13, 0x06, 0x0081); FUNC_6(1);
 }


 FUNC_2(VAR_13, 0x07, 0x01A0); FUNC_6(1);



 FUNC_2(VAR_13, 0x0a, 0x0001); FUNC_6(1);
 FUNC_2(VAR_13, 0x0b, 0x0418); FUNC_6(1);

 if(VAR_14->card_8185 == VAR_10)
 {
  FUNC_2(VAR_13, 0x0c, 0x0fbe); FUNC_6(1);
  FUNC_2(VAR_13, 0x0d, 0x0008); FUNC_6(1);
  FUNC_2(VAR_13, 0x0e, 0x0807); FUNC_6(1);
 }
 else
 {
  FUNC_2(VAR_13, 0x0c, 0x0fbe); FUNC_6(1);
  FUNC_2(VAR_13, 0x0d, 0x0008); FUNC_6(1);
  FUNC_2(VAR_13, 0x0e, 0x0806); FUNC_6(1);
 }

 FUNC_2(VAR_13, 0x0f, 0x0acc); FUNC_6(1);


 FUNC_2(VAR_13, 0x00, 0x01d7); FUNC_6(1);

 FUNC_2(VAR_13, 0x03, 0x0e00); FUNC_6(1);
 FUNC_2(VAR_13, 0x04, 0x0e50); FUNC_6(1);
 for(VAR_15=0;VAR_15<=36;VAR_15++)
 {
  FUNC_2(VAR_13, 0x01, VAR_15); FUNC_6(1);
  FUNC_2(VAR_13, 0x02, VAR_12[VAR_15]); FUNC_6(1);

 }

 FUNC_2(VAR_13, 0x05, 0x0203); FUNC_6(1);

 FUNC_2(VAR_13, 0x06, 0x0200); FUNC_6(1);

 FUNC_2(VAR_13, 0x00, 0x0137); FUNC_6(1);
 FUNC_6(10);





 FUNC_2(VAR_13, 0x0d, 0x0008); FUNC_6(1);
 FUNC_6(10);

 FUNC_2(VAR_13, 0x00, 0x0037); FUNC_6(1);
 FUNC_6(10);

 FUNC_2(VAR_13, 0x04, 0x0160); FUNC_6(1);
 FUNC_6(10);

 FUNC_2(VAR_13, 0x07, 0x0080); FUNC_6(1);
 FUNC_6(10);

 FUNC_2(VAR_13, 0x02, 0x088D); FUNC_6(1);
 FUNC_6(200);
 FUNC_6(10);
 FUNC_6(10);

 FUNC_2(VAR_13, 0x00, 0x0137); FUNC_6(1);
 FUNC_6(10);

 FUNC_2(VAR_13, 0x07, 0x0000); FUNC_6(1);
 FUNC_2(VAR_13, 0x07, 0x0180); FUNC_6(1);
 FUNC_2(VAR_13, 0x07, 0x0220); FUNC_6(1);
 FUNC_2(VAR_13, 0x07, 0x03E0); FUNC_6(1);


 FUNC_2(VAR_13, 0x06, 0x00c1); FUNC_6(1);
 FUNC_2(VAR_13, 0x0a, 0x0001); FUNC_6(1);


 if( VAR_14->bXtalCalibration )
 {




  FUNC_2(VAR_13, 0x0f, (VAR_14->XtalCal_Xin<<5)|(VAR_14->XtalCal_Xout<<1)|VAR_1|VAR_4); FUNC_6(1);
  FUNC_7("ZEBRA_Config_85BASIC_HardCode(): (%02x)\n",
    (VAR_14->XtalCal_Xin<<5) | (VAR_14->XtalCal_Xout<<1) | VAR_1| VAR_4);
 }
 else
 {
  FUNC_2(VAR_13, 0x0f, 0x0acc); FUNC_6(1);
 }



 FUNC_2(VAR_13, 0x00, 0x00bf); FUNC_6(1);

 FUNC_2(VAR_13, 0x0d, 0x08df); FUNC_6(1);
 FUNC_2(VAR_13, 0x02, 0x004d); FUNC_6(1);
 FUNC_2(VAR_13, 0x04, 0x0975); FUNC_6(1);
 FUNC_6(10);
 FUNC_6(10);
 FUNC_6(10);
 FUNC_2(VAR_13, 0x00, 0x0197); FUNC_6(1);
 FUNC_2(VAR_13, 0x05, 0x05ab); FUNC_6(1);
 FUNC_2(VAR_13, 0x00, 0x009f); FUNC_6(1);

 FUNC_2(VAR_13, 0x01, 0x0000); FUNC_6(1);
 FUNC_2(VAR_13, 0x02, 0x0000); FUNC_6(1);

 VAR_22 = FUNC_8(VAR_13, 0x24E);
 FUNC_9(VAR_13, 0x24E, (VAR_22 & (~(VAR_2|VAR_3))));
 FUNC_10(VAR_13,0x00,0xc8);
 FUNC_10(VAR_13,0x06,0x1c);
 FUNC_10(VAR_13,0x10,0x78);
 FUNC_10(VAR_13,0x2e,0xd0);
 FUNC_10(VAR_13,0x2f,0x06);
 FUNC_10(VAR_13,0x01,0x46);


 FUNC_9(VAR_13, VAR_5, 0x10);
 FUNC_9(VAR_13, VAR_7, 0x1B);
 FUNC_9(VAR_13, VAR_0, 0x03);
 FUNC_11(VAR_13, 0x00, 0x12);


 for (VAR_15=0; VAR_15<128; VAR_15++)
 {


  VAR_17 = VAR_11[VAR_15+1];
  VAR_17 = VAR_17 << 8;
  VAR_17 = VAR_17 | 0x0000008F;

  VAR_16 = VAR_15 + 0x80;
  VAR_16 = VAR_16 << 8;
  VAR_16 = VAR_16 | 0x0000008E;

  FUNC_4(VAR_13, VAR_17);
  FUNC_4(VAR_13, VAR_16);
  FUNC_4(VAR_13, 0x0000008E);
 }

 FUNC_0( VAR_13, VAR_8, 0x00001080);
 for(VAR_15=0; VAR_15<60; VAR_15++)
 {
  VAR_18=VAR_15;
  VAR_19=VAR_6[VAR_15];



  FUNC_4(VAR_13,
      (0x00000080 |
      (VAR_18 & 0x7f) |
      ((VAR_19 & 0xff) << 8)));
 }






 FUNC_3(VAR_13, VAR_14->bDefaultAntenna1, VAR_14->bSwAntennaDiverity);


}
