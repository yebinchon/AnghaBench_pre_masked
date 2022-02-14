
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct atl2_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ FUNC_0 (struct atl2_hw*,int ) ;
 int FUNC_1 (struct atl2_hw*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct atl2_hw*,int ,int*) ;
 int FUNC_3 (struct atl2_hw*,int ,int*) ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;

__attribute__((used)) static s32 FUNC_7(struct atl2_hw *VAR_7)
{
 u32 VAR_8;
 u16 VAR_9;
 int VAR_10;


 FUNC_2(VAR_7, VAR_4, &VAR_9);
 if ((VAR_9 &
  (VAR_1|VAR_2|VAR_0)) !=
  (VAR_1|VAR_2|VAR_0)) {
  VAR_9 |=
   (VAR_1|VAR_2|VAR_0);
  FUNC_3(VAR_7, VAR_4, &VAR_9);
 }
 FUNC_1(VAR_7, VAR_6, VAR_3);
 FUNC_6();
 FUNC_5(1);


 for (VAR_10 = 0; VAR_10 < 10; VAR_10++) {
  VAR_8 = FUNC_0(VAR_7, VAR_5);
  if (!VAR_8)
   break;
  FUNC_5(1);
  FUNC_4();
 }

 if (VAR_8)
  return VAR_8;

 return 0;
}
