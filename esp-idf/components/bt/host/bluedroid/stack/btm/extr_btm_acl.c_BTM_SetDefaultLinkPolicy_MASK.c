
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_2__ {int btm_def_link_policy; } ;


 int * FUNC_0 () ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__ VAR_4 ;
 int FUNC_6 (int) ;

void FUNC_7 (UINT16 VAR_5)
{
    UINT8 *VAR_6 = FUNC_0();

    FUNC_1("BTM_SetDefaultLinkPolicy setting:0x%04x\n", VAR_5);

    if ((VAR_5 & VAR_1) && (!FUNC_5(VAR_6))) {
        VAR_5 &= ~VAR_1;
        FUNC_1("BTM_SetDefaultLinkPolicy switch not supported (settings: 0x%04x)\n", VAR_5);
    }
    if ((VAR_5 & VAR_0) && (!FUNC_2(VAR_6))) {
        VAR_5 &= ~VAR_0;
        FUNC_1("BTM_SetDefaultLinkPolicy hold not supported (settings: 0x%04x)\n", VAR_5);
    }
    if ((VAR_5 & VAR_3) && (!FUNC_4(VAR_6))) {
        VAR_5 &= ~VAR_3;
        FUNC_1("BTM_SetDefaultLinkPolicy sniff not supported (settings: 0x%04x)\n", VAR_5);
    }
    if ((VAR_5 & VAR_2) && (!FUNC_3(VAR_6))) {
        VAR_5 &= ~VAR_2;
        FUNC_1("BTM_SetDefaultLinkPolicy park not supported (settings: 0x%04x)\n", VAR_5);
    }
    FUNC_1("Set DefaultLinkPolicy:0x%04x\n", VAR_5);

    VAR_4.btm_def_link_policy = VAR_5;


    FUNC_6(VAR_5);
}
