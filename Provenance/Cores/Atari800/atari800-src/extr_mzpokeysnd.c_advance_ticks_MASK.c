
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_1__ ;


typedef void* qev_t ;
struct TYPE_18__ {size_t outvol_0; size_t outvol_1; size_t outvol_2; size_t outvol_3; size_t speaker; void* outvol_all; int c0divpos; int c1divpos; int c2divpos; int c3divpos; size_t poly5pos; size_t poly4pos; size_t poly9pos; size_t poly17pos; int c0divstart; int c1divstart; int c0divstart_p; int skctl; int c2divstart; int c3divstart; int c2divstart_p; size_t (* readout_0 ) (TYPE_1__*) ;size_t (* readout_1 ) (TYPE_1__*) ;size_t (* readout_2 ) (TYPE_1__*) ;size_t (* readout_3 ) (TYPE_1__*) ;scalar_t__ c1sw4; scalar_t__ c3_f2; int (* event_3 ) (TYPE_1__*,int,int,int) ;int c3stop; scalar_t__ c0sw4; int (* event_2 ) (TYPE_1__*,int,int,int) ;int c2stop; scalar_t__ c1_f0; int (* event_1 ) (TYPE_1__*,int,int,int) ;int c1stop; int (* event_0 ) (TYPE_1__*,int,int,int) ;int c0stop; scalar_t__ selpoly9; scalar_t__ forcero; } ;
typedef TYPE_1__ PokeyState ;


 int FUNC_0 (TYPE_1__*,void*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 void** VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 int* VAR_4 ;
 int FUNC_3 (TYPE_1__*,int,int,int) ;
 int FUNC_4 (TYPE_1__*) ;
 size_t FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int,int,int) ;
 int FUNC_8 (TYPE_1__*,int,int,int) ;
 int FUNC_9 (TYPE_1__*,int,int,int) ;
 size_t FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 size_t FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 size_t FUNC_14 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_15(PokeyState* VAR_5, int VAR_6)
{
    int VAR_7,VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    int VAR_13,VAR_14,VAR_15;

    qev_t VAR_16;
    int VAR_17=0;
    int VAR_18=0;
    int VAR_19=0;
    int VAR_20=0;

    int VAR_21=0;

    if (VAR_6 <= 0) return;
    if(VAR_5->forcero)
    {
        VAR_5->forcero = 0;







        VAR_16 = VAR_5->outvol_0 + VAR_5->outvol_1 + VAR_5->outvol_2 + VAR_5->outvol_3;




        if(VAR_16 != VAR_5->outvol_all)
        {
            VAR_5->outvol_all = VAR_16;
            FUNC_0(VAR_5, VAR_16);
        }
    }

    while(VAR_6>0)
    {
        VAR_9 = VAR_5->c0divpos;
        VAR_10 = VAR_5->c1divpos;
        VAR_11 = VAR_5->c2divpos;
        VAR_12 = VAR_5->c3divpos;

        VAR_8 = VAR_6+1;
        if(!VAR_5->c0stop && VAR_9 < VAR_8)
            VAR_8 = VAR_9;
        if(!VAR_5->c1stop && VAR_10 < VAR_8)
            VAR_8 = VAR_10;
        if(!VAR_5->c2stop && VAR_11 < VAR_8)
            VAR_8 = VAR_11;
        if(!VAR_5->c3stop && VAR_12 < VAR_8)
            VAR_8 = VAR_12;


        if(VAR_8>VAR_6)
            VAR_7 = VAR_6;
        else
        {
            VAR_7 = VAR_8;
            VAR_21 = 1;
        }

        VAR_6 -= VAR_7;







        if(!VAR_5->c0stop) VAR_5->c0divpos -= VAR_7;
        if(!VAR_5->c1stop) VAR_5->c1divpos -= VAR_7;
        if(!VAR_5->c2stop) VAR_5->c2divpos -= VAR_7;
        if(!VAR_5->c3stop) VAR_5->c3divpos -= VAR_7;


        FUNC_1(VAR_5,VAR_7);
        FUNC_2(VAR_5,VAR_7);

        if(VAR_21)
        {
            VAR_13 = VAR_3[VAR_5->poly5pos] & 1;
            VAR_14 = VAR_2[VAR_5->poly4pos] & 1;
            if(VAR_5->selpoly9)
                VAR_15 = VAR_4[VAR_5->poly9pos] & 1;
            else
                VAR_15 = VAR_1[VAR_5->poly17pos] & 1;




            if(!VAR_5->c0stop && VAR_7 == VAR_9)

            {
                VAR_5->event_0(VAR_5,VAR_13,VAR_14,VAR_15);
                VAR_5->c0divpos = VAR_5->c0divstart;
                VAR_17 = 1;
            }



            if(!VAR_5->c1stop && VAR_7 == VAR_10)

            {
                VAR_5->event_1(VAR_5,VAR_13,VAR_14,VAR_15);
                VAR_5->c1divpos = VAR_5->c1divstart;
                if(VAR_5->c1_f0)
                    VAR_5->c0divpos = VAR_5->c0divstart_p;
                VAR_18 = 1;



                if((VAR_5->skctl & 0x88) == 0x88) {
                    VAR_5->c0divpos = VAR_5->c0divstart;


                }
            }



            if(!VAR_5->c2stop && VAR_7 == VAR_11)

            {
                VAR_5->event_2(VAR_5,VAR_13,VAR_14,VAR_15);
                VAR_5->c2divpos = VAR_5->c2divstart;
                VAR_19 = 1;
                if(VAR_5->c0sw4)
                    VAR_17 = 1;
            }



            if(!VAR_5->c3stop && VAR_7 == VAR_12)

            {
                VAR_5->event_3(VAR_5,VAR_13,VAR_14,VAR_15);
                VAR_5->c3divpos = VAR_5->c3divstart;
                if(VAR_5->c3_f2)
                    VAR_5->c2divpos = VAR_5->c2divstart_p;
                VAR_20 = 1;
                if(VAR_5->c1sw4)
                    VAR_18 = 1;
            }

            if(VAR_17)
            {



                VAR_5->outvol_0 = 2*VAR_5->readout_0(VAR_5);

            }
            if(VAR_18)
            {



                VAR_5->outvol_1 = 2*VAR_5->readout_1(VAR_5);

            }
            if(VAR_19)
            {



                VAR_5->outvol_2 = 2*VAR_5->readout_2(VAR_5);

            }
            if(VAR_20)
            {



                VAR_5->outvol_3 = 2*VAR_5->readout_3(VAR_5);

            }
            VAR_16 = VAR_5->outvol_0 + VAR_5->outvol_1 + VAR_5->outvol_2 + VAR_5->outvol_3;




            if(VAR_16 != VAR_5->outvol_all)
            {
                VAR_5->outvol_all = VAR_16;
                FUNC_0(VAR_5, VAR_16);
            }
        }
    }
}
