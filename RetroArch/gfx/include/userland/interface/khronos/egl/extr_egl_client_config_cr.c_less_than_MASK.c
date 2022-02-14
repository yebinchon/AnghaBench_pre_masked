
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int features; } ;
typedef int FEATURES_T ;
typedef scalar_t__ EGLint ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static bool FUNC_9(int VAR_1, int VAR_2, bool VAR_3, bool VAR_4, bool VAR_5, bool VAR_6)
{
   FEATURES_T VAR_7 = VAR_0[VAR_1].features;
   FEATURES_T VAR_8 = VAR_0[VAR_2].features;

   EGLint VAR_9 = FUNC_2(VAR_7);
   EGLint VAR_10 = FUNC_2(VAR_8);

   EGLint VAR_11 = FUNC_6(VAR_7);
   EGLint VAR_12 = FUNC_6(VAR_8);

   EGLint VAR_13 = FUNC_3(VAR_7);
   EGLint VAR_14 = FUNC_3(VAR_8);

   EGLint VAR_15 = FUNC_8(VAR_7);
   EGLint VAR_16 = FUNC_8(VAR_8);

   EGLint VAR_17 = FUNC_5(VAR_7);
   EGLint VAR_18 = FUNC_5(VAR_8);

   int VAR_19 = 0;
   int VAR_20 = 0;

   if (VAR_3) {
      VAR_19 += FUNC_7(VAR_7);
      VAR_20 += FUNC_7(VAR_8);
   }
   if (VAR_4) {
      VAR_19 += FUNC_4(VAR_7);
      VAR_20 += FUNC_4(VAR_8);
   }
   if (VAR_5) {
      VAR_19 += FUNC_1(VAR_7);
      VAR_20 += FUNC_1(VAR_8);
   }
   if (VAR_6) {
      VAR_19 += FUNC_0(VAR_7);
      VAR_20 += FUNC_0(VAR_8);
   }

   return VAR_19 > VAR_20 || (VAR_19 == VAR_20 &&
      (VAR_9 < VAR_10 || (VAR_9 == VAR_10 &&
      (VAR_11 < VAR_12 || (VAR_11 == VAR_12 &&
      (VAR_13 < VAR_14 || (VAR_13 == VAR_14 &&
      (VAR_15 < VAR_16 || (VAR_15 == VAR_16 &&
      (VAR_17 < VAR_18))))))))));
}
