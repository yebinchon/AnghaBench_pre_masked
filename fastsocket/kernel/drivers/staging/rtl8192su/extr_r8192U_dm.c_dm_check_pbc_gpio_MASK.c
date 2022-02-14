
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct r8192_priv {int bpbc_pressed; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,...) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (struct net_device*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_10)
{
 struct r8192_priv *VAR_11 = FUNC_1(VAR_10);
 u8 VAR_12;

 FUNC_3(VAR_10, VAR_9, (VAR_4 | VAR_5));

 VAR_12 = FUNC_2(VAR_10, VAR_7);
 VAR_12 &= ~(VAR_8);
 FUNC_3(VAR_10, VAR_7, VAR_12);

 VAR_12 = FUNC_2(VAR_10, VAR_6);

 FUNC_0(VAR_2, "CheckPbcGPIO - %x\n", VAR_12);


 if (VAR_12 == 0xff)
  return ;

 if (VAR_12&VAR_8)
 {


  FUNC_0(VAR_2, "CheckPbcGPIO - PBC is pressed\n");
  VAR_11->bpbc_pressed = 1;
 }



}
