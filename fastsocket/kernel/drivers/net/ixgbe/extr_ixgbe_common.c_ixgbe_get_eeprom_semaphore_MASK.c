
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_2 (struct ixgbe_hw*,char*) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static s32 FUNC_5(struct ixgbe_hw *VAR_4)
{
 s32 VAR_5 = VAR_0;
 u32 VAR_6 = 2000;
 u32 VAR_7;
 u32 VAR_8;


 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {




  VAR_8 = FUNC_0(VAR_4, VAR_1);
  if (!(VAR_8 & VAR_2)) {
   VAR_5 = 0;
   break;
  }
  FUNC_4(50);
 }

 if (VAR_7 == VAR_6) {
  FUNC_2(VAR_4, "Driver can't access the Eeprom - SMBI Semaphore "
         "not granted.\n");






  FUNC_3(VAR_4);

  FUNC_4(50);





  VAR_8 = FUNC_0(VAR_4, VAR_1);
  if (!(VAR_8 & VAR_2))
   VAR_5 = 0;
 }


 if (VAR_5 == 0) {
  for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
   VAR_8 = FUNC_0(VAR_4, VAR_1);


   VAR_8 |= VAR_3;
   FUNC_1(VAR_4, VAR_1, VAR_8);





   VAR_8 = FUNC_0(VAR_4, VAR_1);
   if (VAR_8 & VAR_3)
    break;

   FUNC_4(50);
  }





  if (VAR_7 >= VAR_6) {
   FUNC_2(VAR_4, "SWESMBI Software EEPROM semaphore "
          "not granted.\n");
   FUNC_3(VAR_4);
   VAR_5 = VAR_0;
  }
 } else {
  FUNC_2(VAR_4, "Software semaphore SMBI between device drivers "
         "not granted.\n");
 }

 return VAR_5;
}
