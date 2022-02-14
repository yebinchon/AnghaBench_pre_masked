
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct r8192_priv {scalar_t__ rf_chip; int* RfReg0Value; scalar_t__ rf_type; TYPE_1__* PHYRegDef; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int rf3wireOffset; } ;
typedef size_t RF90_RADIO_PATH_E ;
typedef TYPE_1__ BB_REGISTER_DEFINITION_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*) ;
 int VAR_5 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int VAR_6 ;
 int FUNC_2 (struct net_device*,int ,int,int) ;

__attribute__((used)) static void FUNC_3(struct net_device* VAR_7, RF90_RADIO_PATH_E VAR_8, u32 VAR_9, u32 VAR_10)
{
 struct r8192_priv *VAR_11 = FUNC_1(VAR_7);
 u32 VAR_12 = 0, VAR_13 = 0;
 BB_REGISTER_DEFINITION_T *VAR_14 = &VAR_11->PHYRegDef[VAR_8];

 VAR_9 &= 0x3f;
 if (VAR_11->rf_chip == VAR_4)
 {
  if (VAR_9 >= 31)
  {
   VAR_11->RfReg0Value[VAR_8] |= 0x140;
   FUNC_2(VAR_7, VAR_14->rf3wireOffset, VAR_5, (VAR_11->RfReg0Value[VAR_8] << 16));
   VAR_13 = VAR_9 - 30;
  }
  else if (VAR_9 >= 16)
  {
   VAR_11->RfReg0Value[VAR_8] |= 0x100;
   VAR_11->RfReg0Value[VAR_8] &= (~0x40);
   FUNC_2(VAR_7, VAR_14->rf3wireOffset, VAR_5, (VAR_11->RfReg0Value[VAR_8]<<16));
   VAR_13 = VAR_9 - 15;
  }
  else
   VAR_13 = VAR_9;
 }
 else
 {
  FUNC_0((VAR_1|VAR_0), "check RF type here, need to be 8256\n");
  VAR_13 = VAR_9;
 }


 VAR_12 = (VAR_10<<16) | (VAR_13&0x3f);


 FUNC_2(VAR_7, VAR_14->rf3wireOffset, VAR_5, VAR_12);


 if(VAR_9==0x0)
  VAR_11->RfReg0Value[VAR_8] = VAR_10;


  if(VAR_11->rf_chip == VAR_4)
 {
  if(VAR_9 != 0)
  {
   VAR_11->RfReg0Value[VAR_8] &= 0xebf;
   FUNC_2(
    VAR_7,
    VAR_14->rf3wireOffset,
    VAR_5,
    (VAR_11->RfReg0Value[VAR_8] << 16));
  }
 }

 return;
}
