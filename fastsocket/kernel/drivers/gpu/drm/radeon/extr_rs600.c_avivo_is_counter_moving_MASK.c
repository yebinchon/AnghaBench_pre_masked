
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct radeon_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static bool FUNC_1(struct radeon_device *VAR_2, int VAR_3)
{
 u32 VAR_4, VAR_5;

 VAR_4 = FUNC_0(VAR_0 + VAR_1[VAR_3]);
 VAR_5 = FUNC_0(VAR_0 + VAR_1[VAR_3]);

 if (VAR_4 != VAR_5)
  return 1;
 else
  return 0;
}
