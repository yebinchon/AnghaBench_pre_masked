
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct r8192_priv {scalar_t__ LoopbackMode; scalar_t__ bBootFromEfuse; int ReceiveConfig; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,scalar_t__) ;
 int FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (struct net_device*,scalar_t__,int) ;
 int FUNC_5 (struct net_device*,int,int) ;
 int FUNC_6 (struct net_device*,int ,int ) ;
 int FUNC_7 (struct net_device*,int ,int) ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_22)
{
 struct r8192_priv *VAR_23 = FUNC_1((struct net_device *)VAR_22);


 u16 VAR_24;
 u8 VAR_25;


 FUNC_0(VAR_4, "--->MacConfigAfterFwDownload()\n");


 VAR_24 = (VAR_0|VAR_1|VAR_19|VAR_13|VAR_14|VAR_5|
    VAR_7|VAR_18|VAR_21|VAR_8|VAR_9);

 FUNC_7(VAR_22, VAR_3, VAR_24);


 VAR_23->LoopbackMode = VAR_17;
 if(VAR_23->LoopbackMode == VAR_17)
  VAR_25 = VAR_12;
 else if (VAR_23->LoopbackMode == VAR_16 )
  VAR_25 = VAR_11;
 else
  FUNC_0(VAR_4, "Serious error: wrong loopback mode setting\n");


 FUNC_4(VAR_22, VAR_10, VAR_25);


 FUNC_6(VAR_22, VAR_15, VAR_23->ReceiveConfig);
 FUNC_0(VAR_4, "MacConfigAfterFwDownload(): Current RCR settings(%#x)\n", VAR_23->ReceiveConfig);
 VAR_25 = FUNC_3(VAR_22, 0x5C);
 FUNC_5(VAR_22, 0x5C, VAR_25|VAR_2);



 if (VAR_23->bBootFromEfuse)
 {
  u8 VAR_26;

  VAR_26 = FUNC_2(VAR_22, VAR_20+1);
  VAR_26 &= 0xFE;
  FUNC_4(VAR_22, VAR_20+1, VAR_26);
  FUNC_4(VAR_22, VAR_6+3, 0x72);

  FUNC_0(VAR_4, "EFUSE CONFIG OK\n");
 }


 FUNC_0(VAR_4, "<---MacConfigAfterFwDownload()\n");
}
