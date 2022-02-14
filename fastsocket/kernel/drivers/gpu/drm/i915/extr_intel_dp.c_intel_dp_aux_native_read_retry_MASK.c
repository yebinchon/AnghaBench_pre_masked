
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct intel_dp {int dummy; } ;


 int FUNC_0 (struct intel_dp*,int ,int *,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool
FUNC_2(struct intel_dp *VAR_0, uint16_t VAR_1,
          uint8_t *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;





 for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2,
            VAR_3);
  if (VAR_4 == VAR_3)
   return 1;
  FUNC_1(1);
 }

 return 0;
}
