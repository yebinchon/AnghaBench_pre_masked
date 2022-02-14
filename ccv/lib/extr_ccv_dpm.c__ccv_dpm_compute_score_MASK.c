
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_11__ ;


typedef int ccv_matrix_t ;
struct TYPE_25__ {TYPE_11__* w; } ;
struct TYPE_26__ {int count; TYPE_3__* part; TYPE_1__ root; } ;
typedef TYPE_2__ ccv_dpm_root_classifier_t ;
struct TYPE_27__ {int y; int x; TYPE_11__* w; int dyy; int dxx; int dy; int dx; } ;
typedef TYPE_3__ ccv_dpm_part_classifier_t ;
struct TYPE_28__ {int rows; int cols; } ;
typedef TYPE_4__ ccv_dense_matrix_t ;
struct TYPE_24__ {int rows; int cols; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (TYPE_4__*,TYPE_4__**,int ,TYPE_4__**,int ,TYPE_4__**,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (TYPE_4__*,TYPE_11__*,TYPE_4__**,int ,int ) ;
 int FUNC_3 (TYPE_4__*,int **,int ,int ) ;
 scalar_t__ FUNC_4 (int,TYPE_4__*,int,int ,int ) ;
 scalar_t__ FUNC_5 (int,TYPE_4__*,int,int,int ) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_8(ccv_dpm_root_classifier_t* VAR_5, ccv_dense_matrix_t* VAR_6, ccv_dense_matrix_t* VAR_7, ccv_dense_matrix_t** VAR_8, ccv_dense_matrix_t** VAR_9, ccv_dense_matrix_t** VAR_10, ccv_dense_matrix_t** VAR_11)
{
 ccv_dense_matrix_t* VAR_12 = 0;
 FUNC_2(VAR_6, VAR_5->root.w, &VAR_12, 0, VAR_4);
 ccv_dense_matrix_t* VAR_13 = 0;
 FUNC_3(VAR_12, (ccv_matrix_t**)&VAR_13, 0, 0);
 FUNC_7(VAR_12);
 *VAR_8 = VAR_13;
 if (VAR_7 == 0)
  return;
 FUNC_6(VAR_13);
 int VAR_14 = (VAR_5->root.w->rows - 1) / 2, VAR_15 = (VAR_5->root.w->cols - 1) / 2;
 int VAR_16 = VAR_5->root.w->rows / 2, VAR_17 = VAR_5->root.w->cols / 2;
 int VAR_18, VAR_19, VAR_20;
 for (VAR_18 = 0; VAR_18 < VAR_5->count; VAR_18++)
 {
  ccv_dpm_part_classifier_t* VAR_21 = VAR_5->part + VAR_18;
  ccv_dense_matrix_t* VAR_22 = 0;
  FUNC_2(VAR_7, VAR_21->w, &VAR_22, 0, VAR_4);
  ccv_dense_matrix_t* VAR_23 = 0;
  FUNC_3(VAR_22, (ccv_matrix_t**)&VAR_23, 0, 0);
  FUNC_7(VAR_22);
  VAR_9[VAR_18] = VAR_10[VAR_18] = VAR_11[VAR_18] = 0;
  FUNC_1(VAR_23, &VAR_9[VAR_18], 0, &VAR_10[VAR_18], 0, &VAR_11[VAR_18], 0, VAR_21->dx, VAR_21->dy, VAR_21->dxx, VAR_21->dyy, VAR_3 | VAR_2);
  FUNC_7(VAR_23);
  int VAR_24 = (VAR_21->w->rows - 1) / 2, VAR_25 = (VAR_21->w->cols - 1) / 2;
  int VAR_26 = VAR_21->y + VAR_24 - VAR_14 * 2;
  int VAR_27 = VAR_24, VAR_28 = VAR_9[VAR_18]->rows - VAR_21->w->rows + VAR_24;
  int VAR_29 = VAR_21->x + VAR_25 - VAR_15 * 2;
  int VAR_30 = VAR_25, VAR_31 = VAR_9[VAR_18]->cols - VAR_21->w->cols + VAR_25;
  float* VAR_32 = (float*)FUNC_4(VAR_0 | VAR_1, VAR_13, VAR_14, 0, 0);
  for (VAR_20 = VAR_14; VAR_20 < VAR_13->rows - VAR_16; VAR_20++)
  {
   int VAR_33 = FUNC_0(VAR_20 * 2 + VAR_26, VAR_27, VAR_28);
   for (VAR_19 = VAR_15; VAR_19 < VAR_13->cols - VAR_17; VAR_19++)
   {
    int VAR_34 = FUNC_0(VAR_19 * 2 + VAR_29, VAR_30, VAR_31);
    VAR_32[VAR_19] -= FUNC_5(VAR_0 | VAR_1, VAR_9[VAR_18], VAR_33, VAR_34, 0);
   }
   VAR_32 += VAR_13->cols;
  }
 }
}
