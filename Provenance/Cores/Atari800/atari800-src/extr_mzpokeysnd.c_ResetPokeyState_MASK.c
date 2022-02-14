
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mdivk; int c0divpos; int c0divstart; int c0divstart_p; int c0diva; int c0vo; int c0stop; int c1divpos; int c1divstart; int c1diva; int c1vo; int c1stop; int c2divpos; int c2divstart; int c2divstart_p; int c2diva; int c2stop; int c3divpos; int c3divstart; int c3diva; int c3stop; scalar_t__ speaker; scalar_t__ outvol_3; scalar_t__ vol3; scalar_t__ c3vo; scalar_t__ c3sw3; scalar_t__ c3sw2; scalar_t__ c3sw1; scalar_t__ c3t2; scalar_t__ c3t1; int event_3; int readout_3; scalar_t__ outvol_2; scalar_t__ vol2; scalar_t__ c2vo; scalar_t__ c2sw3; scalar_t__ c2sw2; scalar_t__ c2sw1; scalar_t__ c2t2; scalar_t__ c2t1; int event_2; int readout_2; scalar_t__ outvol_1; scalar_t__ vol1; scalar_t__ c1sw4; scalar_t__ c1sw3; scalar_t__ c1sw2; scalar_t__ c1sw1; scalar_t__ c1t3; scalar_t__ c1t2; scalar_t__ c1t1; int event_1; int readout_1; scalar_t__ outvol_0; scalar_t__ vol0; scalar_t__ c0sw4; scalar_t__ c0sw3; scalar_t__ c0sw2; scalar_t__ c0sw1; scalar_t__ c0t3; scalar_t__ c0t2; scalar_t__ c0t1; int event_0; int readout_0; scalar_t__ forcero; scalar_t__ outvol_all; scalar_t__ skctl; scalar_t__ c3_f2; scalar_t__ c2_hf; scalar_t__ c1_f0; scalar_t__ c0_hf; scalar_t__ selpoly9; scalar_t__ qeend; scalar_t__ qebeg; scalar_t__ ovola; scalar_t__ poly17pos; scalar_t__ poly9pos; scalar_t__ poly5pos; scalar_t__ poly4pos; } ;
typedef TYPE_1__ PokeyState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_0(PokeyState* VAR_8)
{

    VAR_8->poly4pos = 0;
    VAR_8->poly5pos = 0;
    VAR_8->poly9pos = 0;
    VAR_8->poly17pos = 0;


    VAR_8->ovola = 0;
    VAR_8->qebeg = 0;
    VAR_8->qeend = 0;


    VAR_8->mdivk = 28;

    VAR_8->selpoly9 = 0;
    VAR_8->c0_hf = 0;
    VAR_8->c1_f0 = 0;
    VAR_8->c2_hf = 0;
    VAR_8->c3_f2 = 0;


    VAR_8->skctl = 0;

    VAR_8->outvol_all = 0;
    VAR_8->forcero = 0;


    VAR_8->readout_0 = VAR_4;
    VAR_8->event_0 = VAR_0;

    VAR_8->c0divpos = 1000;
    VAR_8->c0divstart = 1000;
    VAR_8->c0divstart_p = 1000;
    VAR_8->c0diva = 255;

    VAR_8->c0t1 = 0;
    VAR_8->c0t2 = 0;
    VAR_8->c0t3 = 0;

    VAR_8->c0sw1 = 0;
    VAR_8->c0sw2 = 0;
    VAR_8->c0sw3 = 0;
    VAR_8->c0sw4 = 0;
    VAR_8->c0vo = 1;


    VAR_8->c0stop = 1;


    VAR_8->vol0 = 0;

    VAR_8->outvol_0 = 0;



    VAR_8->readout_1 = VAR_5;
    VAR_8->event_1 = VAR_1;

    VAR_8->c1divpos = 1000;
    VAR_8->c1divstart = 1000;
    VAR_8->c1diva = 255;

    VAR_8->c1t1 = 0;
    VAR_8->c1t2 = 0;
    VAR_8->c1t3 = 0;

    VAR_8->c1sw1 = 0;
    VAR_8->c1sw2 = 0;
    VAR_8->c1sw3 = 0;
    VAR_8->c1sw4 = 0;
    VAR_8->c1vo = 1;


    VAR_8->c1stop = 1;


    VAR_8->vol1 = 0;

    VAR_8->outvol_1 = 0;


    VAR_8->readout_2 = VAR_6;
    VAR_8->event_2 = VAR_2;

    VAR_8->c2divpos = 1000;
    VAR_8->c2divstart = 1000;
    VAR_8->c2divstart_p = 1000;
    VAR_8->c2diva = 255;

    VAR_8->c2t1 = 0;
    VAR_8->c2t2 = 0;

    VAR_8->c2sw1 = 0;
    VAR_8->c2sw2 = 0;
    VAR_8->c2sw3 = 0;

    VAR_8->c2vo = 0;


    VAR_8->c2stop = 1;


    VAR_8->vol2 = 0;

    VAR_8->outvol_2 = 0;


    VAR_8->readout_3 = VAR_7;
    VAR_8->event_3 = VAR_3;

    VAR_8->c3divpos = 1000;
    VAR_8->c3divstart = 1000;
    VAR_8->c3diva = 255;

    VAR_8->c3t1 = 0;
    VAR_8->c3t2 = 0;

    VAR_8->c3sw1 = 0;
    VAR_8->c3sw2 = 0;
    VAR_8->c3sw3 = 0;

    VAR_8->c3vo = 0;


    VAR_8->c3stop = 1;


    VAR_8->vol3 = 0;

    VAR_8->outvol_3 = 0;


    VAR_8->speaker = 0;
}
