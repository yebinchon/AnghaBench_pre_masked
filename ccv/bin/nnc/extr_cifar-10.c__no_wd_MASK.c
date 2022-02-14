
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ decay; } ;
struct TYPE_10__ {TYPE_2__ sgd; } ;
struct TYPE_11__ {TYPE_3__ info; } ;
typedef TYPE_4__ ccv_nnc_cmd_t ;
struct TYPE_8__ {scalar_t__ cmd; } ;
struct TYPE_12__ {int index; TYPE_1__ cmd; } ;
typedef TYPE_5__ ccv_cnnp_trainable_index_t ;
typedef int ccv_cnnp_model_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static ccv_nnc_cmd_t FUNC_0(const ccv_cnnp_model_t* const VAR_3, const ccv_cnnp_trainable_index_t* const VAR_4, const int VAR_5, const void* const VAR_6)
{
 int VAR_7;
 ccv_nnc_cmd_t VAR_8 = *(const ccv_nnc_cmd_t*)VAR_6;
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
 {
  if (VAR_4[VAR_7].cmd.cmd == VAR_0 &&
   (VAR_4[VAR_7].index == 1 || VAR_4[VAR_7].index == 2))
   VAR_8.info.sgd.decay = 0;
  if (VAR_4[VAR_7].cmd.cmd == VAR_2 &&
   VAR_4[VAR_7].index == 2)
   VAR_8.info.sgd.decay = 0;
  if (VAR_4[VAR_7].cmd.cmd == VAR_1 &&
   VAR_4[VAR_7].index == 2)
   VAR_8.info.sgd.decay = 0;
 }
 return VAR_8;
}
