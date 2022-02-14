
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int dsfmt_t ;
struct TYPE_9__ {int* f32; } ;
struct TYPE_10__ {TYPE_1__ data; } ;
typedef TYPE_2__ ccv_nnc_tensor_t ;
struct TYPE_11__ {scalar_t__ backend; scalar_t__ algorithm; } ;
typedef TYPE_3__ ccv_nnc_cmd_t ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int,...) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,...) ;
 int FUNC_3 (int) ;
 TYPE_3__ FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_3__,int ,int ,int ,int ,int ) ;
 int FUNC_6 () ;
 int VAR_5 ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (double) ;
 unsigned int FUNC_12 () ;
 int FUNC_13 (char*,int,...) ;

int FUNC_14(int VAR_6, char** VAR_7)
{
 FUNC_6();
 ccv_nnc_tensor_t* VAR_8 = FUNC_8(0, FUNC_1(VAR_3), 0);
 ccv_nnc_tensor_t* VAR_9 = FUNC_8(0, FUNC_1(VAR_4), 0);
 ccv_nnc_cmd_t VAR_10 = FUNC_4(VAR_2, 0, FUNC_0(VAR_4), 0);
 ccv_nnc_tensor_t* VAR_11 = FUNC_8(0, FUNC_1(VAR_3, VAR_4), 0);
 ccv_nnc_tensor_t* VAR_12 = FUNC_8(0, FUNC_1(VAR_4), 0);

 dsfmt_t VAR_13;
 FUNC_10(&VAR_13, 0);
 int VAR_14;
 for (VAR_14 = 0; VAR_14 < VAR_3 * VAR_4; VAR_14++)
  VAR_11->data.f32[VAR_14] = FUNC_9(&VAR_13) / VAR_3;
 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++)
  VAR_8->data.f32[VAR_14] = FUNC_9(&VAR_13);
 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++)
  VAR_12->data.f32[VAR_14] = (float)VAR_14 / VAR_4;
 unsigned int VAR_15 = FUNC_12();
 FUNC_5(VAR_10, VAR_5, 0, FUNC_2(VAR_8, VAR_11, VAR_12), FUNC_2(VAR_9), 0);
 VAR_15 = FUNC_12() - VAR_15;
 FUNC_13("forw %u ms for ref\n", VAR_15);
 ccv_nnc_tensor_t* VAR_16 = FUNC_8(0, FUNC_1(VAR_4), 0);
 VAR_10.backend = VAR_0;
 FUNC_3(VAR_10.backend >= 0);
 VAR_10.algorithm = 0;
 VAR_15 = FUNC_12();
 FUNC_5(VAR_10, VAR_5, 0, FUNC_2(VAR_8, VAR_11, VAR_12), FUNC_2(VAR_16), 0);
 VAR_15 = FUNC_12() - VAR_15;
 FUNC_13("forw %u ms for optimized\n", VAR_15);
 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++)
  if (FUNC_11(VAR_9->data.f32[VAR_14] - VAR_16->data.f32[VAR_14]) > 1e-5)
   FUNC_13("forw output[%d]: %f %f\n", VAR_14, VAR_9->data.f32[VAR_14], VAR_16->data.f32[VAR_14]);
 ccv_nnc_tensor_t* VAR_17 = FUNC_8(0, FUNC_1(VAR_3, VAR_4), 0);
 ccv_nnc_tensor_t* VAR_18 = FUNC_8(0, FUNC_1(VAR_3), 0);
 ccv_nnc_cmd_t VAR_19 = FUNC_4(VAR_1, 0, FUNC_0(VAR_4), 0);
 VAR_15 = FUNC_12();
 FUNC_5(VAR_19, VAR_5, 0, FUNC_2(VAR_9, VAR_8, VAR_11), FUNC_2(VAR_18, VAR_17, VAR_12), 0);
 VAR_15 = FUNC_12() - VAR_15;
 FUNC_13("back %u ms for ref\n", VAR_15);
 ccv_nnc_tensor_t* VAR_20 = FUNC_8(0, FUNC_1(VAR_3, VAR_4), 0);
 ccv_nnc_tensor_t* VAR_21 = FUNC_8(0, FUNC_1(VAR_3), 0);
 ccv_nnc_tensor_t* VAR_22 = FUNC_8(0, FUNC_1(VAR_4), 0);
 VAR_19.backend = VAR_0;
 FUNC_3(VAR_19.backend >= 0);
 VAR_19.algorithm = 0;
 VAR_15 = FUNC_12();
 FUNC_5(VAR_19, VAR_5, 0, FUNC_2(VAR_9, VAR_8, VAR_11), FUNC_2(VAR_21, VAR_20, VAR_22), 0);
 VAR_15 = FUNC_12() - VAR_15;
 FUNC_13("back %u ms for optimized\n", VAR_15);
 for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++)
  if (FUNC_11(VAR_12->data.f32[VAR_14] - VAR_22->data.f32[VAR_14]) > 1e-5)
   FUNC_13("back bias[%d]: %f %f\n", VAR_14, VAR_12->data.f32[VAR_14], VAR_22->data.f32[VAR_14]);
 for (VAR_14 = 0; VAR_14 < VAR_3 * VAR_4; VAR_14++)
  if (FUNC_11(VAR_17->data.f32[VAR_14] - VAR_20->data.f32[VAR_14]) > 1e-5)
   FUNC_13("back dw[%d]: %f %f\n", VAR_14, VAR_17->data.f32[VAR_14], VAR_20->data.f32[VAR_14]);
 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++)
  if (FUNC_11(VAR_18->data.f32[VAR_14] - VAR_21->data.f32[VAR_14]) > 1e-5)
   FUNC_13("back h[%d]: %f %f\n", VAR_14, VAR_18->data.f32[VAR_14], VAR_21->data.f32[VAR_14]);
 FUNC_7(VAR_22);
 FUNC_7(VAR_20);
 FUNC_7(VAR_21);
 FUNC_7(VAR_16);
 FUNC_7(VAR_12);
 FUNC_7(VAR_11);
 FUNC_7(VAR_17);
 FUNC_7(VAR_18);
 FUNC_7(VAR_9);
 FUNC_7(VAR_8);
}
