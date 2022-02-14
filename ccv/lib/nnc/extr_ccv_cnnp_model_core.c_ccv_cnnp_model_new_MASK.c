
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_17__ ;


typedef int uint64_t ;
typedef int ccv_nnc_tensor_symbol_t ;
typedef int ccv_cnnp_model_t ;
typedef TYPE_2__* ccv_cnnp_model_io_t ;
struct TYPE_23__ {int output_size; int input_size; int * outputs; int * isa; } ;
struct TYPE_21__ {int sequence_size; TYPE_2__** sequence; TYPE_9__ super; } ;
typedef TYPE_3__ ccv_cnnp_functional_model_t ;
struct TYPE_22__ {int rnum; } ;
typedef TYPE_4__ ccv_array_t ;
struct TYPE_20__ {scalar_t__ visit; TYPE_17__* model; TYPE_1__* outgoings; TYPE_4__* const incomings; } ;
struct TYPE_19__ {scalar_t__ rnum; } ;
struct TYPE_18__ {scalar_t__ output_size; } ;


 int FUNC_0 (TYPE_17__*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_4__* const) ;
 TYPE_2__** FUNC_4 (TYPE_4__* const,int) ;
 TYPE_4__* FUNC_5 (int,int const,int ) ;
 int FUNC_6 (TYPE_4__* const,TYPE_2__* const*) ;
 int FUNC_7 (TYPE_4__* const,int const) ;
 int VAR_0 ;
 int FUNC_8 (TYPE_9__*,char const* const) ;
 int FUNC_9 (TYPE_2__**,TYPE_2__* const* const,int) ;
 int FUNC_10 (int*,int ,int) ;

ccv_cnnp_model_t* FUNC_11(const ccv_cnnp_model_io_t* const VAR_1, const int VAR_2, const ccv_cnnp_model_io_t* const VAR_3, const int VAR_4, const char* const VAR_5)
{
 FUNC_1(VAR_4 > 0);

 ccv_array_t* const VAR_6 = FUNC_5(sizeof(ccv_cnnp_model_io_t), VAR_4, 0);
 FUNC_7(VAR_6, VAR_4);
 FUNC_9(FUNC_4(VAR_6, 0), VAR_3, sizeof(ccv_cnnp_model_io_t) * VAR_4);

 int VAR_7, VAR_8, VAR_9;
 uint64_t VAR_10[((VAR_2 - 1) >> 6) + 1];
 FUNC_10(VAR_10, 0, sizeof(uint64_t) * (((VAR_2 - 1) >> 6) + 1));
 int VAR_11 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++)
  VAR_11 += VAR_3[VAR_7]->model->output_size;
 for (VAR_7 = 0; VAR_7 < VAR_6->rnum; VAR_7++)
 {
  const ccv_cnnp_model_io_t VAR_12 = *(ccv_cnnp_model_io_t*)FUNC_4(VAR_6, VAR_7);
  FUNC_1(!FUNC_0(VAR_12->model));

  if (VAR_12->incomings)
   for (VAR_8 = 0; VAR_8 < VAR_12->incomings->rnum; VAR_8++)
   {
    const ccv_cnnp_model_io_t VAR_13 = *(ccv_cnnp_model_io_t*)FUNC_4(VAR_12->incomings, VAR_8);
    ++VAR_13->visit;
    if (VAR_13->visit != VAR_13->outgoings->rnum)
     continue;
    if (!FUNC_0(VAR_13->model))
     FUNC_6(VAR_6, &VAR_13);
    else {
     for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++)
      if (VAR_13 == VAR_1[VAR_9])
       break;
     FUNC_1(VAR_9 < VAR_2);
     VAR_10[VAR_9 >> 6] |= ((uint64_t)1 << (VAR_9 & 63));
    }
   }
 }
 for (VAR_7 = 0; VAR_7 < VAR_6->rnum; VAR_7++)
 {
  const ccv_cnnp_model_io_t VAR_14 = *(ccv_cnnp_model_io_t*)FUNC_4(VAR_6, VAR_7);
  VAR_14->visit = 0;
 }
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  VAR_1[VAR_7]->visit = 0;
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  { FUNC_1((VAR_10[VAR_7 >> 6] & ((uint64_t)1 << (VAR_7 & 63)))); }
 const int VAR_15 = VAR_6->rnum + VAR_2;
 ccv_cnnp_functional_model_t* const VAR_16 = (ccv_cnnp_functional_model_t*)FUNC_2(1, sizeof(ccv_cnnp_functional_model_t) + sizeof(ccv_cnnp_model_t*) * (VAR_15 - 1) + sizeof(ccv_nnc_tensor_symbol_t) * VAR_11);
 VAR_16->super.isa = &VAR_0;
 VAR_16->super.outputs = (ccv_nnc_tensor_symbol_t*)(VAR_16->sequence + VAR_15);
 VAR_16->super.output_size = VAR_11;
 VAR_16->super.input_size = VAR_2;
 FUNC_8(&VAR_16->super, VAR_5);
 VAR_16->sequence_size = VAR_15;
 FUNC_9(VAR_16->sequence, VAR_1, sizeof(ccv_cnnp_model_io_t) * VAR_2);
 for (VAR_7 = 0; VAR_7 < VAR_6->rnum; VAR_7++)
  VAR_16->sequence[VAR_2 + VAR_7] = *(ccv_cnnp_model_io_t*)FUNC_4(VAR_6, VAR_6->rnum - 1 - VAR_7);
 FUNC_3(VAR_6);
 return (ccv_cnnp_model_t*)VAR_16;
}
