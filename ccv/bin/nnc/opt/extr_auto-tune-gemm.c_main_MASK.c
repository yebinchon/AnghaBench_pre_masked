
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int dsfmt_t ;
struct TYPE_11__ {int* f32; } ;
struct TYPE_12__ {TYPE_1__ data; } ;
typedef TYPE_2__ ccv_nnc_tensor_t ;
struct TYPE_13__ {int backend; int algorithm; } ;
typedef TYPE_3__ ccv_nnc_cmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int,...) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,...) ;
 TYPE_3__ FUNC_3 (int ,int ,int ,int ) ;
 TYPE_3__ FUNC_4 (TYPE_3__,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_3__,int ,int ,int ,int ,int ) ;
 int FUNC_6 () ;
 int VAR_4 ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int) ;
 unsigned int FUNC_12 () ;
 int FUNC_13 (char*,int,...) ;

int FUNC_14(int VAR_5, char** VAR_6)
{
 FUNC_6();
 ccv_nnc_tensor_t* VAR_7 = FUNC_8(0, FUNC_1(VAR_2), 0);
 ccv_nnc_tensor_t* VAR_8 = FUNC_8(0, FUNC_1(VAR_3), 0);
 ccv_nnc_cmd_t VAR_9 = FUNC_3(VAR_1, 0, FUNC_0(VAR_3), 0);
 ccv_nnc_tensor_t* VAR_10 = FUNC_8(0, FUNC_1(VAR_3, VAR_2), 0);
 ccv_nnc_tensor_t* VAR_11 = FUNC_8(0, FUNC_1(VAR_3), 0);

 dsfmt_t VAR_12;
 FUNC_10(&VAR_12, 0);
 int VAR_13;
 for (VAR_13 = 0; VAR_13 < VAR_2 * VAR_3; VAR_13++)
  VAR_10->data.f32[VAR_13] = FUNC_9(&VAR_12) / VAR_2;
 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++)
  VAR_7->data.f32[VAR_13] = FUNC_9(&VAR_12);
 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++)
  VAR_11->data.f32[VAR_13] = (float)VAR_13 / VAR_3;
 unsigned int VAR_14 = FUNC_12();
 FUNC_5(VAR_9, VAR_4, 0, FUNC_2(VAR_7, VAR_10, VAR_11), FUNC_2(VAR_8), 0);
 VAR_14 = FUNC_12() - VAR_14;
 FUNC_13("forw %u ms for ref\n", VAR_14);
 ccv_nnc_tensor_t* VAR_15 = FUNC_8(0, FUNC_1(VAR_3), 0);
 ccv_nnc_cmd_t VAR_16 = FUNC_4(VAR_9, 0, VAR_4, 0, FUNC_2(VAR_7, VAR_10, VAR_11), FUNC_2(VAR_15), 0);
 VAR_14 = FUNC_12();
 FUNC_5(VAR_16, VAR_4, 0, FUNC_2(VAR_7, VAR_10, VAR_11), FUNC_2(VAR_15), 0);
 VAR_14 = FUNC_12() - VAR_14;
 FUNC_13("forw %u ms for auto-tuned, backend %d, algorithm %d\n", VAR_14, VAR_16.backend, VAR_16.algorithm);
 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++)
  if (FUNC_11(VAR_8->data.f32[VAR_13] - VAR_15->data.f32[VAR_13]) > 1e-5)
   FUNC_13("forw output[%d]: %f %f\n", VAR_13, VAR_8->data.f32[VAR_13], VAR_15->data.f32[VAR_13]);
 ccv_nnc_tensor_t* VAR_17 = FUNC_8(0, FUNC_1(VAR_3, VAR_2), 0);
 ccv_nnc_tensor_t* VAR_18 = FUNC_8(0, FUNC_1(VAR_2), 0);
 ccv_nnc_cmd_t VAR_19 = FUNC_3(VAR_0, 0, FUNC_0(VAR_3), 0);
 VAR_14 = FUNC_12();
 FUNC_5(VAR_19, VAR_4, 0, FUNC_2(VAR_8, VAR_7, VAR_10), FUNC_2(VAR_18, VAR_17, VAR_11), 0);
 VAR_14 = FUNC_12() - VAR_14;
 FUNC_13("back %u ms for ref\n", VAR_14);
 ccv_nnc_tensor_t* VAR_20 = FUNC_8(0, FUNC_1(VAR_3, VAR_2), 0);
 ccv_nnc_tensor_t* VAR_21 = FUNC_8(0, FUNC_1(VAR_2), 0);
 ccv_nnc_tensor_t* VAR_22 = FUNC_8(0, FUNC_1(VAR_3), 0);
 ccv_nnc_cmd_t VAR_23 = FUNC_4(VAR_19, 0, VAR_4, 0, FUNC_2(VAR_8, VAR_7, VAR_10), FUNC_2(VAR_21, VAR_20, VAR_22), 0);
 VAR_14 = FUNC_12();
 FUNC_5(VAR_23, VAR_4, 0, FUNC_2(VAR_8, VAR_7, VAR_10), FUNC_2(VAR_21, VAR_20, VAR_22), 0);
 VAR_14 = FUNC_12() - VAR_14;
 FUNC_13("back %u ms for auto-tuned, backend %d, algorithm %d\n", VAR_14, VAR_23.backend, VAR_23.algorithm);
 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++)
  if (FUNC_11(VAR_11->data.f32[VAR_13] - VAR_22->data.f32[VAR_13]) > 1e-5)
   FUNC_13("back bias[%d]: %f %f\n", VAR_13, VAR_11->data.f32[VAR_13], VAR_22->data.f32[VAR_13]);
 for (VAR_13 = 0; VAR_13 < VAR_2 * VAR_3; VAR_13++)
  if (FUNC_11(VAR_17->data.f32[VAR_13] - VAR_20->data.f32[VAR_13]) > 1e-5)
   FUNC_13("back dw[%d]: %f %f\n", VAR_13, VAR_17->data.f32[VAR_13], VAR_20->data.f32[VAR_13]);
 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++)
  if (FUNC_11(VAR_18->data.f32[VAR_13] - VAR_21->data.f32[VAR_13]) > 1e-5)
   FUNC_13("back h[%d]: %f %f\n", VAR_13, VAR_18->data.f32[VAR_13], VAR_21->data.f32[VAR_13]);
 FUNC_7(VAR_22);
 FUNC_7(VAR_20);
 FUNC_7(VAR_21);
 FUNC_7(VAR_15);
 FUNC_7(VAR_11);
 FUNC_7(VAR_10);
 FUNC_7(VAR_17);
 FUNC_7(VAR_18);
 FUNC_7(VAR_8);
 FUNC_7(VAR_7);
}
