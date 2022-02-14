
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_3__ {int sco_disc_reason; } ;
struct TYPE_4__ {TYPE_1__ sco_cb; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

UINT16 FUNC_0 (void)
{
    UINT16 VAR_2 = VAR_1.sco_cb.sco_disc_reason;
    VAR_1.sco_cb.sco_disc_reason = VAR_0;
    return (VAR_2);
}
