
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_7__ ;
typedef struct TYPE_35__ TYPE_6__ ;
typedef struct TYPE_34__ TYPE_5__ ;
typedef struct TYPE_33__ TYPE_4__ ;
typedef struct TYPE_32__ TYPE_3__ ;
typedef struct TYPE_31__ TYPE_2__ ;
typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_31__ {float min_forward_backward_error; int min_eigen; int level; int win_size; } ;
typedef TYPE_2__ ccv_tld_param_t ;
struct TYPE_32__ {float width; float height; int x; int y; } ;
typedef TYPE_3__ ccv_rect_t ;
struct TYPE_33__ {scalar_t__ cols; scalar_t__ rows; } ;
typedef TYPE_4__ ccv_dense_matrix_t ;
struct TYPE_30__ {scalar_t__ x; scalar_t__ y; } ;
struct TYPE_34__ {TYPE_1__ point; scalar_t__ status; } ;
typedef TYPE_5__ ccv_decimal_point_with_status_t ;
struct TYPE_35__ {float x; float y; } ;
typedef TYPE_6__ ccv_decimal_point_t ;
struct TYPE_36__ {scalar_t__ rnum; } ;
typedef TYPE_7__ ccv_array_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 float FUNC_0 (float*,int ,int) ;
 float FUNC_1 (TYPE_4__*,TYPE_4__*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_7__*) ;
 scalar_t__ FUNC_5 (TYPE_7__*,int) ;
 TYPE_7__* FUNC_6 (int,int,int ) ;
 int FUNC_7 (TYPE_7__*,TYPE_6__*) ;
 int FUNC_8 (int,int,int) ;
 TYPE_6__ FUNC_9 (int,int) ;
 int FUNC_10 (TYPE_4__*,TYPE_4__**,int ,float,float,int,int) ;
 TYPE_4__* FUNC_11 (int,int,int,TYPE_4__*,int ) ;
 int FUNC_12 (TYPE_4__*,TYPE_4__*,TYPE_7__*,TYPE_7__**,int ,int ,int ) ;
 TYPE_3__ FUNC_13 (int ,int ,int ,int ) ;
 float FUNC_14 (int) ;

__attribute__((used)) static ccv_rect_t FUNC_15(ccv_dense_matrix_t* VAR_4, ccv_dense_matrix_t* VAR_5, ccv_rect_t VAR_6, ccv_tld_param_t VAR_7)
{
 ccv_rect_t VAR_8 = FUNC_13(0, 0, 0, 0);
 ccv_array_t* VAR_9 = FUNC_6(sizeof(ccv_decimal_point_t), (VAR_2 - 1) * (VAR_2 - 1), 0);
 float VAR_10 = (float)VAR_6.width / VAR_2;
 float VAR_11 = (float)VAR_6.height / VAR_2;
 float VAR_12, VAR_13;
 for (VAR_12 = VAR_10 * 0.5; VAR_12 < VAR_6.width; VAR_12 += VAR_10)
  for (VAR_13 = VAR_11 * 0.5; VAR_13 < VAR_6.height; VAR_13 += VAR_11)
  {
   ccv_decimal_point_t VAR_14 = FUNC_9(VAR_6.x + VAR_12, VAR_6.y + VAR_13);
   FUNC_7(VAR_9, &VAR_14);
  }
 if (VAR_9->rnum <= 0)
 {
  FUNC_4(VAR_9);
  return VAR_8;
 }
 ccv_array_t* VAR_15 = 0;
 FUNC_12(VAR_4, VAR_5, VAR_9, &VAR_15, VAR_7.win_size, VAR_7.level, VAR_7.min_eigen);
 if (VAR_15->rnum <= 0)
 {
  FUNC_4(VAR_15);
  FUNC_4(VAR_9);
  return VAR_8;
 }
 ccv_array_t* VAR_16 = 0;
 FUNC_12(VAR_5, VAR_4, VAR_15, &VAR_16, VAR_7.win_size, VAR_7.level, VAR_7.min_eigen);

 ccv_dense_matrix_t* VAR_17 = (ccv_dense_matrix_t*)FUNC_2(FUNC_8(VAR_3, VAR_3, VAR_0 | VAR_1));
 ccv_dense_matrix_t* VAR_18 = (ccv_dense_matrix_t*)FUNC_2(FUNC_8(VAR_3, VAR_3, VAR_0 | VAR_1));
 VAR_17 = FUNC_11(VAR_3, VAR_3, VAR_0 | VAR_1, VAR_17, 0);
 VAR_18 = FUNC_11(VAR_3, VAR_3, VAR_0 | VAR_1, VAR_18, 0);
 int VAR_19, VAR_20, VAR_21, VAR_22;
 int* VAR_23 = (int*)FUNC_2(sizeof(int) * VAR_9->rnum);
 {
 float* VAR_24 = (float*)FUNC_2(sizeof(float) * VAR_9->rnum);
 float* VAR_25 = (float*)FUNC_2(sizeof(float) * VAR_9->rnum);
 for (VAR_19 = 0, VAR_21 = 0; VAR_19 < VAR_9->rnum; VAR_19++)
 {
  ccv_decimal_point_t* VAR_26 = (ccv_decimal_point_t*)FUNC_5(VAR_9, VAR_19);
  ccv_decimal_point_with_status_t* VAR_27 = (ccv_decimal_point_with_status_t*)FUNC_5(VAR_15, VAR_19);
  ccv_decimal_point_with_status_t* VAR_28 = (ccv_decimal_point_with_status_t*)FUNC_5(VAR_16, VAR_19);
  if (VAR_27->status && VAR_28->status &&
   VAR_27->point.x >= 0 && VAR_27->point.x < VAR_4->cols && VAR_27->point.y >= 0 && VAR_27->point.y < VAR_4->rows &&
   VAR_28->point.x >= 0 && VAR_28->point.x < VAR_4->cols && VAR_28->point.y >= 0 && VAR_28->point.y < VAR_4->rows)
  {
   VAR_24[VAR_21] = (VAR_28->point.x - VAR_26->x) * (VAR_28->point.x - VAR_26->x) + (VAR_28->point.y - VAR_26->y) * (VAR_28->point.y - VAR_26->y);
   FUNC_10(VAR_4, &VAR_17, 0, VAR_26->y - (VAR_3 - 1) * 0.5, VAR_26->x - (VAR_3 - 1) * 0.5, VAR_3, VAR_3);
   FUNC_10(VAR_5, &VAR_18, 0, VAR_27->point.y - (VAR_3 - 1) * 0.5, VAR_27->point.x - (VAR_3 - 1) * 0.5, VAR_3, VAR_3);
   VAR_25[VAR_21] = FUNC_1(VAR_17, VAR_18);
   VAR_23[VAR_21] = VAR_19;
   ++VAR_21;
  }
 }
 FUNC_4(VAR_16);
 if (VAR_21 == 0)
 {

  FUNC_4(VAR_15);
  FUNC_4(VAR_9);
  return VAR_8;
 }
 VAR_22 = VAR_21;
 float VAR_29 = FUNC_0(VAR_25, 0, VAR_22 - 1);
 for (VAR_19 = 0, VAR_21 = 0; VAR_19 < VAR_22; VAR_19++)
  if (VAR_25[VAR_19] > VAR_29)
  {
   VAR_24[VAR_21] = VAR_24[VAR_19];
   VAR_23[VAR_21] = VAR_23[VAR_19];
   ++VAR_21;
  }
 VAR_22 = VAR_21;
 float VAR_30 = FUNC_0(VAR_24, 0, VAR_22 - 1);
 if (VAR_30 >= VAR_7.min_forward_backward_error)
 {

  FUNC_4(VAR_15);
  FUNC_4(VAR_9);
  return VAR_8;
 }
 VAR_22 = VAR_21;
 for (VAR_19 = 0, VAR_21 = 0; VAR_19 < VAR_22; VAR_19++)
  if (VAR_24[VAR_19] <= VAR_30)
   VAR_23[VAR_21++] = VAR_23[VAR_19];
 VAR_22 = VAR_21;
 if (VAR_21 == 0)
 {

  FUNC_4(VAR_15);
  FUNC_4(VAR_9);
  return VAR_8;
 }
 }
 float VAR_31, VAR_32;
 {
 float* VAR_33 = (float*)FUNC_2(sizeof(float) * VAR_22);
 float* VAR_34 = (float*)FUNC_2(sizeof(float) * VAR_22);
 for (VAR_19 = 0; VAR_19 < VAR_22; VAR_19++)
 {
  ccv_decimal_point_t* VAR_35 = (ccv_decimal_point_t*)FUNC_5(VAR_9, VAR_23[VAR_19]);
  ccv_decimal_point_t* VAR_36 = (ccv_decimal_point_t*)FUNC_5(VAR_15, VAR_23[VAR_19]);
  VAR_33[VAR_19] = VAR_36->x - VAR_35->x;
  VAR_34[VAR_19] = VAR_36->y - VAR_35->y;
 }
 VAR_31 = FUNC_0(VAR_33, 0, VAR_22 - 1);
 VAR_32 = FUNC_0(VAR_34, 0, VAR_22 - 1);
 }
 if (VAR_22 > 1)
 {
  float* VAR_37 = (float*)FUNC_2(sizeof(float) * VAR_22 * (VAR_22 - 1) / 2);
  VAR_21 = 0;
  for (VAR_19 = 0; VAR_19 < VAR_22 - 1; VAR_19++)
  {
   ccv_decimal_point_t* VAR_38 = (ccv_decimal_point_t*)FUNC_5(VAR_9, VAR_23[VAR_19]);
   ccv_decimal_point_t* VAR_39 = (ccv_decimal_point_t*)FUNC_5(VAR_15, VAR_23[VAR_19]);
   for (VAR_20 = VAR_19 + 1; VAR_20 < VAR_22; VAR_20++)
   {
    ccv_decimal_point_t* VAR_40 = (ccv_decimal_point_t*)FUNC_5(VAR_9, VAR_23[VAR_20]);
    ccv_decimal_point_t* VAR_41 = (ccv_decimal_point_t*)FUNC_5(VAR_15, VAR_23[VAR_20]);
    VAR_37[VAR_21] = FUNC_14(((VAR_39->x - VAR_41->x) * (VAR_39->x - VAR_41->x) + (VAR_39->y - VAR_41->y) * (VAR_39->y - VAR_41->y)) /
        ((VAR_38->x - VAR_40->x) * (VAR_38->x - VAR_40->x) + (VAR_38->y - VAR_40->y) * (VAR_38->y - VAR_40->y)));
    ++VAR_21;
   }
  }
  FUNC_3(VAR_22 * (VAR_22 - 1) / 2 == VAR_21);
  float VAR_42 = FUNC_0(VAR_37, 0, VAR_22 * (VAR_22 - 1) / 2 - 1);
  VAR_8.x = (int)(VAR_6.x + VAR_31 - VAR_6.width * (VAR_42 - 1.0) * 0.5 + 0.5);
  VAR_8.y = (int)(VAR_6.y + VAR_32 - VAR_6.height * (VAR_42 - 1.0) * 0.5 + 0.5);
  VAR_8.width = (int)(VAR_6.width * VAR_42 + 0.5);
  VAR_8.height = (int)(VAR_6.height * VAR_42 + 0.5);
 } else {
  VAR_8.width = VAR_6.width;
  VAR_8.height = VAR_6.height;
  VAR_8.x = (int)(VAR_6.x + VAR_31 + 0.5);
  VAR_8.y = (int)(VAR_6.y + VAR_32 + 0.5);
 }
 FUNC_4(VAR_15);
 FUNC_4(VAR_9);
 return VAR_8;
}
