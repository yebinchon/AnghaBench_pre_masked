
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct r8192_priv {scalar_t__ CCKPresentAttentuation; TYPE_2__* cck_txbbgain_ch14_table; TYPE_1__* cck_txbbgain_table; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int* ccktxbb_valuearray; } ;
struct TYPE_3__ {int* ccktxbb_valuearray; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct r8192_priv* FUNC_0 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct net_device*,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_6, bool VAR_7)
{
 u32 VAR_8;
 struct r8192_priv *VAR_9 = FUNC_0(VAR_6);

 VAR_8 = 0;
 if(!VAR_7){

  VAR_8 = (u32)(VAR_9->cck_txbbgain_table[(u8)(VAR_9->CCKPresentAttentuation)].ccktxbb_valuearray[0] +
     (VAR_9->cck_txbbgain_table[(u8)(VAR_9->CCKPresentAttentuation)].ccktxbb_valuearray[1]<<8)) ;

  FUNC_1(VAR_6, VAR_4,VAR_1, VAR_8);

  VAR_8 = 0;
  VAR_8 = (u32)(VAR_9->cck_txbbgain_table[(u8)(VAR_9->CCKPresentAttentuation)].ccktxbb_valuearray[2] +
     (VAR_9->cck_txbbgain_table[(u8)(VAR_9->CCKPresentAttentuation)].ccktxbb_valuearray[3]<<8) +
     (VAR_9->cck_txbbgain_table[(u8)(VAR_9->CCKPresentAttentuation)].ccktxbb_valuearray[4]<<16 )+
     (VAR_9->cck_txbbgain_table[(u8)(VAR_9->CCKPresentAttentuation)].ccktxbb_valuearray[5]<<24));
  FUNC_1(VAR_6, VAR_5,VAR_0, VAR_8);

  VAR_8 = 0;
  VAR_8 = (u32)(VAR_9->cck_txbbgain_table[(u8)(VAR_9->CCKPresentAttentuation)].ccktxbb_valuearray[6] +
     (VAR_9->cck_txbbgain_table[(u8)(VAR_9->CCKPresentAttentuation)].ccktxbb_valuearray[7]<<8)) ;

  FUNC_1(VAR_6, VAR_3,VAR_2, VAR_8);
 }
 else
 {
  VAR_8 = (u32)(VAR_9->cck_txbbgain_ch14_table[(u8)(VAR_9->CCKPresentAttentuation)].ccktxbb_valuearray[0] +
     (VAR_9->cck_txbbgain_ch14_table[(u8)(VAR_9->CCKPresentAttentuation)].ccktxbb_valuearray[1]<<8)) ;

  FUNC_1(VAR_6, VAR_4,VAR_1, VAR_8);

  VAR_8 = 0;
  VAR_8 = (u32)(VAR_9->cck_txbbgain_ch14_table[(u8)(VAR_9->CCKPresentAttentuation)].ccktxbb_valuearray[2] +
     (VAR_9->cck_txbbgain_ch14_table[(u8)(VAR_9->CCKPresentAttentuation)].ccktxbb_valuearray[3]<<8) +
     (VAR_9->cck_txbbgain_ch14_table[(u8)(VAR_9->CCKPresentAttentuation)].ccktxbb_valuearray[4]<<16 )+
     (VAR_9->cck_txbbgain_ch14_table[(u8)(VAR_9->CCKPresentAttentuation)].ccktxbb_valuearray[5]<<24));
  FUNC_1(VAR_6, VAR_5,VAR_0, VAR_8);

  VAR_8 = 0;
  VAR_8 = (u32)(VAR_9->cck_txbbgain_ch14_table[(u8)(VAR_9->CCKPresentAttentuation)].ccktxbb_valuearray[6] +
     (VAR_9->cck_txbbgain_ch14_table[(u8)(VAR_9->CCKPresentAttentuation)].ccktxbb_valuearray[7]<<8)) ;

  FUNC_1(VAR_6, VAR_3,VAR_2, VAR_8);
 }


}
