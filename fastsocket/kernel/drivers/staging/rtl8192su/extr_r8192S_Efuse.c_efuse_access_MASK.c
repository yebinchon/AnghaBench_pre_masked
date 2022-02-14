
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*,int ,unsigned char*) ;
 int FUNC_1 (struct net_device*,int,int,int*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*,int,int) ;

void FUNC_5(struct net_device* VAR_3, u8 VAR_4,u16 VAR_5, u8 VAR_6, u8 *VAR_7)
{
 u8 VAR_8,VAR_9;
 u32 VAR_10 = 0;

 if(VAR_5>0x200) return;



 VAR_8 = FUNC_3(VAR_3,VAR_2+1);
 VAR_9 = VAR_8|0x20;

 if(VAR_9!= VAR_8){

  FUNC_4(VAR_3, VAR_2+1, VAR_9);
 }




 FUNC_4(VAR_3, VAR_1+3, (FUNC_3(VAR_3, VAR_1+3)|0x80));
 FUNC_4(VAR_3, VAR_0, (FUNC_3(VAR_3, VAR_0)|0x03));
 for(VAR_10=0;VAR_10<VAR_6;VAR_10++){
  FUNC_1(VAR_3,VAR_4, VAR_5+VAR_10 , VAR_7+VAR_10);

 }

 FUNC_4(VAR_3, VAR_1+3, FUNC_3(VAR_3, VAR_1+3)&0x7f);
 FUNC_4(VAR_3, VAR_0, FUNC_3(VAR_3, VAR_0)&0xfd);


 if(VAR_9 != VAR_8) FUNC_4(VAR_3, 0x10250003, VAR_8);

}
