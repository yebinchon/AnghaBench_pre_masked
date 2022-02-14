
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct r8192_priv {scalar_t__ rf_chip; int* RfReg0Value; scalar_t__ rf_type; TYPE_1__* PHYRegDef; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int rf3wireOffset; int rfLSSIReadBack; int rfHSSIPara2; } ;
typedef size_t RF90_RADIO_PATH_E ;
typedef TYPE_1__ BB_REGISTER_DEFINITION_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct r8192_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int FUNC_3 (struct net_device*,int ,int ) ;
 int FUNC_4 (struct net_device*,int ,int,int) ;

__attribute__((used)) static u32 FUNC_5(struct net_device* VAR_10, RF90_RADIO_PATH_E VAR_11, u32 VAR_12)
{
 struct r8192_priv *VAR_13 = FUNC_1(VAR_10);
 u32 VAR_14 = 0;
 u32 VAR_15 = 0;
 BB_REGISTER_DEFINITION_T* VAR_16 = &VAR_13->PHYRegDef[VAR_11];


 VAR_12 &= 0x3f;


 if (VAR_13->rf_chip == VAR_4)
 {
  if (VAR_12 >= 31)
  {
   VAR_13->RfReg0Value[VAR_11] |= 0x140;

   FUNC_4(VAR_10, VAR_16->rf3wireOffset, VAR_8, (VAR_13->RfReg0Value[VAR_11]<<16) );

   VAR_15 = VAR_12 -30;
  }
  else if (VAR_12 >= 16)
  {
   VAR_13->RfReg0Value[VAR_11] |= 0x100;
   VAR_13->RfReg0Value[VAR_11] &= (~0x40);

   FUNC_4(VAR_10, VAR_16->rf3wireOffset, VAR_8, (VAR_13->RfReg0Value[VAR_11]<<16) );

   VAR_15 = VAR_12 - 15;
  }
  else
   VAR_15 = VAR_12;
 }
 else
 {
  FUNC_0((VAR_1|VAR_0), "check RF type here, need to be 8256\n");
  VAR_15 = VAR_12;
 }

 FUNC_4(VAR_10, VAR_16->rfHSSIPara2, VAR_5, VAR_15);


 FUNC_4(VAR_10, VAR_16->rfHSSIPara2, VAR_7, 0x0);
 FUNC_4(VAR_10, VAR_16->rfHSSIPara2, VAR_7, 0x1);



 FUNC_2(1);

 VAR_14 = FUNC_3(VAR_10, VAR_16->rfLSSIReadBack, VAR_6);



 if(VAR_13->rf_chip == VAR_4)
 {
  VAR_13->RfReg0Value[VAR_11] &= 0xebf;

  FUNC_4(
   VAR_10,
   VAR_16->rf3wireOffset,
   VAR_8,
   (VAR_13->RfReg0Value[VAR_11] << 16));
 }


 return VAR_14;

}
