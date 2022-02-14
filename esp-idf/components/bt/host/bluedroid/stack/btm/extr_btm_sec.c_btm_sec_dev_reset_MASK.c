
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int loc_io_caps; } ;
struct TYPE_6__ {int security_mode; TYPE_1__ devcb; } ;
struct TYPE_5__ {scalar_t__ (* supports_simple_pairing ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_3__ VAR_7 ;
 TYPE_2__* FUNC_2 () ;
 scalar_t__ FUNC_3 () ;

void FUNC_4 (void)
{
    if (FUNC_2()->supports_simple_pairing()) {

        VAR_7.devcb.loc_io_caps = VAR_0;

        FUNC_0(VAR_6, "RFC_MUX\n", VAR_4,
                             VAR_2, VAR_5, VAR_3, 0);
    } else {
        VAR_7.security_mode = VAR_1;
    }

    FUNC_1 ("btm_sec_dev_reset sec mode: %d\n", VAR_7.security_mode);
}
