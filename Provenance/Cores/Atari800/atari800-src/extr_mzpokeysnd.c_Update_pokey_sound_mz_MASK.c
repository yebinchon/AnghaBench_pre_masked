
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_1__ ;


typedef int UWORD ;
typedef int UBYTE ;
struct TYPE_21__ {int c0diva; int forcero; int c0sw1; int c0sw2; int c0sw3; int vol0; int c0vo; int c1diva; int c1sw1; int c1sw2; int c1sw3; int vol1; int c1vo; int c2diva; int c2sw1; int c2sw2; int c2sw3; int vol2; int c2vo; int c3diva; int c3sw1; int c3sw2; int c3sw3; int vol3; int c3vo; int selpoly9; int c2t2; int c3t2; int c1t2; int c0t2; int c3divstart; int c3divpos; int c2divstart; int c2divpos; int c2divstart_p; int c3_f2; int c1divstart; int c1divpos; int c0divstart; int c0divpos; int c0divstart_p; int c1_f0; } ;
typedef TYPE_1__ PokeyState ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_18(UWORD VAR_1, UBYTE VAR_2, UBYTE VAR_3, UBYTE VAR_4)
{
    PokeyState* VAR_5 = VAR_0+VAR_3;

    switch(VAR_1 & 0x0f)
    {
    case 133:
        VAR_5->c0diva = VAR_2;
        FUNC_1(VAR_5);
        if(VAR_5->c1_f0)
        {
            FUNC_3(VAR_5);
            FUNC_4(VAR_5);
        }
        FUNC_2(VAR_5);
        VAR_5->forcero = 1;
        break;
    case 138:
        VAR_5->c0sw1 = (VAR_2 & 0x40) != 0;
        VAR_5->c0sw2 = (VAR_2 & 0x20) != 0;
        VAR_5->c0sw3 = (VAR_2 & 0x80) != 0;
        VAR_5->vol0 = (VAR_2 & 0xF);
        VAR_5->c0vo = (VAR_2 & 0x10) != 0;
        FUNC_13(VAR_5);
        FUNC_9(VAR_5);
        FUNC_2(VAR_5);
        VAR_5->forcero = 1;
        break;
    case 132:
        VAR_5->c1diva = VAR_2;
        FUNC_3(VAR_5);
        if(VAR_5->c1_f0)
        {
            FUNC_1(VAR_5);
            FUNC_2(VAR_5);
        }
        FUNC_4(VAR_5);
        VAR_5->forcero = 1;
        break;
    case 137:
        VAR_5->c1sw1 = (VAR_2 & 0x40) != 0;
        VAR_5->c1sw2 = (VAR_2 & 0x20) != 0;
        VAR_5->c1sw3 = (VAR_2 & 0x80) != 0;
        VAR_5->vol1 = (VAR_2 & 0xF);
        VAR_5->c1vo = (VAR_2 & 0x10) != 0;
        FUNC_14(VAR_5);
        FUNC_10(VAR_5);
        FUNC_4(VAR_5);
        VAR_5->forcero = 1;
        break;
    case 131:
        VAR_5->c2diva = VAR_2;
        FUNC_5(VAR_5);
        if(VAR_5->c3_f2)
        {
            FUNC_7(VAR_5);
            FUNC_8(VAR_5);
        }
        FUNC_6(VAR_5);
        VAR_5->forcero = 1;
        break;
    case 136:
        VAR_5->c2sw1 = (VAR_2 & 0x40) != 0;
        VAR_5->c2sw2 = (VAR_2 & 0x20) != 0;
        VAR_5->c2sw3 = (VAR_2 & 0x80) != 0;
        VAR_5->vol2 = (VAR_2 & 0xF);
        VAR_5->c2vo = (VAR_2 & 0x10) != 0;
        FUNC_15(VAR_5);
        FUNC_11(VAR_5);
        FUNC_6(VAR_5);
        VAR_5->forcero = 1;
        break;
    case 130:
        VAR_5->c3diva = VAR_2;
        FUNC_7(VAR_5);
        if(VAR_5->c3_f2)
        {
            FUNC_5(VAR_5);
            FUNC_6(VAR_5);
        }
        FUNC_8(VAR_5);
        VAR_5->forcero = 1;
        break;
    case 135:
        VAR_5->c3sw1 = (VAR_2 & 0x40) != 0;
        VAR_5->c3sw2 = (VAR_2 & 0x20) != 0;
        VAR_5->c3sw3 = (VAR_2 & 0x80) != 0;
        VAR_5->vol3 = VAR_2 & 0xF;
        VAR_5->c3vo = (VAR_2 & 0x10) != 0;
        FUNC_16(VAR_5);
        FUNC_12(VAR_5);
        FUNC_8(VAR_5);
        VAR_5->forcero = 1;
        break;
    case 134:
        VAR_5->selpoly9 = (VAR_2 & 0x80) != 0;
        FUNC_0(VAR_5,VAR_2);
        FUNC_13(VAR_5);
        FUNC_14(VAR_5);
        FUNC_15(VAR_5);
        FUNC_16(VAR_5);
        FUNC_1(VAR_5);
        FUNC_3(VAR_5);
        FUNC_5(VAR_5);
        FUNC_7(VAR_5);
        FUNC_2(VAR_5);
        FUNC_4(VAR_5);
        FUNC_6(VAR_5);
        FUNC_8(VAR_5);
        VAR_5->forcero = 1;
        break;
    case 128:
        if(VAR_5->c1_f0)
            VAR_5->c0divpos = VAR_5->c0divstart_p;
        else
            VAR_5->c0divpos = VAR_5->c0divstart;
        VAR_5->c1divpos = VAR_5->c1divstart;
        if(VAR_5->c3_f2)
            VAR_5->c2divpos = VAR_5->c2divstart_p;
        else
            VAR_5->c2divpos = VAR_5->c2divstart;

        VAR_5->c3divpos = VAR_5->c3divstart;


        VAR_5->c0t2 = 0;
        VAR_5->c1t2 = 0;
        VAR_5->c2t2 = 1;
        VAR_5->c3t2 = 1;
        break;
    case 129:
        FUNC_17(VAR_5,VAR_2);
        break;
    }
}
