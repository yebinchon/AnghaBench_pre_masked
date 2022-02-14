
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ merge_buffer; scalar_t__ merge_pos; } ;
typedef TYPE_1__ CLIENT_THREAD_STATE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int const*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;

void FUNC_3(CLIENT_THREAD_STATE_T *VAR_1, const uint32_t VAR_2[], uint32_t VAR_3)
{


   FUNC_0(VAR_1->merge_buffer + VAR_1->merge_pos, VAR_2, VAR_3);
   VAR_1->merge_pos += FUNC_1(VAR_3);
   FUNC_2(VAR_1->merge_pos <= VAR_0);
}
