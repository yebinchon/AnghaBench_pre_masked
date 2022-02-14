
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct r8192_priv {scalar_t__ NumTotalRFPath; } ;
struct net_device {int dummy; } ;
typedef int HT_CHANNEL_WIDTH ;


 int VAR_0 ;


 int FUNC_0 (int ,char*,...) ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;

void FUNC_2(struct net_device* VAR_1 ,HT_CHANNEL_WIDTH VAR_2)
{
 u8 VAR_3;
 struct r8192_priv *VAR_4 = FUNC_1(VAR_1);


 for(VAR_3 = 0; VAR_3 <VAR_4->NumTotalRFPath; VAR_3++)
 {
  switch(VAR_2)
  {
   case 129:

    break;
   case 128:
    FUNC_0(VAR_0, "SetChannelBandwidth8190Pci():8225 does not support 40M mode\n");
    break;
   default:
    FUNC_0(VAR_0, "PHY_SetRF8225Bandwidth(): unknown Bandwidth: %#X\n",VAR_2 );
    break;

  }
 }

}
