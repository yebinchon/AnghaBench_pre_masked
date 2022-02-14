
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct atl1c_hw {int dummy; } ;


 int FUNC_0 (struct atl1c_hw*,int ,int,int) ;
 int VAR_0 ;

void FUNC_1(struct atl1c_hw *VAR_1, u8 *VAR_2)
{
 u32 VAR_3;





 VAR_3 = VAR_2[2] << 24 |
  VAR_2[3] << 16 |
  VAR_2[4] << 8 |
  VAR_2[5];
 FUNC_0(VAR_1, VAR_0, 0, VAR_3);

 VAR_3 = VAR_2[0] << 8 |
  VAR_2[1];
 FUNC_0(VAR_1, VAR_0, 1, VAR_3);
}
