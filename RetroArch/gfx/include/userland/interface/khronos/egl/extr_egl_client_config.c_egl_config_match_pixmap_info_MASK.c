
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int features; } ;
struct TYPE_4__ {int format; } ;
typedef TYPE_1__ KHRN_IMAGE_WRAP_T ;
typedef int KHRN_IMAGE_FORMAT_T ;
typedef int FEATURES_T ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int) ;

bool FUNC_9(int VAR_2, KHRN_IMAGE_WRAP_T *VAR_3)
{
   FEATURES_T VAR_4 = VAR_1[VAR_2].features;
   KHRN_IMAGE_FORMAT_T VAR_5 = VAR_3->format;

   FUNC_8(VAR_2 >= 0 && VAR_2 < VAR_0);

   return
      FUNC_7(VAR_5) == FUNC_3(VAR_4) &&
      FUNC_6(VAR_5) == FUNC_2(VAR_4) &&
      FUNC_5(VAR_5) == FUNC_1(VAR_4) &&
      FUNC_4(VAR_5) == FUNC_0(VAR_4);
}
