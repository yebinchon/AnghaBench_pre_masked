
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,char*) ;
 int FUNC_2 (scalar_t__*) ;
 int FUNC_3 (struct ixgbe_hw*,scalar_t__*) ;
 int FUNC_4 (struct ixgbe_hw*,scalar_t__*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static s32 FUNC_6(struct ixgbe_hw *VAR_4)
{
 s32 VAR_5 = 0;
 u32 VAR_6 = 0;
 u32 VAR_7 = FUNC_0(VAR_4, VAR_1);
 u32 VAR_8 = 10;
 bool VAR_9 = 1;

 FUNC_4(VAR_4, &VAR_7);



 FUNC_5(VAR_2);



 for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++) {
  VAR_7 = FUNC_0(VAR_4, VAR_1);
  VAR_9 = FUNC_2(&VAR_7);

  FUNC_5(1);
  if (VAR_9 == 0)
   break;
 }

 if (VAR_9 == 1) {
  FUNC_1(VAR_4, "I2C ack was not received.\n");
  VAR_5 = VAR_0;
 }

 FUNC_3(VAR_4, &VAR_7);


 FUNC_5(VAR_3);

 return VAR_5;
}
