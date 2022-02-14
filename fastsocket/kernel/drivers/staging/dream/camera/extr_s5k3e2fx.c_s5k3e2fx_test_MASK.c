
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ int32_t ;
typedef enum msm_s_test_mode { ____Placeholder_msm_s_test_mode } msm_s_test_mode ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int32_t FUNC_1(enum msm_s_test_mode VAR_3)
{
 int32_t VAR_4 = 0;

 if (VAR_3 == VAR_1)
  VAR_4 = 0;
 else
  VAR_4 = FUNC_0(VAR_2->addr,
   VAR_0, (uint16_t)VAR_3);

 return VAR_4;
}
