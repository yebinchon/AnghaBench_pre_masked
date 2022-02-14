
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct r8192_priv {scalar_t__ NumTotalRFPath; } ;
struct net_device {int dummy; } ;
typedef int RF90_RADIO_PATH_E ;
typedef int HT_CHANNEL_WIDTH ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_1 (struct net_device*,int ,int ,int,int) ;
 int FUNC_2 (struct net_device*,int ,int) ;

void FUNC_3(struct net_device* VAR_5 , HT_CHANNEL_WIDTH VAR_6)
{
 u8 VAR_7;
 struct r8192_priv *VAR_8 = FUNC_0(VAR_5);



 if (1)
 {

  switch(VAR_6)
  {
   case 129:



    FUNC_1(VAR_5, (RF90_RADIO_PATH_E)VAR_2, VAR_3, VAR_0|VAR_1, 0x01);
    break;
   case 128:



    FUNC_1(VAR_5, (RF90_RADIO_PATH_E)VAR_2, VAR_3, VAR_0|VAR_1, 0x00);
    break;
   default:
    ;
    break;
  }

 }
 else
 {
 for(VAR_7 = 0; VAR_7 <VAR_8->NumTotalRFPath; VAR_7++)
 {
  switch(VAR_6)
  {
   case 129:

    break;
   case 128:

    break;
   default:
    ;
    break;

  }
 }
 }

}
