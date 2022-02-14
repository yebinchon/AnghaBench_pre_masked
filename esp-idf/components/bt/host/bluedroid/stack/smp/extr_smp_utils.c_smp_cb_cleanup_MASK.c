
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int static_passkey; scalar_t__ use_static_passkey; int trace_level; int * p_callback; } ;
typedef TYPE_1__ tSMP_CB ;
typedef int tSMP_CALLBACK ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(tSMP_CB *VAR_0)
{
    tSMP_CALLBACK *VAR_1 = VAR_0->p_callback;
    UINT8 VAR_2 = VAR_0->trace_level;
    UINT32 VAR_3 = VAR_0->static_passkey;
    BOOLEAN VAR_4 = VAR_0->use_static_passkey;
    FUNC_0("smp_cb_cleanup\n");

    FUNC_1(VAR_0, 0, sizeof(tSMP_CB));
    VAR_0->p_callback = VAR_1;
    VAR_0->trace_level = VAR_2;
    if(VAR_4) {
        VAR_0->use_static_passkey = VAR_4;
        VAR_0->static_passkey = VAR_3;
    }
}
