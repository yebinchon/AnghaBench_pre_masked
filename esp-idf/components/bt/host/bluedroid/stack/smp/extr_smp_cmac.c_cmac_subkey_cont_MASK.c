
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* param_buf; } ;
typedef TYPE_1__ tSMP_ENC ;
typedef int UINT8 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int*,int*) ;
 int VAR_1 ;
 int FUNC_2 (int*,int*) ;
 int FUNC_3 (int*,int const*) ;
 int FUNC_4 (int*,int ) ;

__attribute__((used)) static void FUNC_5(tSMP_ENC *VAR_2)
{
    UINT8 VAR_3[VAR_0], VAR_4[VAR_0];
    UINT8 *VAR_5 = VAR_2->param_buf;
    FUNC_0 ("cmac_subkey_cont ");
    FUNC_3(VAR_5, (const UINT8 *)"K1 before shift");


    if ( (VAR_5[VAR_0 - 1] & 0x80) != 0 ) {

        FUNC_2(VAR_5, VAR_3);
        FUNC_4(VAR_3, VAR_1);
    } else {
        FUNC_2(VAR_5, VAR_3);
    }

    if ( (VAR_3[VAR_0 - 1] & 0x80) != 0 ) {

        FUNC_2(VAR_3, VAR_4);
        FUNC_4(VAR_4, VAR_1);
    } else {

        FUNC_2(VAR_3, VAR_4);
    }

    FUNC_3(VAR_3, (const UINT8 *)"K1");
    FUNC_3(VAR_4, (const UINT8 *)"K2");

    FUNC_1 (VAR_3, VAR_4);
}
