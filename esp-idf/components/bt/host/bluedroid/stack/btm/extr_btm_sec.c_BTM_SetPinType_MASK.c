
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_4__ {scalar_t__ pin_type; int pin_code; scalar_t__ pin_code_len; } ;
struct TYPE_6__ {TYPE_1__ cfg; } ;
struct TYPE_5__ {scalar_t__ (* get_is_ready ) () ;} ;
typedef scalar_t__ PIN_CODE ;


 int FUNC_0 (char*,scalar_t__,char*,scalar_t__) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 TYPE_2__* FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 () ;

void FUNC_5 (UINT8 VAR_1, PIN_CODE VAR_2, UINT8 VAR_3)
{
    FUNC_0 ("BTM_SetPinType: pin type %d [variable-0, fixed-1], code %s, length %d\n",
                   VAR_1, (char *) VAR_2, VAR_3);


    if ( (VAR_0.cfg.pin_type != VAR_1)
            && FUNC_2()->get_is_ready() ) {
        FUNC_1 (VAR_1);
    }

    VAR_0.cfg.pin_type = VAR_1;
    VAR_0.cfg.pin_code_len = VAR_3;
    FUNC_3 (VAR_0.cfg.pin_code, VAR_2, VAR_3);
}
