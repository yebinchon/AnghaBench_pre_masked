
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct atl1c_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct atl1c_hw*,int ,int *) ;
 int FUNC_1 (struct atl1c_hw*,int ,int ) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct atl1c_hw *VAR_2, u16 VAR_3, u16 *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_0, VAR_3);
 if (FUNC_2(VAR_5))
  return VAR_5;
 else
  VAR_5 = FUNC_0(VAR_2, VAR_1, VAR_4);

 return VAR_5;
}
