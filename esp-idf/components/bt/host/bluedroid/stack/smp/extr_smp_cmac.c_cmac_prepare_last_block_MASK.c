
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_2__ {int len; int * text; int round; } ;
typedef int BT_OCTET16 ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,scalar_t__,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4 (BT_OCTET16 VAR_4, BT_OCTET16 VAR_5)
{

    BOOLEAN VAR_6;

    FUNC_1 ("cmac_prepare_last_block ");

    VAR_6 = ((VAR_3.len % VAR_0) == 0 && VAR_3.len != 0) ? VAR_2 : VAR_1;

    FUNC_0("flag = %d round = %d", VAR_6, VAR_3.round);

    if ( VAR_6 ) {

        FUNC_3(&VAR_3.text[0], VAR_4);
    } else {
        FUNC_2(&VAR_3.text[0], (UINT8)(VAR_3.len % 16));

        FUNC_3(&VAR_3.text[0], VAR_5);
    }
}
