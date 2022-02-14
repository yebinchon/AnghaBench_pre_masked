
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_3)
{
 s32 VAR_4 = 0;
 u16 VAR_5, VAR_6;


 for (VAR_5 = VAR_2; VAR_5 > 0; VAR_5--) {
  VAR_4 = FUNC_0(VAR_3, VAR_1, &VAR_6);
  if (VAR_4)
   break;
  VAR_4 = FUNC_0(VAR_3, VAR_1, &VAR_6);
  if (VAR_4)
   break;
  if (VAR_6 & VAR_0)
   break;
  FUNC_1(100);
 }




 return VAR_4;
}
