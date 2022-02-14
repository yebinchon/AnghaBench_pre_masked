
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_3__ {scalar_t__ received; scalar_t__ bad_seq; void* max_seq_num; void* base_seq; } ;
typedef TYPE_1__ VC_CONTAINER_TRACK_MODULE_T ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(VC_CONTAINER_TRACK_MODULE_T *VAR_1,
      uint16_t VAR_2)
{
   VAR_1->base_seq = VAR_2;
   VAR_1->max_seq_num = VAR_2;
   VAR_1->bad_seq = VAR_0 + 1;
   VAR_1->received = 0;
}
