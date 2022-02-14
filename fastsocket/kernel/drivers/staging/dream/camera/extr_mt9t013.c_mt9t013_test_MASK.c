
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef scalar_t__ int32_t ;
typedef enum mt9t013_test_mode { ____Placeholder_mt9t013_test_mode } mt9t013_test_mode ;
struct TYPE_4__ {int addr; } ;
struct TYPE_3__ {int ttbl_size; int ttbl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 TYPE_1__ VAR_6 ;

__attribute__((used)) static int32_t FUNC_2(enum mt9t013_test_mode VAR_7)
{
 int32_t VAR_8 = 0;

 VAR_8 = FUNC_0(VAR_5->addr,
   VAR_2,
   VAR_0);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_7 == VAR_4)
  return 0;
 else {
  VAR_8 = FUNC_1(VAR_6.ttbl,
    VAR_6.ttbl_size);
  if (VAR_8 < 0)
   return VAR_8;
  VAR_8 = FUNC_0(VAR_5->addr,
    VAR_3, (uint16_t)VAR_7);
  if (VAR_8 < 0)
   return VAR_8;
 }

 VAR_8 = FUNC_0(VAR_5->addr,
   VAR_2,
   VAR_1);
 if (VAR_8 < 0)
  return VAR_8;

 return VAR_8;
}
