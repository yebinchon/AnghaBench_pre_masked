
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sqlite3_stmt ;
typedef int sqlite3 ;
typedef int feature_params_insert_qs ;
typedef int classifier_params_insert_qs ;
struct TYPE_9__ {int* sx; int* sy; int* dx; int* dy; int w; int bias; } ;
typedef TYPE_3__ ccv_scd_stump_feature_t ;
struct TYPE_10__ {int count; TYPE_3__* features; int threshold; } ;
typedef TYPE_4__ ccv_scd_stump_classifier_t ;
struct TYPE_8__ {int width; int height; } ;
struct TYPE_7__ {int left; int top; int right; int bottom; } ;
struct TYPE_11__ {int count; TYPE_4__* classifiers; TYPE_2__ size; TYPE_1__ margin; } ;
typedef TYPE_5__ ccv_scd_classifier_cascade_t ;
typedef int cascade_params_insert_qs ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int ,int,int ) ;
 int FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char const*,int ,int ,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (char const*,int **) ;
 scalar_t__ FUNC_9 (int *,char const*,int,int **,int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int *) ;

void FUNC_12(ccv_scd_classifier_cascade_t* VAR_3, const char* VAR_4)
{
 sqlite3* VAR_5 = 0;
 if (VAR_1 == FUNC_8(VAR_4, &VAR_5))
 {
  const char VAR_6[] =
   "CREATE TABLE IF NOT EXISTS cascade_params "
   "(id INTEGER PRIMARY KEY ASC, count INTEGER, "
   "margin_left INTEGER, margin_top INTEGER, margin_right INTEGER, margin_bottom INTEGER, "
   "size_width INTEGER, size_height INTEGER);"
   "CREATE TABLE IF NOT EXISTS classifier_params "
   "(classifier INTEGER PRIMARY KEY ASC, count INTEGER, threshold DOUBLE);"
   "CREATE TABLE IF NOT EXISTS feature_params "
   "(classifier INTEGER, id INTEGER, "
   "sx_0 INTEGER, sy_0 INTEGER, dx_0 INTEGER, dy_0 INTEGER, "
   "sx_1 INTEGER, sy_1 INTEGER, dx_1 INTEGER, dy_1 INTEGER, "
   "sx_2 INTEGER, sy_2 INTEGER, dx_2 INTEGER, dy_2 INTEGER, "
   "sx_3 INTEGER, sy_3 INTEGER, dx_3 INTEGER, dy_3 INTEGER, "
   "bias DOUBLE, w BLOB, UNIQUE (classifier, id));";
  FUNC_0(VAR_1 == FUNC_6(VAR_5, VAR_6, 0, 0, 0));
  const char VAR_7[] =
   "REPLACE INTO cascade_params "
   "(id, count, "
   "margin_left, margin_top, margin_right, margin_bottom, "
   "size_width, size_height) VALUES "
   "(0, $count, "
   "$margin_left, $margin_top, $margin_bottom, $margin_right, "
   "$size_width, $size_height);";
  sqlite3_stmt* VAR_8 = 0;
  FUNC_0(VAR_1 == FUNC_9(VAR_5, VAR_7, sizeof(VAR_7), &VAR_8, 0));
  FUNC_3(VAR_8, 1, VAR_3->count);
  FUNC_3(VAR_8, 2, VAR_3->margin.left);
  FUNC_3(VAR_8, 3, VAR_3->margin.top);
  FUNC_3(VAR_8, 4, VAR_3->margin.right);
  FUNC_3(VAR_8, 5, VAR_3->margin.bottom);
  FUNC_3(VAR_8, 6, VAR_3->size.width);
  FUNC_3(VAR_8, 7, VAR_3->size.height);
  FUNC_0(VAR_0 == FUNC_11(VAR_8));
  FUNC_7(VAR_8);
  const char VAR_9[] =
   "REPLACE INTO classifier_params "
   "(classifier, count, threshold) VALUES "
   "($classifier, $count, $threshold);";
  sqlite3_stmt* VAR_10 = 0;
  FUNC_0(VAR_1 == FUNC_9(VAR_5, VAR_9, sizeof(VAR_9), &VAR_10, 0));
  const char VAR_11[] =
   "REPLACE INTO feature_params "
   "(classifier, id, "
   "sx_0, sy_0, dx_0, dy_0, "
   "sx_1, sy_1, dx_1, dy_1, "
   "sx_2, sy_2, dx_2, dy_2, "
   "sx_3, sy_3, dx_3, dy_3, "
   "bias, w) VALUES "
   "($classifier, $id, "
   "$sx_0, $sy_0, $dx_0, $dy_0, "
   "$sx_1, $sy_1, $dx_1, $dy_1, "
   "$sx_2, $sy_2, $dx_2, $dy_2, "
   "$sx_3, $sy_3, $dx_3, $dy_3, "
   "$bias, $w);";
  sqlite3_stmt* VAR_12 = 0;
  FUNC_0(VAR_1 == FUNC_9(VAR_5, VAR_11, sizeof(VAR_11), &VAR_12, 0));
  int VAR_13, VAR_14, VAR_15;
  for (VAR_13 = 0; VAR_13 < VAR_3->count; VAR_13++)
  {
   ccv_scd_stump_classifier_t* VAR_16 = VAR_3->classifiers + VAR_13;
   FUNC_3(VAR_10, 1, VAR_13);
   FUNC_3(VAR_10, 2, VAR_16->count);
   FUNC_2(VAR_10, 3, VAR_16->threshold);
   FUNC_0(VAR_0 == FUNC_11(VAR_10));
   FUNC_10(VAR_10);
   FUNC_4(VAR_10);
   for (VAR_14 = 0; VAR_14 < VAR_16->count; VAR_14++)
   {
    ccv_scd_stump_feature_t* VAR_17 = VAR_16->features + VAR_14;
    FUNC_3(VAR_12, 1, VAR_13);
    FUNC_3(VAR_12, 2, VAR_14);
    for (VAR_15 = 0; VAR_15 < 4; VAR_15++)
    {
     FUNC_3(VAR_12, 3 + VAR_15 * 4, VAR_17->sx[VAR_15]);
     FUNC_3(VAR_12, 4 + VAR_15 * 4, VAR_17->sy[VAR_15]);
     FUNC_3(VAR_12, 5 + VAR_15 * 4, VAR_17->dx[VAR_15]);
     FUNC_3(VAR_12, 6 + VAR_15 * 4, VAR_17->dy[VAR_15]);
    }
    FUNC_2(VAR_12, 19, VAR_17->bias);
    FUNC_1(VAR_12, 20, VAR_17->w, sizeof(float) * 32, VAR_2);
    FUNC_0(VAR_0 == FUNC_11(VAR_12));
    FUNC_10(VAR_12);
    FUNC_4(VAR_12);
   }
  }
  FUNC_7(VAR_10);
  FUNC_7(VAR_12);
  FUNC_5(VAR_5);
 }
}
