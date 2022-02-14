
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_2 (struct ixgbe_hw*,char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_9,
                                      bool VAR_10)
{
 u32 VAR_11;
 u32 VAR_12;
 u32 VAR_13;
 s32 VAR_14 = 0;


 VAR_11 = FUNC_0(VAR_9, VAR_0);
 VAR_11 |= VAR_1;
 FUNC_1(VAR_9, VAR_0, VAR_11);


 if (VAR_10) {
  if ((VAR_11 & VAR_4) ==
       VAR_2 ||
      (VAR_11 & VAR_4) ==
       VAR_3) {
   VAR_12 = 0;
   for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
    VAR_12 = FUNC_0(VAR_9, VAR_7);
    if (VAR_12 & VAR_8)
     break;
    FUNC_3(100);
   }
   if (!(VAR_12 & VAR_8)) {
    VAR_14 = VAR_6;
    FUNC_2(VAR_9, "Autonegotiation did not complete.\n");
   }
  }
 }


 FUNC_3(50);

 return VAR_14;
}
