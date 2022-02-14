
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ccv_cnnp_model_t ;
struct TYPE_4__ {int input_size; int output_size; int * outputs; int * isa; } ;
struct TYPE_3__ {int inc; int ofs; int dim; TYPE_2__ super; int output; } ;
typedef TYPE_1__ ccv_cnnp_model_reshape_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*,char const* const) ;
 int VAR_1 ;
 int FUNC_2 (int ,int const*,int) ;

ccv_cnnp_model_t* FUNC_3(const int VAR_2[VAR_0], const int VAR_3[VAR_0], const int VAR_4[VAR_0], const char* const VAR_5)
{
 ccv_cnnp_model_reshape_t* const VAR_6 = (ccv_cnnp_model_reshape_t*)FUNC_0(1, sizeof(ccv_cnnp_model_reshape_t));
 VAR_6->super.isa = &VAR_1;
 VAR_6->super.input_size = 1;
 VAR_6->super.outputs = &VAR_6->output;
 VAR_6->super.output_size = 1;
 FUNC_1(&VAR_6->super, VAR_5);
 FUNC_2(VAR_6->dim, VAR_2, sizeof(VAR_6->dim));
 FUNC_2(VAR_6->ofs, VAR_3, sizeof(VAR_6->ofs));
 int VAR_7, VAR_8 = 0;
 for (VAR_7 = 0; !VAR_8 && VAR_7 < VAR_0; VAR_7++)
  VAR_8 = (VAR_4[VAR_7] != 0);
 FUNC_2(VAR_6->inc, VAR_8 ? VAR_4 : VAR_2, sizeof(VAR_6->inc));
 return (ccv_cnnp_model_t*)VAR_6;
}
