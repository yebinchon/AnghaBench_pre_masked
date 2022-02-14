
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* configchanged_callback_data; int configchanged_callback; } ;
typedef TYPE_1__ ILCLIENT_T ;
typedef int ILCLIENT_CALLBACK_T ;



void FUNC_0(ILCLIENT_T *VAR_0, ILCLIENT_CALLBACK_T VAR_1, void *VAR_2)
{
   VAR_0->configchanged_callback = VAR_1;
   VAR_0->configchanged_callback_data = VAR_2;
}
