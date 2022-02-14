
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int dsfmt_t ;
struct TYPE_12__ {int* f32; } ;
struct TYPE_13__ {TYPE_1__ data; int info; } ;
typedef TYPE_2__ ccv_nnc_tensor_t ;
typedef int ccv_nnc_stream_context_t ;
typedef int ccv_nnc_hint_t ;
struct TYPE_14__ {scalar_t__ backend; int algorithm; int info; } ;
typedef TYPE_3__ ccv_nnc_cmd_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__ FUNC_0 (int,int,int,int,int) ;
 int FUNC_1 (int,...) ;
 int FUNC_2 (int,int,int,int,int) ;
 int FUNC_3 (int,int,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (TYPE_2__*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 TYPE_3__ FUNC_7 (int ,int ,int ,int ) ;
 int VAR_13 ;
 TYPE_3__ FUNC_8 (TYPE_3__,int,int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_9 (TYPE_3__,int ,int ,int ,int ,int *) ;
 int FUNC_10 (int ,int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 () ;
 int VAR_14 ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (TYPE_2__*) ;
 TYPE_2__* FUNC_17 (int ,int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (double) ;
 unsigned int FUNC_21 () ;
 int FUNC_22 (char*,int,...) ;

int FUNC_23(int VAR_15, char** VAR_16)
{
 FUNC_12();
 ccv_nnc_tensor_t* VAR_17 = FUNC_17(0, FUNC_1(VAR_8, VAR_9, VAR_9, VAR_0), 0);
 ccv_nnc_tensor_t* VAR_18 = FUNC_17(0, FUNC_1(VAR_11, VAR_12, VAR_12, VAR_0), 0);
 ccv_nnc_cmd_t VAR_19 = FUNC_0(1, VAR_11, VAR_8, VAR_10, VAR_10);
 VAR_19.backend = VAR_1;
 FUNC_5(VAR_19.backend >= 0);
 ccv_nnc_hint_t VAR_20 = FUNC_10(VAR_19.info, VAR_17->info, VAR_18->info);
 FUNC_5(FUNC_11(VAR_20, VAR_19.info, VAR_17->info, VAR_18->info) == 0);
 ccv_nnc_tensor_t* VAR_21 = FUNC_17(0, FUNC_1(VAR_8, VAR_10, VAR_10, VAR_11), 0);
 ccv_nnc_tensor_t* VAR_22 = FUNC_17(0, FUNC_1(VAR_11), 0);

 dsfmt_t VAR_23;
 FUNC_19(&VAR_23, 0);
 int VAR_24;
 for (VAR_24 = 0; VAR_24 < VAR_8 * VAR_10 * VAR_10 * VAR_11; VAR_24++)
  VAR_21->data.f32[VAR_24] = FUNC_18(&VAR_23) / (VAR_8 * VAR_10 * VAR_10);
 for (VAR_24 = 0; VAR_24 < VAR_9 * VAR_9 * VAR_8 * FUNC_6(1, VAR_0); VAR_24++)
  VAR_17->data.f32[VAR_24] = FUNC_18(&VAR_23);
 for (VAR_24 = 0; VAR_24 < VAR_11; VAR_24++)
  VAR_22->data.f32[VAR_24] = (float)VAR_24 / VAR_11;

 ccv_nnc_tensor_t* VAR_25 = FUNC_17(0, FUNC_3(000, VAR_8, VAR_9, VAR_9, VAR_0), 0);
 ccv_nnc_tensor_t* VAR_26 = FUNC_17(0, FUNC_3(000, VAR_8, VAR_10, VAR_10, VAR_11), 0);
 ccv_nnc_tensor_t* VAR_27 = FUNC_17(0, FUNC_2(000, VAR_10, VAR_10, VAR_8, VAR_11), 0);
 ccv_nnc_tensor_t* VAR_28 = FUNC_17(0, FUNC_3(000, VAR_11), 0);
 unsigned int VAR_29 = FUNC_21();
 ccv_nnc_cmd_t VAR_30 = FUNC_7(VAR_4, 0, VAR_13, 0);
 VAR_30.backend = VAR_3;
 FUNC_5(VAR_30.backend >= 0);
 FUNC_9(VAR_30, VAR_14, 0, FUNC_4(VAR_17, VAR_21, VAR_22), FUNC_4(VAR_25, VAR_26, VAR_28), 0);
 FUNC_9(VAR_19, VAR_20, 0, FUNC_4(VAR_17, VAR_21, VAR_22), FUNC_4(VAR_18), 0);
 VAR_29 = FUNC_21() - VAR_29;
 FUNC_22("%u ms for ref\n", VAR_29);
 ccv_nnc_tensor_t* VAR_31 = FUNC_17(0, FUNC_3(000, VAR_11, VAR_12, VAR_12, VAR_0), 0);

 ccv_nnc_cmd_t VAR_32 = FUNC_7(VAR_6, 0, VAR_13, 0);
 VAR_32.backend = VAR_2;
 FUNC_5(VAR_32.backend >= 0);
 ccv_nnc_stream_context_t* VAR_33 = FUNC_14(VAR_7);
 FUNC_9(VAR_32, VAR_14, 0, FUNC_4(VAR_26), FUNC_4(VAR_27), VAR_33);
 FUNC_15(VAR_33);
 FUNC_16(VAR_26);

 VAR_19.backend = VAR_2;
 FUNC_5(VAR_19.backend >= 0);
 VAR_19.algorithm = -1;
 VAR_19 = FUNC_8(VAR_19, 2 * 1024 * 1024 * 1024, VAR_20, 0, FUNC_4(VAR_25, VAR_27, VAR_28), FUNC_4(VAR_31), VAR_33);
 VAR_29 = FUNC_21();
 FUNC_5(VAR_5 == FUNC_9(VAR_19, VAR_20, 0, FUNC_4(VAR_25, VAR_27, VAR_28), FUNC_4(VAR_31), VAR_33));
 FUNC_15(VAR_33);
 FUNC_13(VAR_33);
 VAR_29 = FUNC_21() - VAR_29;
 FUNC_22("%u ms for optimized\n", VAR_29);
 ccv_nnc_tensor_t* VAR_34 = FUNC_17(0, FUNC_1(VAR_11, VAR_12, VAR_12, VAR_0), 0);
 FUNC_9(VAR_30, VAR_14, 0, FUNC_4(VAR_31), FUNC_4(VAR_34), 0);
 for (VAR_24 = 0; VAR_24 < VAR_11 * VAR_12 * VAR_12; VAR_24++)
  if (FUNC_20(VAR_18->data.f32[VAR_24] - VAR_34->data.f32[VAR_24]) > 1e-5)
   FUNC_22("%d %f %f\n", VAR_24, VAR_18->data.f32[VAR_24], VAR_34->data.f32[VAR_24]);
 FUNC_16(VAR_34);
 FUNC_16(VAR_31);
 FUNC_16(VAR_22);
 FUNC_16(VAR_21);
 FUNC_16(VAR_18);
 FUNC_16(VAR_17);
 FUNC_16(VAR_28);
 FUNC_16(VAR_27);
 FUNC_16(VAR_25);
}
