
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_2__ {int desire_role; int disallow_switch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int,int ) ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;

UINT8 FUNC_1 (UINT8 VAR_8)
{
    FUNC_0 ("L2CA_SetDesireRole() new:x%x, disallow_switch:%d",
                     VAR_8, VAR_7.disallow_switch);

    if (VAR_4 != (VAR_4 & VAR_8)) {

        if (VAR_8 & VAR_3) {
            VAR_7.disallow_switch = VAR_0;
        }
        if (VAR_8 & VAR_5) {
            VAR_7.disallow_switch = VAR_6;
        }
    }

    if (VAR_8 == VAR_1 || VAR_8 == VAR_2) {
        VAR_7.desire_role = VAR_8;
    }

    return (VAR_7.desire_role);
}
