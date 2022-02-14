
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct radeon_device*,int) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct radeon_device *VAR_3)
{
 u32 VAR_4;

 if (VAR_2 != -1 && VAR_2)
  FUNC_6(VAR_3, 1);
 VAR_4 = FUNC_0(VAR_1);
 VAR_4 |= FUNC_1(1) | FUNC_4(1);
 if (VAR_3->family == VAR_0)
  VAR_4 |= FUNC_2(1) | FUNC_3(1);
 FUNC_5(VAR_1, VAR_4);
}
