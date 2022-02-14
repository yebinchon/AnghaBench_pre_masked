
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_3__ {int hci_handle; } ;
typedef TYPE_1__ tACL_CONN ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int) ;

tBTM_STATUS FUNC_9 (BD_ADDR VAR_9, UINT16 *VAR_10)
{
    tACL_CONN *VAR_11;
    UINT8 *VAR_12 = FUNC_0();
    FUNC_2 ("BTM_SetLinkPolicy\n");



    if (*VAR_10 != VAR_4) {
        if ( (*VAR_10 & VAR_6) && (!FUNC_6(VAR_12)) ) {
            *VAR_10 &= (~VAR_6);
            FUNC_1 ("BTM_SetLinkPolicy switch not supported (settings: 0x%04x)\n", *VAR_10 );
        }
        if ( (*VAR_10 & VAR_5) && (!FUNC_3(VAR_12)) ) {
            *VAR_10 &= (~VAR_5);
            FUNC_1 ("BTM_SetLinkPolicy hold not supported (settings: 0x%04x)\n", *VAR_10 );
        }
        if ( (*VAR_10 & VAR_8) && (!FUNC_5(VAR_12)) ) {
            *VAR_10 &= (~VAR_8);
            FUNC_1 ("BTM_SetLinkPolicy sniff not supported (settings: 0x%04x)\n", *VAR_10 );
        }
        if ( (*VAR_10 & VAR_7) && (!FUNC_4(VAR_12)) ) {
            *VAR_10 &= (~VAR_7);
            FUNC_1 ("BTM_SetLinkPolicy park not supported (settings: 0x%04x)\n", *VAR_10 );
        }
    }

    if ((VAR_11 = FUNC_7(VAR_9, VAR_3)) != ((void*)0)) {
        return (FUNC_8 (VAR_11->hci_handle, *VAR_10) ? VAR_0 : VAR_1);
    }


    return (VAR_2);
}
