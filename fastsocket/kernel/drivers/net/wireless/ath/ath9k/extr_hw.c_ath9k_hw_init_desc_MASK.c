
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath_hw {int dummy; } ;
struct ath_common {TYPE_1__* bus_ops; } ;
struct TYPE_2__ {scalar_t__ ath_bus_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 scalar_t__ FUNC_3 (struct ath_hw*) ;
 scalar_t__ FUNC_4 (struct ath_hw*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct ath_hw*,int ) ;
 int FUNC_6 (struct ath_hw*,int ,int,int ) ;
 int FUNC_7 (struct ath_hw*,int ,int) ;
 int VAR_8 ;
 struct ath_common* FUNC_8 (struct ath_hw*) ;
 int FUNC_9 (struct ath_common*,int ,char*,int) ;

__attribute__((used)) static void FUNC_10(struct ath_hw *VAR_9)
{
 struct ath_common *VAR_10 = FUNC_8(VAR_9);

 if (FUNC_0(VAR_9)) {
  u32 VAR_11;
  VAR_11 = FUNC_5(VAR_9, VAR_0);
  if (VAR_11 & (VAR_1 | VAR_4 | VAR_3)) {
   FUNC_9(VAR_10, VAR_8, "CFG Byte Swap Set 0x%x\n",
    VAR_11);
  } else {
   VAR_11 = VAR_7 | VAR_1 | VAR_4;
   FUNC_7(VAR_9, VAR_0, VAR_11);
   FUNC_9(VAR_10, VAR_8, "Setting CFG 0x%x\n",
    FUNC_5(VAR_9, VAR_0));
  }
 } else {
  if (VAR_10->bus_ops->ath_bus_type == VAR_6) {

   if (FUNC_1(VAR_9))
    FUNC_7(VAR_9, VAR_0, VAR_1 | VAR_4);
   else
    FUNC_7(VAR_9, VAR_0, VAR_5 | VAR_2);
  }







 }
}
