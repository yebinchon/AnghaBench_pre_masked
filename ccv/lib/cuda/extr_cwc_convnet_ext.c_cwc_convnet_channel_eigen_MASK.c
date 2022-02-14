
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


struct TYPE_23__ {int height; int width; } ;
typedef TYPE_3__ ccv_size_t ;
typedef int ccv_matrix_t ;
struct TYPE_22__ {double* f32; } ;
struct TYPE_24__ {int rows; int cols; TYPE_2__ data; int type; } ;
typedef TYPE_4__ ccv_dense_matrix_t ;
struct TYPE_21__ {int filename; } ;
struct TYPE_25__ {int type; TYPE_1__ file; TYPE_4__* matrix; } ;
typedef TYPE_5__ ccv_categorized_t ;
struct TYPE_26__ {int rnum; } ;
typedef TYPE_6__ ccv_array_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_6__*,int) ;
 TYPE_4__ FUNC_6 (int,int,int,double*,int ) ;
 int FUNC_7 (TYPE_4__*,TYPE_4__**,TYPE_4__**,int,int) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int ,TYPE_4__**,int) ;
 int FUNC_10 (TYPE_4__*,int **,int ,int ,int ) ;
 int FUNC_11 (TYPE_4__*,int **,int ,int,int,int,int) ;
 int FUNC_12 (double*,int ,int) ;

void FUNC_13(ccv_array_t* VAR_7, ccv_dense_matrix_t* VAR_8, ccv_size_t VAR_9, int VAR_10, ccv_dense_matrix_t** VAR_11, ccv_dense_matrix_t** VAR_12)
{
 FUNC_4(VAR_10 == 3);
 double* VAR_13 = (double*)FUNC_3(sizeof(double) * VAR_10);
 FUNC_12(VAR_13, 0, sizeof(double) * VAR_10);
 FUNC_4(FUNC_0(VAR_8->type) == VAR_10);
 FUNC_4(VAR_8->rows == VAR_9.height);
 FUNC_4(VAR_8->cols == VAR_9.width);
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18 = 0;
 for (VAR_14 = 0; VAR_14 < VAR_9.height * VAR_9.width; VAR_14++)
  for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++)
   VAR_13[VAR_16] += VAR_8->data.f32[VAR_14 * VAR_10 + VAR_16];
 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
  VAR_13[VAR_14] = VAR_13[VAR_14] / (VAR_9.height * VAR_9.width);
 double* VAR_19 = (double*)FUNC_3(sizeof(double) * VAR_10 * VAR_10);
 FUNC_12(VAR_19, 0, sizeof(double) * VAR_10 * VAR_10);
 for (VAR_17 = 0; VAR_17 < VAR_7->rnum; VAR_17++)
 {
  if (VAR_17 % 23 == 0 || VAR_17 == VAR_7->rnum - 1)
   FUNC_1(VAR_4, " - compute covariance matrix for data augmentation (color gain) %d / %d", VAR_17 + 1, VAR_7->rnum);
  ccv_categorized_t* VAR_20 = (ccv_categorized_t*)FUNC_5(VAR_7, VAR_17);
  ccv_dense_matrix_t* VAR_21 = 0;
  switch (VAR_20->type)
  {
   case 129:
    VAR_21 = VAR_20->matrix;
    break;
   case 128:
    FUNC_9(VAR_20->file.filename, &VAR_21, VAR_5 | VAR_6);
    break;
  }
  if (!VAR_21)
  {
   FUNC_2(VAR_3, "cannot load %s.\n", VAR_20->file.filename);
   continue;
  }
  ccv_dense_matrix_t* VAR_22 = 0;
  if (VAR_21->cols != VAR_9.width || VAR_21->rows != VAR_9.height)
  {
   int VAR_23 = (VAR_21->cols - VAR_9.width + 1) / 2;
   int VAR_24 = (VAR_21->rows - VAR_9.height + 1) / 2;
   FUNC_4(VAR_23 == 0 || VAR_24 == 0);
   FUNC_11(VAR_21, (ccv_matrix_t**)&VAR_22, VAR_0, VAR_24, VAR_23, VAR_9.height, VAR_9.width);
  } else
   FUNC_10(VAR_21, (ccv_matrix_t**)&VAR_22, VAR_0, 0, 0);
  if (VAR_20->type != 129)
   FUNC_8(VAR_21);
  for (VAR_14 = 0; VAR_14 < VAR_9.width * VAR_9.height; VAR_14++)
   for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++)
    for (VAR_16 = VAR_15; VAR_16 < VAR_10; VAR_16++)
     VAR_19[VAR_15 * VAR_10 + VAR_16] += (VAR_22->data.f32[VAR_14 * VAR_10 + VAR_15] - VAR_13[VAR_15]) * (VAR_22->data.f32[VAR_14 * VAR_10 + VAR_16] - VAR_13[VAR_16]);
  ++VAR_18;
  FUNC_8(VAR_22);
 }
 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
  for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++)
   VAR_19[VAR_14 * VAR_10 + VAR_15] = VAR_19[VAR_15 * VAR_10 + VAR_14];
 double VAR_25 = 1.0 / ((double)VAR_18 * VAR_9.height * VAR_9.width);
 for (VAR_14 = 0; VAR_14 < VAR_10; VAR_14++)
  for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++)
   VAR_19[VAR_14 * VAR_10 + VAR_15] *= VAR_25;
 ccv_dense_matrix_t VAR_26 = FUNC_6(3, 3, VAR_1 | VAR_2, VAR_19, 0);
 FUNC_7(&VAR_26, VAR_11, VAR_12, VAR_1, 1e-8);
 FUNC_2(VAR_4, "\n");
}
