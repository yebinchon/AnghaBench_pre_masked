
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int dsfmt_t ;
struct TYPE_11__ {int* f32; } ;
struct TYPE_12__ {TYPE_1__ data; int info; } ;
typedef TYPE_2__ ccv_nnc_tensor_t ;
typedef int ccv_nnc_hint_t ;
struct TYPE_13__ {int backend; int algorithm; int info; } ;
typedef TYPE_3__ ccv_nnc_cmd_t ;


 TYPE_3__ FUNC_0 (int,int,int,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,...) ;
 int FUNC_3 (int) ;
 TYPE_3__ FUNC_4 (TYPE_3__,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_3__,int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_2__*) ;
 TYPE_2__* FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (float) ;
 unsigned int FUNC_14 () ;
 int FUNC_15 (char*,int,...) ;

int FUNC_16(int VAR_5, char** VAR_6)
{
 FUNC_8();
 ccv_nnc_tensor_t* VAR_7 = FUNC_10(0, FUNC_1(VAR_1, VAR_1, VAR_0), 0);
 ccv_nnc_tensor_t* VAR_8 = FUNC_10(0, FUNC_1(VAR_4, VAR_4, VAR_3), 0);
 ccv_nnc_cmd_t VAR_9 = FUNC_0(1, VAR_3, VAR_2, VAR_2, VAR_0);
 ccv_nnc_hint_t VAR_10 = FUNC_6(VAR_9.info, VAR_7->info, VAR_8->info);
 FUNC_3(FUNC_7(VAR_10, VAR_9.info, VAR_7->info, VAR_8->info) == 0);
 ccv_nnc_tensor_t* VAR_11 = FUNC_10(0, FUNC_1(VAR_3, VAR_2, VAR_2, VAR_0), 0);
 ccv_nnc_tensor_t* VAR_12 = FUNC_10(0, FUNC_1(VAR_3), 0);

 dsfmt_t VAR_13;
 FUNC_12(&VAR_13, 0);
 int VAR_14;
 for (VAR_14 = 0; VAR_14 < VAR_0 * VAR_2 * VAR_2 * VAR_3; VAR_14++)
  VAR_11->data.f32[VAR_14] = FUNC_11(&VAR_13) / (VAR_0 * VAR_2 * VAR_2);
 for (VAR_14 = 0; VAR_14 < VAR_1 * VAR_1 * VAR_0; VAR_14++)
  VAR_7->data.f32[VAR_14] = FUNC_11(&VAR_13);
 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++)
  VAR_12->data.f32[VAR_14] = (float)VAR_14 / VAR_3;
 unsigned int VAR_15 = FUNC_14();
 FUNC_5(VAR_9, VAR_10, 0, FUNC_2(VAR_7, VAR_11, VAR_12), FUNC_2(VAR_8), 0);
 VAR_15 = FUNC_14() - VAR_15;
 FUNC_15("%u ms for ref\n", VAR_15);
 ccv_nnc_tensor_t* VAR_16 = FUNC_10(0, FUNC_1(VAR_4, VAR_4, VAR_3), 0);
 ccv_nnc_cmd_t VAR_17 = FUNC_4(VAR_9, 0, VAR_10, 0, FUNC_2(VAR_7, VAR_11, VAR_12), FUNC_2(VAR_16), 0);
 VAR_15 = FUNC_14();
 FUNC_5(VAR_17, VAR_10, 0, FUNC_2(VAR_7, VAR_11, VAR_12), FUNC_2(VAR_16), 0);
 VAR_15 = FUNC_14() - VAR_15;
 FUNC_15("%u ms for auto-tuned, backend %d, algorithm %d\n", VAR_15, VAR_17.backend, VAR_17.algorithm);
 for (VAR_14 = 0; VAR_14 < VAR_3 * VAR_4 * VAR_4; VAR_14++)
  if (FUNC_13(VAR_8->data.f32[VAR_14] - VAR_16->data.f32[VAR_14]) > 1e-5)
   FUNC_15("%d %f %f\n", VAR_14, VAR_8->data.f32[VAR_14], VAR_16->data.f32[VAR_14]);
 FUNC_9(VAR_16);
 FUNC_9(VAR_12);
 FUNC_9(VAR_11);
 FUNC_9(VAR_8);
 FUNC_9(VAR_7);
}
