
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ccv_cnnp_model_t ;
struct TYPE_4__ {TYPE_3__* sequences; } ;
typedef TYPE_1__ ccv_cnnp_model_sequence_t ;
struct TYPE_5__ {scalar_t__ type; int sequence; } ;
typedef TYPE_2__ ccv_cnnp_model_name_t ;
struct TYPE_6__ {scalar_t__ rnum; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_2(const ccv_cnnp_model_t* const VAR_1, void* const VAR_2)
{
 ccv_cnnp_model_sequence_t* const VAR_3 = (ccv_cnnp_model_sequence_t*)VAR_2;
 --VAR_3->sequences->rnum;
 FUNC_0(VAR_3->sequences->rnum >= 0);
 if (VAR_3->sequences->rnum > 0)
 {
  ccv_cnnp_model_name_t* const VAR_4 = (ccv_cnnp_model_name_t*)FUNC_1(VAR_3->sequences, VAR_3->sequences->rnum - 1);
  if (VAR_4->type == VAR_0)
   ++VAR_4->sequence;
 }
}
