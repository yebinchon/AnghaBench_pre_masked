
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,int) ;
 int FUNC_1 (struct net_device*,int,int*) ;
 int FUNC_2 (char*) ;

void
FUNC_3(struct net_device* VAR_0, u16 VAR_1, u16 VAR_2, u8 *VAR_3)
{

 u8 VAR_4[128];
 u8 VAR_5[1];
 u16 VAR_6 = 0;
 u8 VAR_7, VAR_8;
 u16 VAR_9, VAR_10;
 u16 VAR_11[16][4];

 for(VAR_9=0; VAR_9<16; VAR_9++)
  for(VAR_10=0; VAR_10<4; VAR_10++)
   VAR_11[VAR_9][VAR_10]=0xFF;


 if((VAR_1 + VAR_2)>128)
 {

  FUNC_2("ReadEFuse(): Invalid offset with read bytes!!\n");
  return;
 }


 for (VAR_9 = 0; VAR_9 < 128; VAR_9++)
  VAR_4[VAR_9] = 0xFF;




 VAR_5[0] = FUNC_0(VAR_0, VAR_6);

 if(*VAR_5 != 0xFF) VAR_6++;
 while((*VAR_5 != 0xFF) && (VAR_6 < 512)){
  VAR_7 = ((*VAR_5 >> 4) & 0x0f);
  if(VAR_7 <= 0x0F){
   VAR_8 = (*VAR_5 & 0x0f);
   for(VAR_9=0; VAR_9<4; VAR_9++){
    if(!(VAR_8 & 0x01)){



     VAR_5[0] = FUNC_0(VAR_0, VAR_6); VAR_6++;

     VAR_11[VAR_7][VAR_9] = (*VAR_5 & 0xff);
     if(VAR_6 >= 512) break;



     VAR_5[0] = FUNC_0(VAR_0, VAR_6); VAR_6++;

     VAR_11[VAR_7][VAR_9] |= (((u16)*VAR_5 << 8) & 0xff00);
     if(VAR_6 >= 512) break;
    }
    VAR_8 >>= 1;
   }
  }



  VAR_5[0] = FUNC_0(VAR_0, VAR_6); VAR_6++;

  if(*VAR_5 != 0xFF && (VAR_6 < 512)) VAR_6++;
 }

 for(VAR_9=0; VAR_9<16; VAR_9++){
  for(VAR_10=0; VAR_10<4; VAR_10++){
   VAR_4[(VAR_9*8)+(VAR_10*2)]=(VAR_11[VAR_9][VAR_10] & 0xff);
   VAR_4[(VAR_9*8)+((VAR_10*2)+1)]=((VAR_11[VAR_9][VAR_10] >> 8) & 0xff);
  }
 }
 for(VAR_9=0; VAR_9<VAR_2; VAR_9++)
  VAR_3[VAR_9] = VAR_4[VAR_1+VAR_9];
}
