
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* isa; } ;
typedef TYPE_2__ ccv_cnnp_model_t ;
typedef int ccv_cnnp_add_to_array_f ;
struct TYPE_7__ {int (* add_to_output ) (TYPE_2__* const,int const,void* const) ;} ;


 int FUNC_0 (TYPE_2__* const,void* const) ;
 int FUNC_1 (TYPE_2__* const,void* const) ;
 int FUNC_2 (TYPE_2__* const,int const,void* const) ;

__attribute__((used)) static inline void FUNC_3(ccv_cnnp_model_t* const VAR_0, const ccv_cnnp_add_to_array_f VAR_1, void* const VAR_2)
{
 if (VAR_0->isa->add_to_output)
 {
  FUNC_1(VAR_0, VAR_2);
  VAR_0->isa->add_to_output(VAR_0, VAR_1, VAR_2);
  FUNC_0(VAR_0, VAR_2);
 }
}
