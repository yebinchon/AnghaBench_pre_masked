
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_24__ {int u8; int f32; } ;
struct TYPE_20__ {int* dim; } ;
struct TYPE_25__ {TYPE_5__ data; TYPE_1__ info; } ;
typedef TYPE_6__ const ccv_nnc_tensor_view_t ;
typedef TYPE_6__ ccv_nnc_tensor_t ;
struct TYPE_22__ {int* dim; } ;
struct TYPE_21__ {scalar_t__* begin; scalar_t__* end; } ;
struct TYPE_26__ {TYPE_3__ stride; TYPE_2__ border; } ;
typedef TYPE_8__ ccv_nnc_hint_t ;
typedef int ccv_matrix_t ;
struct TYPE_23__ {scalar_t__ f32; } ;
struct TYPE_27__ {int rows; TYPE_4__ data; } ;
typedef TYPE_9__ ccv_dense_matrix_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__ const* const) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 TYPE_9__ FUNC_2 (int const,int const,int,int ,int ) ;
 int FUNC_3 (TYPE_9__*,TYPE_9__*,int,TYPE_9__*,int,int ,int **,int ) ;
 int FUNC_4 (int*) ;
 int FUNC_5 (scalar_t__,int ,int) ;

int FUNC_6(const ccv_nnc_tensor_view_t* const VAR_5, const ccv_nnc_tensor_t* const VAR_6, const ccv_nnc_tensor_t* const VAR_7, const ccv_nnc_hint_t VAR_8, ccv_nnc_tensor_view_t* const VAR_9)
{
 FUNC_1(!FUNC_0(VAR_5));
 FUNC_1(!FUNC_0(VAR_6));
 FUNC_1(!VAR_7 || !FUNC_0(VAR_7));
 FUNC_1(!FUNC_0(VAR_9));
 const int VAR_10 = FUNC_4(VAR_5->info.dim);
 FUNC_1(VAR_10 == VAR_4 + 1 || VAR_10 == VAR_4 + 2);
 const int* VAR_11 = (VAR_10 == VAR_4 + 1) ? VAR_5->info.dim : VAR_5->info.dim + 1;
 const int VAR_12 = FUNC_4(VAR_9->info.dim);
 FUNC_1(VAR_12 == VAR_4 + 1 || VAR_12 == VAR_4 + 2);
 const int* VAR_13 = (VAR_12 == VAR_4 + 1) ? VAR_9->info.dim : VAR_9->info.dim + 1;
 FUNC_1(VAR_8.border.begin[0] == 0 && VAR_8.border.begin[1] == 0);
 FUNC_1(VAR_8.border.end[0] == 0 && VAR_8.border.end[1] == 0);
 FUNC_1(VAR_11[0] == VAR_13[0]);
 FUNC_1(VAR_11[1] == VAR_13[1]);
 FUNC_1(VAR_8.stride.dim[0] <= 1 && VAR_8.stride.dim[1] <= 1);
 ccv_dense_matrix_t VAR_14 = FUNC_2(VAR_11[0] * VAR_11[1], VAR_11[2], VAR_0 | VAR_2, VAR_5->data.u8, 0);
 ccv_dense_matrix_t VAR_15 = FUNC_2(VAR_13[0] * VAR_13[1], VAR_13[2], VAR_0 | VAR_2, VAR_9->data.u8, 0);

 int VAR_16;
 if (VAR_7)
  for (VAR_16 = 0; VAR_16 < VAR_15.rows; VAR_16++)
   FUNC_5(VAR_15.data.f32 + VAR_16 * VAR_13[2], VAR_7->data.f32, sizeof(float) * VAR_13[2]);
 ccv_dense_matrix_t* VAR_17 = &VAR_15;
 ccv_dense_matrix_t VAR_18 = FUNC_2(VAR_13[2], VAR_11[2], VAR_0 | VAR_2, VAR_6->data.u8, 0);
 if (VAR_7)
  FUNC_3(&VAR_14, &VAR_18, 1, VAR_17, 1, VAR_1, (ccv_matrix_t**)&VAR_17, 0);
 else
  FUNC_3(&VAR_14, &VAR_18, 1, 0, 0, VAR_1, (ccv_matrix_t**)&VAR_17, 0);
 return VAR_3;
}
