
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_2__ {int dyn_psm; } ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__ VAR_4 ;
 int * FUNC_0 (int) ;

UINT16 FUNC_1(void)
{
    BOOLEAN VAR_5 = VAR_2;
    UINT16 VAR_6 = VAR_4.dyn_psm;

    while (!VAR_5) {
        VAR_6 += 2;
        if (VAR_6 > 0xfeff) {
            VAR_6 = 0x1001;
        } else if (VAR_6 & 0x0100) {

            VAR_6 += 0x0100;
        }


        if ((VAR_1 <= VAR_6) && (VAR_6 <= VAR_0)) {
            continue;
        }


        if ((FUNC_0 (VAR_6)) == ((void*)0)) {
            VAR_5 = VAR_3;
        }
    }
    VAR_4.dyn_psm = VAR_6;

    return (VAR_6);
}
