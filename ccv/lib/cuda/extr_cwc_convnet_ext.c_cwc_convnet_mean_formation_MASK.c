
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


struct TYPE_23__ {scalar_t__ height; scalar_t__ width; } ;
typedef TYPE_3__ ccv_size_t ;
typedef int ccv_matrix_t ;
struct TYPE_22__ {double* f64; float* f32; } ;
struct TYPE_24__ {scalar_t__ cols; scalar_t__ rows; TYPE_2__ data; } ;
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
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,TYPE_4__*,int **,int) ;
 scalar_t__ FUNC_4 (TYPE_6__*,int) ;
 TYPE_4__* FUNC_5 (scalar_t__,scalar_t__,int,int ,int ) ;
 TYPE_4__* FUNC_6 (TYPE_4__*,scalar_t__,scalar_t__,int,int,int ) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ,TYPE_4__**,int) ;
 int FUNC_9 (TYPE_4__*,int **,int,int ,int ) ;
 int FUNC_10 (TYPE_4__*,int **,int,int,int,int,int) ;
 int FUNC_11 (TYPE_4__*) ;

void FUNC_12(ccv_array_t* VAR_6, ccv_size_t VAR_7, int VAR_8, int VAR_9, ccv_dense_matrix_t** VAR_10)
{
 int VAR_11, VAR_12 = 0;
 ccv_dense_matrix_t* VAR_13 = FUNC_5(VAR_7.height, VAR_7.width, VAR_8 | VAR_1, 0, 0);
 FUNC_11(VAR_13);
 ccv_dense_matrix_t* VAR_14 = *VAR_10 = FUNC_6(*VAR_10, VAR_7.height, VAR_7.width, VAR_8 | VAR_0, VAR_8 | VAR_0, 0);
 for (VAR_11 = 0; VAR_11 < VAR_6->rnum; VAR_11++)
 {
  if (VAR_11 % 23 == 0 || VAR_11 == VAR_6->rnum - 1)
   FUNC_0(VAR_3, " - compute mean activity %d / %d", VAR_11 + 1, VAR_6->rnum);
  ccv_categorized_t* VAR_15 = (ccv_categorized_t*)FUNC_4(VAR_6, VAR_11);
  ccv_dense_matrix_t* VAR_16 = 0;
  switch (VAR_15->type)
  {
   case 129:
    VAR_16 = VAR_15->matrix;
    break;
   case 128:
    FUNC_8(VAR_15->file.filename, &VAR_16, VAR_4 | VAR_5);
    break;
  }
  if (!VAR_16)
  {
   FUNC_1(VAR_2, "cannot load %s.\n", VAR_15->file.filename);
   continue;
  }
  ccv_dense_matrix_t* VAR_17 = 0;
  if (VAR_16->cols != VAR_7.width || VAR_16->rows != VAR_7.height)
  {
   int VAR_18 = (VAR_16->cols - VAR_7.width + 1) / 2;
   int VAR_19 = (VAR_16->rows - VAR_7.height + 1) / 2;
   FUNC_2(VAR_18 == 0 || VAR_19 == 0);
   FUNC_10(VAR_16, (ccv_matrix_t**)&VAR_17, VAR_0, VAR_19, VAR_18, VAR_7.height, VAR_7.width);
  } else
   FUNC_9(VAR_16, (ccv_matrix_t**)&VAR_17, VAR_0, 0, 0);
  if (VAR_15->type != 129)
   FUNC_7(VAR_16);
  FUNC_3(VAR_17, VAR_13, (ccv_matrix_t**)&VAR_13, VAR_1);
  ++VAR_12;
  FUNC_7(VAR_17);
 }
 if (VAR_9)
 {
  int VAR_20, VAR_21;
  double VAR_22 = 0.5 / VAR_12;
  double* VAR_23 = VAR_13->data.f64;
  float* VAR_24 = VAR_14->data.f32;
  for (VAR_11 = 0; VAR_11 < VAR_14->rows; VAR_11++)
  {
   for (VAR_20 = 0; VAR_20 < VAR_14->cols; VAR_20++)
    for (VAR_21 = 0; VAR_21 < VAR_8; VAR_21++)
     VAR_24[VAR_20 * VAR_8 + VAR_21] = VAR_22 * (VAR_23[VAR_20 * VAR_8 + VAR_21] + VAR_23[(VAR_13->cols - VAR_20 - 1) * VAR_8 + VAR_21]);
   VAR_24 += VAR_14->cols * VAR_8;
   VAR_23 += VAR_13->cols * VAR_8;
  }
 } else {
  double VAR_25 = 1.0 / VAR_12;
  for (VAR_11 = 0; VAR_11 < VAR_7.height * VAR_7.width * VAR_8; VAR_11++)
   VAR_14->data.f32[VAR_11] = VAR_25 * VAR_13->data.f64[VAR_11];
 }
 FUNC_7(VAR_13);
 FUNC_1(VAR_3, "\n");
}
