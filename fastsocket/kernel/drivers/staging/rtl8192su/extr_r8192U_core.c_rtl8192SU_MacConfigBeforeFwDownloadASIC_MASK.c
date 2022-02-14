
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_1 (struct net_device*,scalar_t__) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,scalar_t__,int) ;
 int FUNC_5 (struct net_device*,int,int) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_22)
{
 u8 VAR_23;


 u8 VAR_24 = 20;

 FUNC_0(VAR_7, "--->MacConfigBeforeFwDownloadASIC()\n");
       VAR_23 = FUNC_1(VAR_22, VAR_15+1);
       if(VAR_23 & 0x80)
 {
        VAR_23 &= 0x3f;
              FUNC_4(VAR_22, VAR_15+1, VAR_23);
       }

 FUNC_4(VAR_22, VAR_13, 0x0);

       VAR_23 = FUNC_1(VAR_22, VAR_17+1);
       VAR_23 &= 0x73;
       FUNC_4(VAR_22, VAR_17+1, VAR_23);
       FUNC_3(1000);


 FUNC_4(VAR_22, VAR_14+1, 0x53);
 FUNC_4(VAR_22, VAR_14, 0x57);


 VAR_23 = FUNC_1(VAR_22, VAR_2);
 FUNC_4(VAR_22, VAR_2, (VAR_23|VAR_0|VAR_1));


 VAR_23 = FUNC_1(VAR_22, VAR_9);
 FUNC_4(VAR_22, VAR_9, (VAR_23|VAR_8));


 VAR_23 = FUNC_1(VAR_22, VAR_10);
 FUNC_4(VAR_22, VAR_10, (VAR_23|VAR_11));
 VAR_23 = FUNC_1(VAR_22, VAR_18+1);
 FUNC_4(VAR_22, VAR_18+1, (VAR_23|0x08));


 VAR_23 = FUNC_1(VAR_22, VAR_17+1);
 FUNC_4(VAR_22, VAR_17+1, (VAR_23|0x20));


 VAR_23 = FUNC_1(VAR_22, VAR_18+1);
 FUNC_4(VAR_22, VAR_18+1, (VAR_23& 0x68));


 VAR_23 = FUNC_1(VAR_22, VAR_4+1);
 FUNC_4(VAR_22, VAR_4+1, (VAR_23& 0xfb));


 VAR_23 = FUNC_1(VAR_22, VAR_3);
 FUNC_4(VAR_22, VAR_3, (VAR_23|0x11));


 VAR_23 = FUNC_1(VAR_22, VAR_18);
 FUNC_4(VAR_22, VAR_18, (VAR_23&0xEE));


 FUNC_4(VAR_22, VAR_15, 0x00);


 VAR_23 = FUNC_1(VAR_22, VAR_15);

 FUNC_4(VAR_22, VAR_15, (VAR_23|0xa0));


 VAR_23 = FUNC_1(VAR_22, VAR_15+1);
 FUNC_4(VAR_22, VAR_15+1, (VAR_23|0x18));


 FUNC_4(VAR_22, VAR_12, 0x02);


 VAR_23 = FUNC_1(VAR_22, VAR_17+1);
 FUNC_4(VAR_22, VAR_17+1, (VAR_23|0x08));


 VAR_23 = FUNC_1(VAR_22, VAR_17+1);
 FUNC_4(VAR_22, VAR_17+1, (VAR_23|0x80));


 VAR_23 = FUNC_1(VAR_22, VAR_15+1);
 FUNC_4(VAR_22, VAR_15+1, (VAR_23|0x80)& 0xBF);

 FUNC_4(VAR_22, VAR_6, 0xFC);
 FUNC_4(VAR_22, VAR_6+1, 0x37);


 VAR_23 = FUNC_2(VAR_22, 0x5c);
 FUNC_5(VAR_22, 0x5c, (VAR_23|VAR_5));


 VAR_23 = FUNC_1(VAR_22, VAR_15);
 FUNC_4(VAR_22, VAR_15, VAR_23&(~VAR_16));


 FUNC_5(VAR_22, 0x1c, 0x80);






 do
 {
  VAR_23 = FUNC_1(VAR_22, VAR_19);
  if((VAR_23 & VAR_21) == VAR_21)
   break;

  FUNC_3(5);
 }while(VAR_24--);

 if(VAR_24 <= 0 )
 {
  FUNC_0(VAR_7, "MacConfigBeforeFwDownloadASIC(): Polling TXDMA_INIT_VALUE timeout!! Current TCR(%#x)\n", VAR_23);
  VAR_23 = FUNC_1(VAR_22, VAR_6);
  FUNC_4(VAR_22, VAR_6, VAR_23&(~VAR_20));
  FUNC_3(2);
  FUNC_4(VAR_22, VAR_6, VAR_23|VAR_20);
 }


 FUNC_0(VAR_7, "<---MacConfigBeforeFwDownloadASIC()\n");
}
