
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct ixgbe_hw*,char*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_5)
{
 s32 VAR_6 = VAR_0;
 u32 VAR_7 = 2000;
 u32 VAR_8;
 u32 VAR_9;


 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {




  VAR_9 = FUNC_0(VAR_5, VAR_3);
  if (!(VAR_9 & VAR_4)) {
   VAR_6 = 0;
   break;
  }
  FUNC_2(50);
 }


 if (VAR_6) {
  for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
   VAR_9 = FUNC_0(VAR_5, VAR_2);
   if (!(VAR_9 & VAR_1))
    break;

   FUNC_2(50);
  }
 } else {
  FUNC_1(VAR_5, "Software semaphore SMBI between device drivers "
             "not granted.\n");
 }

 return VAR_6;
}
