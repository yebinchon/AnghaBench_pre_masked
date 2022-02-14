
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int Status; int Reset_CallBack; int * Interrupt_CallBack; } ;
typedef TYPE_1__ c68k_struc ;
typedef int C68K_INT_CALLBACK ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

void FUNC_6(c68k_struc *VAR_5, C68K_INT_CALLBACK *VAR_6)
{
    FUNC_5(VAR_5, 0, sizeof(c68k_struc));

    FUNC_1(VAR_5, VAR_2);
    FUNC_2(VAR_5, VAR_2);

    FUNC_3(VAR_5, VAR_4);
    FUNC_4(VAR_5, VAR_4);

    if (VAR_6) VAR_5->Interrupt_CallBack = VAR_6;
    else VAR_5->Interrupt_CallBack = VAR_1;
    VAR_5->Reset_CallBack = VAR_3;


    VAR_5->Status |= VAR_0;
    FUNC_0(VAR_5, 0);

    VAR_5->Status &= ~VAR_0;
}
