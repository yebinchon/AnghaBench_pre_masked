
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pairing_disabled; int connect_only_paired; } ;
typedef int BOOLEAN ;


 int FUNC_0 (char*,int ,int ) ;
 TYPE_1__ VAR_0 ;

void FUNC_1 (BOOLEAN VAR_1, BOOLEAN VAR_2)
{
    FUNC_0 ("BTM_SetPairableMode()  allow_pairing: %u   connect_only_paired: %u\n", VAR_1, VAR_2);

    VAR_0.pairing_disabled = !VAR_1;
    VAR_0.connect_only_paired = VAR_2;
}
