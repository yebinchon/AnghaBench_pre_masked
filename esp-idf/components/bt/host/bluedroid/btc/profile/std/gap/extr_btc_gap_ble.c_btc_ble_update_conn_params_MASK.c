
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int BD_ADDR ;


 int FUNC_0 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_2(BD_ADDR VAR_2, uint16_t VAR_3,
                                       uint16_t VAR_4, uint16_t VAR_5, uint16_t VAR_6)
{
    if (VAR_3 > VAR_4) {
        VAR_3 = VAR_4;
    }

    if (VAR_3 < VAR_1 || VAR_4 > VAR_0) {
        FUNC_1("Invalid interval value.\n");
    }

    FUNC_0(VAR_2, VAR_3, VAR_4,
                                    VAR_5, VAR_6);
}
