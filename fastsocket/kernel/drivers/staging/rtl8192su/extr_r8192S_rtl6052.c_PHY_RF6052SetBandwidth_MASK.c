
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
typedef int RF90_RADIO_PATH_E ;
typedef int HT_CHANNEL_WIDTH ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct net_device*,int ,int ,int,int) ;

void FUNC_2(struct net_device* VAR_5, HT_CHANNEL_WIDTH VAR_6)
{





 {
  switch(VAR_6)
  {
   case 129:



    FUNC_1(VAR_5, (RF90_RADIO_PATH_E)VAR_3, VAR_4, VAR_0|VAR_1, 0x01);
    break;
   case 128:



    FUNC_1(VAR_5, (RF90_RADIO_PATH_E)VAR_3, VAR_4, VAR_0|VAR_1, 0x00);
    break;
   default:
    FUNC_0(VAR_2, "PHY_SetRF6052Bandwidth(): unknown Bandwidth: %#X\n",VAR_6);
    break;
  }
 }

}
