
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int features; } ;
typedef int FEATURES_T ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_1__* VAR_0 ;

bool FUNC_7(int VAR_1, int VAR_2)
{
   FEATURES_T VAR_3 = VAR_0[VAR_1].features;
   FEATURES_T VAR_4 = VAR_0[VAR_2].features;

   return
      FUNC_5(VAR_3) == FUNC_5(VAR_4) &&
      FUNC_3(VAR_3) == FUNC_3(VAR_4) &&
      FUNC_1(VAR_3) == FUNC_1(VAR_4) &&
      FUNC_0(VAR_3) == FUNC_0(VAR_4) &&
      FUNC_2(VAR_3) == FUNC_2(VAR_4) &&
      FUNC_6(VAR_3) == FUNC_6(VAR_4) &&
      FUNC_4(VAR_3) == FUNC_4(VAR_4);
}
