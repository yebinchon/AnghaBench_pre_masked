
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_14__ {int d; } ;
typedef TYPE_4__ ccv_nnc_tensor_symbol_t ;
struct TYPE_15__ {int graph; TYPE_6__* compiled_data; } ;
typedef TYPE_5__ ccv_cnnp_model_t ;
struct TYPE_13__ {int * retainables; int * trainables; } ;
struct TYPE_12__ {TYPE_9__* retainables; TYPE_9__* trainables; } ;
struct TYPE_11__ {unsigned int* v; } ;
struct TYPE_16__ {TYPE_3__ tensors; TYPE_2__ ids; TYPE_1__ tensors_init; TYPE_9__* retainables; TYPE_9__* trainables; int parallel_count; } ;
typedef TYPE_6__ ccv_cnnp_compiled_data_t ;
struct TYPE_17__ {int rnum; } ;


 int const VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_6__* const) ;
 scalar_t__ FUNC_2 (TYPE_9__*,int) ;
 int FUNC_3 (int ,TYPE_6__* const) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int *,char const* const,int *) ;
 int FUNC_6 (int ,int *,char const* const) ;
 int FUNC_7 (char*,int,char*,char const* const,int) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,char*,int ,int ,int ) ;
 scalar_t__ FUNC_10 (char const* const,int **) ;

void FUNC_11(ccv_cnnp_model_t* const VAR_3, const char* const VAR_4, const int VAR_5)
{
 ccv_cnnp_compiled_data_t* const VAR_6 = VAR_3->compiled_data;
 FUNC_1(VAR_6);
 sqlite3* VAR_7 = 0;
 if (VAR_2 != FUNC_10(VAR_4, &VAR_7))
  return;
 const int VAR_8 = !!VAR_6->tensors_init.v;
 int VAR_9, VAR_10;
 const int VAR_11 = FUNC_4(VAR_6->parallel_count, 1);
 const int VAR_12 = VAR_6->trainables->rnum;
 const int VAR_13 = VAR_6->retainables->rnum;
 char VAR_14[1024 + 16];
 if (!VAR_8 || VAR_5 == VAR_0)
 {
  if (!VAR_8)
   FUNC_3(VAR_3->graph, VAR_6);
  for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++)
  {
   const char* const VAR_15 = *(char**)FUNC_2(VAR_6->ids.trainables, VAR_9);
   if (FUNC_5(VAR_7, VAR_15, VAR_6->tensors.trainables + VAR_9) == VAR_1)
   {
    const int VAR_16 = ((ccv_nnc_tensor_symbol_t*)FUNC_2(VAR_6->trainables, VAR_9))->d;
    VAR_6->tensors_init.v[VAR_16 >> 5] |= (1u << (VAR_16 & 0x1f));
   }
  }
  for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++)
   for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++)
   {
    const char* const VAR_17 = *(char**)FUNC_2(VAR_6->ids.retainables, VAR_10);
    FUNC_7(VAR_14, 1024 + 16, "%s(%d)", VAR_17, VAR_9);
    if (FUNC_5(VAR_7, VAR_14, VAR_6->tensors.retainables + VAR_9 * VAR_13 + VAR_10) == VAR_1)
    {
     const int VAR_18 = ((ccv_nnc_tensor_symbol_t*)FUNC_2(VAR_6->retainables, VAR_9))->d;
     VAR_6->tensors_init.v[VAR_18 >> 5] |= (1u << (VAR_18 & 0x1f));
    }
   }
  FUNC_8(VAR_7);
  return;
 }
 FUNC_0(VAR_2 == FUNC_9(VAR_7, "BEGIN", 0, 0, 0));
 for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++)
 {
  const char* const VAR_19 = *(char**)FUNC_2(VAR_6->ids.trainables, VAR_9);
  FUNC_6(VAR_6->tensors.trainables[VAR_9], VAR_7, VAR_19);
 }
 for (VAR_9 = 0; VAR_9 < VAR_11; VAR_9++)
  for (VAR_10 = 0; VAR_10 < VAR_13; VAR_10++)
  {
   const char* const VAR_20 = *(char**)FUNC_2(VAR_6->ids.retainables, VAR_10);
   FUNC_7(VAR_14, 1024 + 16, "%s(%d)", VAR_20, VAR_9);
   FUNC_6(VAR_6->tensors.retainables[VAR_9 * VAR_13 + VAR_10], VAR_7, VAR_14);
  }
 FUNC_0(VAR_2 == FUNC_9(VAR_7, "COMMIT", 0, 0, 0));
 FUNC_8(VAR_7);
}
