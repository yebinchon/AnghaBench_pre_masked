
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct r8192_priv {scalar_t__ RF_Type; scalar_t__ rf_type; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ bInHctTest; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ,char*,int,int ,int ) ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int VAR_18 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,int ,int ) ;

void FUNC_3(struct net_device* VAR_19, u8 VAR_20)
{
 int VAR_21;

 u32* VAR_22 = ((void*)0);
 u32* VAR_23 = ((void*)0);
 u16 VAR_24, VAR_25 = 0;
 struct r8192_priv *VAR_26 = FUNC_1(VAR_19);
 {
  VAR_24 = VAR_0;
  VAR_23 = VAR_12;
  if(VAR_26->rf_type == VAR_11)
  {
   VAR_25 = VAR_6;
   VAR_22 = VAR_14;
  }
  else if (VAR_26->rf_type == VAR_10)
  {
   VAR_25 = VAR_8;
   VAR_22 = VAR_16;
  }
 }

 if (VAR_20 == VAR_4)
 {
  for (VAR_21=0; VAR_21<VAR_25; VAR_21+=2)
  {
   FUNC_2(VAR_19, VAR_22[VAR_21], VAR_18, VAR_22[VAR_21+1]);
   FUNC_0(VAR_5, "i: %x, The Rtl819xUsbPHY_REGArray[0] is %x Rtl819xUsbPHY_REGArray[1] is %x \n",VAR_21, VAR_22[VAR_21], VAR_22[VAR_21+1]);
  }
 }
 else if (VAR_20 == VAR_3)
 {
  for (VAR_21=0; VAR_21<VAR_24; VAR_21+=2)
  {
   FUNC_2(VAR_19, VAR_23[VAR_21], VAR_18, VAR_23[VAR_21+1]);
   FUNC_0(VAR_5, "i:%x, The rtl819XAGCTAB_Array[0] is %x rtl819XAGCTAB_Array[1] is %x \n",VAR_21, VAR_23[VAR_21], VAR_23[VAR_21+1]);
  }
 }
 return;


}
