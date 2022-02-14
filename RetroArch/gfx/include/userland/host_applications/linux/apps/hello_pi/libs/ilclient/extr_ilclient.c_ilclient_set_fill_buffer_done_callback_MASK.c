
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* fill_buffer_done_callback_data; int fill_buffer_done_callback; } ;
typedef TYPE_1__ ILCLIENT_T ;
typedef int ILCLIENT_BUFFER_CALLBACK_T ;



void FUNC_0(ILCLIENT_T *VAR_0, ILCLIENT_BUFFER_CALLBACK_T VAR_1, void *VAR_2)
{
   VAR_0->fill_buffer_done_callback = VAR_1;
   VAR_0->fill_buffer_done_callback_data = VAR_2;
}
