
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef int feature_params_qs ;
typedef int classifier_params_qs ;
struct TYPE_5__ {int* sx; int* sy; int* dx; int* dy; float bias; int w; } ;
typedef TYPE_1__ ccv_scd_stump_feature_t ;
struct TYPE_6__ {int count; float threshold; TYPE_1__* features; } ;
typedef TYPE_2__ ccv_scd_stump_classifier_t ;
struct TYPE_7__ {int count; TYPE_2__* classifiers; int size; int margin; } ;
typedef TYPE_3__ ccv_scd_classifier_cascade_t ;
typedef int cascade_params_qs ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,int,int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,void const*,int) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (char const*,int **) ;
 scalar_t__ FUNC_13 (int *,char const*,int,int **,int ) ;
 scalar_t__ FUNC_14 (int *) ;

ccv_scd_classifier_cascade_t* FUNC_15(const char* VAR_2)
{
 int VAR_3;
 sqlite3* VAR_4 = 0;
 ccv_scd_classifier_cascade_t* VAR_5 = 0;
 if (VAR_0 == FUNC_12(VAR_2, &VAR_4))
 {
  const char VAR_6[] =
   "SELECT count, "
   "margin_left, margin_top, margin_right, margin_bottom, "
   "size_width, size_height FROM cascade_params WHERE id = 0;";
  sqlite3_stmt* VAR_7 = 0;
  if (VAR_0 == FUNC_13(VAR_4, VAR_6, sizeof(VAR_6), &VAR_7, 0))
  {
   if (FUNC_14(VAR_7) == VAR_1)
   {
    VAR_5 = (ccv_scd_classifier_cascade_t*)FUNC_2(sizeof(ccv_scd_classifier_cascade_t));
    VAR_5->count = FUNC_10(VAR_7, 0);
    VAR_5->classifiers = (ccv_scd_stump_classifier_t*)FUNC_1(VAR_5->count, sizeof(ccv_scd_stump_classifier_t));
    VAR_5->margin = FUNC_3(FUNC_10(VAR_7, 1), FUNC_10(VAR_7, 2), FUNC_10(VAR_7, 3), FUNC_10(VAR_7, 4));
    VAR_5->size = FUNC_4(FUNC_10(VAR_7, 5), FUNC_10(VAR_7, 6));
   }
   FUNC_11(VAR_7);
  }
  if (VAR_5)
  {
   const char VAR_8[] =
    "SELECT classifier, count, threshold FROM classifier_params ORDER BY classifier ASC;";
   sqlite3_stmt* VAR_9 = 0;
   if (VAR_0 == FUNC_13(VAR_4, VAR_8, sizeof(VAR_8), &VAR_9, 0))
   {
    while (FUNC_14(VAR_9) == VAR_1)
     if (FUNC_10(VAR_9, 0) < VAR_5->count)
     {
      ccv_scd_stump_classifier_t* VAR_10 = VAR_5->classifiers + FUNC_10(VAR_9, 0);
      VAR_10->count = FUNC_10(VAR_9, 1);
      VAR_10->features = (ccv_scd_stump_feature_t*)FUNC_2(sizeof(ccv_scd_stump_feature_t) * VAR_10->count);
      VAR_10->threshold = (float)FUNC_9(VAR_9, 2);
     }
    FUNC_11(VAR_9);
   }
   const char VAR_11[] =
    "SELECT classifier, id, "
    "sx_0, sy_0, dx_0, dy_0, "
    "sx_1, sy_1, dx_1, dy_1, "
    "sx_2, sy_2, dx_2, dy_2, "
    "sx_3, sy_3, dx_3, dy_3, "
    "bias, w FROM feature_params ORDER BY classifier, id ASC;";
   sqlite3_stmt* VAR_12 = 0;
   if (VAR_0 == FUNC_13(VAR_4, VAR_11, sizeof(VAR_11), &VAR_12, 0))
   {
    while (FUNC_14(VAR_12) == VAR_1)
     if (FUNC_10(VAR_12, 0) < VAR_5->count)
     {
      ccv_scd_stump_classifier_t* VAR_13 = VAR_5->classifiers + FUNC_10(VAR_12, 0);
      if (FUNC_10(VAR_12, 1) < VAR_13->count)
      {
       ccv_scd_stump_feature_t* VAR_14 = VAR_13->features + FUNC_10(VAR_12, 1);
       for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
       {
        VAR_14->sx[VAR_3] = FUNC_10(VAR_12, 2 + VAR_3 * 4);
        VAR_14->sy[VAR_3] = FUNC_10(VAR_12, 3 + VAR_3 * 4);
        VAR_14->dx[VAR_3] = FUNC_10(VAR_12, 4 + VAR_3 * 4);
        VAR_14->dy[VAR_3] = FUNC_10(VAR_12, 5 + VAR_3 * 4);
       }
       VAR_14->bias = (float)FUNC_9(VAR_12, 18);
       int VAR_15 = FUNC_8(VAR_12, 19);
       FUNC_0(VAR_15 == 32 * sizeof(float));
       const void* VAR_16 = FUNC_7(VAR_12, 19);
       FUNC_5(VAR_14->w, VAR_16, sizeof(float) * 32);
      }
     }
    FUNC_11(VAR_12);
   }
  }
  FUNC_6(VAR_4);
 }
 return VAR_5;
}
