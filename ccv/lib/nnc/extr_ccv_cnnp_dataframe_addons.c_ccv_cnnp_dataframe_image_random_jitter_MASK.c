
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int* std; } ;
struct TYPE_7__ {TYPE_1__ normalize; scalar_t__ seed; } ;
typedef TYPE_2__ ccv_cnnp_random_jitter_t ;
struct TYPE_8__ {int datatype; TYPE_2__ random_jitter; int sfmt; } ;
typedef TYPE_3__ ccv_cnnp_random_jitter_context_t ;
typedef int ccv_cnnp_dataframe_t ;
typedef int ccv_cnnp_column_data_context_deinit_f ;


 int const VAR_0 ;
 int FUNC_0 (int const) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int * const,int ,int ,int ,int ,TYPE_3__* const,int ) ;
 int FUNC_4 (int *,int ) ;

int FUNC_5(ccv_cnnp_dataframe_t* const VAR_4, const int VAR_5, const int VAR_6, const ccv_cnnp_random_jitter_t VAR_7)
{
 FUNC_1(VAR_6 == VAR_0);
 ccv_cnnp_random_jitter_context_t* const VAR_8 = (ccv_cnnp_random_jitter_context_t*)FUNC_2(sizeof(ccv_cnnp_random_jitter_context_t));
 if (VAR_7.seed)
  FUNC_4(&VAR_8->sfmt, (uint32_t)VAR_7.seed);
 else
  FUNC_4(&VAR_8->sfmt, (uint32_t)(uintptr_t)VAR_4);
 VAR_8->datatype = VAR_6;
 VAR_8->random_jitter = VAR_7;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < 3; VAR_9++)
  VAR_8->random_jitter.normalize.std[VAR_9] = VAR_8->random_jitter.normalize.std[VAR_9] ? 1. / VAR_8->random_jitter.normalize.std[VAR_9] : 1;
 return FUNC_3(VAR_4, VAR_2, 0, VAR_1, FUNC_0(VAR_5), VAR_8, (ccv_cnnp_column_data_context_deinit_f)VAR_3);
}
