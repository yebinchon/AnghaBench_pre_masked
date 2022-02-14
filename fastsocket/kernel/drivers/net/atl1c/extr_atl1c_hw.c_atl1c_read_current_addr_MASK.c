
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct atl1c_hw {int dummy; } ;


 int FUNC_0 (struct atl1c_hw*,scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static bool FUNC_4(struct atl1c_hw *VAR_1, u8 *VAR_2)
{
 u32 VAR_3[2];

 FUNC_0(VAR_1, VAR_0, &VAR_3[0]);
 FUNC_0(VAR_1, VAR_0 + 4, &VAR_3[1]);

 *(u32 *) &VAR_2[2] = FUNC_1(VAR_3[0]);
 *(u16 *) &VAR_2[0] = FUNC_2((u16)VAR_3[1]);

 return FUNC_3(VAR_2);
}
