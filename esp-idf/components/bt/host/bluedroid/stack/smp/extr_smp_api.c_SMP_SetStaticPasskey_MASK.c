
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int use_static_passkey; scalar_t__ static_passkey; } ;
typedef TYPE_1__ tSMP_CB ;
typedef scalar_t__ UINT32 ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*,scalar_t__) ;
 TYPE_1__ VAR_0 ;

void FUNC_1 (BOOLEAN VAR_1, UINT32 VAR_2)
{
    FUNC_0("static passkey %6d", VAR_2);
    tSMP_CB *VAR_3 = & VAR_0;
    if(VAR_1) {
        VAR_3->static_passkey = VAR_2;
        VAR_3->use_static_passkey = 1;
    } else {
        VAR_3->static_passkey = 0;
        VAR_3->use_static_passkey = 0;
    }
}
