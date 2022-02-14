
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ name; } ;
typedef TYPE_1__ ccv_cnnp_model_t ;
struct TYPE_7__ {scalar_t__ it; scalar_t__ sequences; } ;
typedef TYPE_2__ ccv_cnnp_model_sequence_t ;
struct TYPE_8__ {scalar_t__ name; int type; int sequence; } ;
typedef TYPE_3__ ccv_cnnp_model_name_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int,int ) ;
 int FUNC_1 (scalar_t__,TYPE_3__*) ;

__attribute__((used)) static inline void FUNC_2(const ccv_cnnp_model_t* const VAR_2, void* const VAR_3)
{
 ccv_cnnp_model_sequence_t* const VAR_4 = (ccv_cnnp_model_sequence_t*)VAR_3;

 if (!VAR_4->sequences)
  VAR_4->sequences = FUNC_0(sizeof(ccv_cnnp_model_name_t), 1, 0);
 ccv_cnnp_model_name_t VAR_5 = {
  .type = VAR_1,
  .sequence = 0,
 };
 if (VAR_2->name)
 {
  VAR_5.type = VAR_0;
  VAR_5.name = VAR_2->name;
 }
 FUNC_1(VAR_4->sequences, &VAR_5);
 VAR_4->it = 0;
}
