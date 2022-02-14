
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int irk; } ;
struct TYPE_5__ {TYPE_1__ id_keys; } ;
struct TYPE_6__ {TYPE_2__ devcb; } ;
typedef int BT_OCTET16 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2 (BT_OCTET16 VAR_2)
{
    FUNC_0 ("BTM_GetDeviceIDRoot ");

    FUNC_1 (VAR_2, VAR_1.devcb.id_keys.irk, VAR_0);
}
