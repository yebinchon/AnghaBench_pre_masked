
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct r8192_priv {scalar_t__ bTXPowerDataReadFromEEPORM; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ bInHctTest; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 int* VAR_6 ;
 int* VAR_7 ;
 int* VAR_8 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int,int,int) ;

void FUNC_3(struct net_device* VAR_9)
{
 u32 VAR_10 = 0, VAR_11 = 0;
 u32* VAR_12 = ((void*)0);
 struct r8192_priv *VAR_13 = FUNC_1(VAR_9);
  if(VAR_13->bTXPowerDataReadFromEEPORM)
 {
  FUNC_0(VAR_2, "Rtl819XMACPHY_Array_PG\n");
  VAR_10 = VAR_5;
  VAR_12 = VAR_8;

 }
 else
 {
  FUNC_0(VAR_2,"Read rtl819XMACPHY_Array\n");
  VAR_10 = VAR_3;
  VAR_12 = VAR_6;
 }
 for(VAR_11 = 0; VAR_11<VAR_10; VAR_11=VAR_11+3){
  FUNC_0(VAR_1, "The Rtl8190MACPHY_Array[0] is %x Rtl8190MACPHY_Array[1] is %x Rtl8190MACPHY_Array[2] is %x\n",
    VAR_12[VAR_11], VAR_12[VAR_11+1], VAR_12[VAR_11+2]);
  if(VAR_12[VAR_11] == 0x318)
  {
   VAR_12[VAR_11+2] = 0x00000800;


  }
  FUNC_2(VAR_9, VAR_12[VAR_11], VAR_12[VAR_11+1], VAR_12[VAR_11+2]);
 }
 return;

}
