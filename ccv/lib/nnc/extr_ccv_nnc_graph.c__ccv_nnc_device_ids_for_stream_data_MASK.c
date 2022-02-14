
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int device_id; } ;
typedef TYPE_1__ ccv_nnc_stream_data_t ;
struct TYPE_8__ {int output_size; int outputs; int input_size; int inputs; } ;
typedef TYPE_2__ ccv_nnc_graph_exec_info_t ;
struct TYPE_9__ {scalar_t__ rnum; } ;
typedef TYPE_3__ ccv_array_t ;


 scalar_t__ FUNC_0 (TYPE_3__* const,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int* const,int const) ;

__attribute__((used)) static int FUNC_2(ccv_nnc_graph_exec_info_t* const VAR_0, const int VAR_1, ccv_array_t* const VAR_2, int* const VAR_3, const int VAR_4)
{
 int VAR_5 = FUNC_1(VAR_0->inputs, VAR_0->input_size, VAR_0->outputs, VAR_0->output_size, VAR_3, VAR_4);
 if (VAR_5 == 0)
 {

  if (VAR_2->rnum > 0)
  {
   ccv_nnc_stream_data_t* const VAR_6 = (ccv_nnc_stream_data_t*)FUNC_0(VAR_2, 0);
   VAR_3[0] = VAR_6->device_id;
  } else
   VAR_3[0] = VAR_1 >= 0 ? VAR_1 : 0;
  VAR_5 = 1;
 }
 return VAR_5;
}
