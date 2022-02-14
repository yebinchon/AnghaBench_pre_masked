
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_6)
{
 s32 VAR_7;
 u16 VAR_8;
 u16 VAR_9;





 VAR_7 = FUNC_1(VAR_6, VAR_2, 0x0019);
 if (VAR_7)
  return VAR_7;
 VAR_7 = FUNC_1(VAR_6, VAR_1, 0xFFFF);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_2, 0x0000);
 if (VAR_7)
  return VAR_7;


 for (VAR_9 = VAR_4; VAR_9 > 0; VAR_9--) {




  VAR_7 = FUNC_0(VAR_6, VAR_5, &VAR_8);
  if (VAR_7)
   return VAR_7;

  VAR_7 = FUNC_0(VAR_6, VAR_5, &VAR_8);
  if (VAR_7)
   return VAR_7;

  if ((VAR_8 & ~VAR_3) == 0)
   break;
  FUNC_2(100);
 }


 FUNC_2(1000);



 VAR_7 = FUNC_1(VAR_6, VAR_2, 0x0019);
 if (VAR_7)
  return VAR_7;
 FUNC_2(50);
 VAR_7 = FUNC_1(VAR_6, VAR_1, 0xFFF0);
 if (VAR_7)
  return VAR_7;
 FUNC_2(50);
 VAR_7 = FUNC_1(VAR_6, VAR_1, 0xFF00);
 if (VAR_7)
  return VAR_7;
 FUNC_2(50);
 VAR_7 = FUNC_1(VAR_6, VAR_1, 0x0000);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_2, 0x0000);
 if (VAR_7)
  return VAR_7;


 for (VAR_9 = VAR_4; VAR_9 > 0; VAR_9--) {




  VAR_7 = FUNC_0(VAR_6, VAR_5, &VAR_8);
  if (VAR_7)
   return VAR_7;

  VAR_7 = FUNC_0(VAR_6, VAR_5, &VAR_8);
  if (VAR_7)
   return VAR_7;

  if (VAR_8 & VAR_3)
   break;
  FUNC_2(100);
 }
 return VAR_0;
}
