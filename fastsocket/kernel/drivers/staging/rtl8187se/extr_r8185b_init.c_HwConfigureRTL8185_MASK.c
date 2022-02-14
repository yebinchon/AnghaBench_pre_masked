
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*,int ,int) ;
 int FUNC_3 (struct net_device*,int ,int) ;

void
FUNC_4(
  struct net_device *VAR_10
  )
{


        u8 VAR_11 = 0;

 u8 VAR_12 = 1;
 u8 VAR_13 = 1;
 u8 VAR_14 = 1;
 u8 VAR_15;
        FUNC_3(VAR_10, VAR_2, 0x0fff);

 VAR_15 = FUNC_1(VAR_10, VAR_4);

 if(VAR_11)
  VAR_15 = VAR_15 & 0xfd;
 else
  VAR_15 = VAR_15 | 0x02;

 FUNC_2(VAR_10, VAR_4, VAR_15);


 VAR_15 = FUNC_1(VAR_10, VAR_9);
 if(VAR_12)
 {
  FUNC_2(VAR_10, VAR_3, 128);
  FUNC_2(VAR_10, VAR_5, 128);
  VAR_15 = VAR_15 & 0xfe;
 }
 else
 {
  VAR_15 = VAR_15 | 0x01 ;
 }


 FUNC_2(VAR_10, VAR_9, VAR_15);


 VAR_15 = FUNC_1(VAR_10, VAR_9 );

 if(VAR_13)
 {
  FUNC_2(VAR_10, VAR_0, 0x00);
  VAR_15 = VAR_15 & 0xfd;
 }
 else
 {
  VAR_15 = VAR_15 & (VAR_15|0x02);
 }

 FUNC_2(VAR_10, VAR_9, VAR_15);


 VAR_15 = FUNC_1(VAR_10, VAR_6);
 VAR_15 &= 0x7c;
 if( VAR_14 )
 {
  VAR_15 |= VAR_8 | VAR_7;





         FUNC_0(VAR_10, VAR_1, 0x0fff);

 }
 else
 {
 }
 FUNC_2(VAR_10, VAR_6, VAR_15);
}
