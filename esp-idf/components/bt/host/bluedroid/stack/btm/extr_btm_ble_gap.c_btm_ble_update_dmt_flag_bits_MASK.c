
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_2__ {scalar_t__ (* supports_simultaneous_le_bredr ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 () ;

void FUNC_2(UINT8 *VAR_5, const UINT16 VAR_6,
                                  const UINT16 VAR_7)
{

    if ((VAR_7 & VAR_4) == 0 &&
            (VAR_6 & VAR_3) == 0) {
        *VAR_5 |= VAR_0;
    } else {
        *VAR_5 &= ~VAR_0;
    }


    if (FUNC_0()->supports_simultaneous_le_bredr()) {
        *VAR_5 |= (VAR_1 | VAR_2);
    } else {
        *VAR_5 &= ~(VAR_1 | VAR_2);
    }
}
