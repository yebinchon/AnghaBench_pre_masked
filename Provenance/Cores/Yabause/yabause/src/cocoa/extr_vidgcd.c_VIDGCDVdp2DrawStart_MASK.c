
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ yend; scalar_t__ xend; scalar_t__ ystart; scalar_t__ xstart; } ;
struct TYPE_9__ {int PRISA; int PRISB; int PRISC; int PRISD; int CRAOFB; int SPCTL; int CLOFEN; int CLOFSL; int COBR; int COBG; int COBB; int COAR; int COAG; int COAB; int CCCTL; int WCTLC; } ;
struct TYPE_7__ {int cor; int cog; int cob; int * PostPixelFetchCalc; } ;
struct TYPE_8__ {int* prioritytable; int coloroffset; scalar_t__ linewnd1addr; scalar_t__ linewnd0addr; int islinewindow; TYPE_4__* clip; TYPE_1__ info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,scalar_t__*,scalar_t__*,TYPE_3__*) ;
 int FUNC_1 (int,TYPE_4__*,TYPE_3__*) ;
 int FUNC_2 () ;
 TYPE_3__* VAR_4 ;
 TYPE_2__ VAR_5 ;
 int VAR_6 ;

void FUNC_3(void)
{
    int VAR_7;
   FUNC_2();

    VAR_5.prioritytable[0] = VAR_4->PRISA & 0x7;
    VAR_5.prioritytable[1] = (VAR_4->PRISA >> 8) & 0x7;
    VAR_5.prioritytable[2] = VAR_4->PRISB & 0x7;
    VAR_5.prioritytable[3] = (VAR_4->PRISB >> 8) & 0x7;
    VAR_5.prioritytable[4] = VAR_4->PRISC & 0x7;
    VAR_5.prioritytable[5] = (VAR_4->PRISC >> 8) & 0x7;
    VAR_5.prioritytable[6] = VAR_4->PRISD & 0x7;
    VAR_5.prioritytable[7] = (VAR_4->PRISD >> 8) & 0x7;

    VAR_5.coloroffset = (VAR_4->CRAOFB & 0x70) << 4;
    VAR_6 = VAR_4->SPCTL & 0xF;

    if(VAR_4->CLOFEN & 0x40) {

        if(VAR_4->CLOFSL & 0x40) {

            VAR_5.info.cor = VAR_4->COBR & 0xFF;
            if(VAR_4->COBR & 0x100)
                VAR_5.info.cor |= 0xFFFFFF00;

            VAR_5.info.cog = VAR_4->COBG & 0xFF;
            if(VAR_4->COBG & 0x100)
                VAR_5.info.cog |= 0xFFFFFF00;

            VAR_5.info.cob = VAR_4->COBB & 0xFF;
            if(VAR_4->COBB & 0x100)
                VAR_5.info.cob |= 0xFFFFFF00;
        }
        else {

            VAR_5.info.cor = VAR_4->COAR & 0xFF;
            if(VAR_4->COAR & 0x100)
                VAR_5.info.cor |= 0xFFFFFF00;

            VAR_5.info.cog = VAR_4->COAG & 0xFF;
            if(VAR_4->COAG & 0x100)
                VAR_5.info.cog |= 0xFFFFFF00;

            VAR_5.info.cob = VAR_4->COAB & 0xFF;
            if(VAR_4->COAB & 0x100)
                VAR_5.info.cob |= 0xFFFFFF00;
        }

        if(VAR_5.info.cor == 0 && VAR_5.info.cog == 0 && VAR_5.info.cob == 0) {
            if(VAR_4->CCCTL & 0x40)
                VAR_5.info.PostPixelFetchCalc = &VAR_0;
            else
                VAR_5.info.PostPixelFetchCalc = &VAR_3;
        }
        else {
            if(VAR_4->CCCTL & 0x40)
                VAR_5.info.PostPixelFetchCalc = &VAR_1;
            else
                VAR_5.info.PostPixelFetchCalc = &VAR_2;
        }
    }
    else {
        if(VAR_4->CCCTL & 0x40)
            VAR_5.info.PostPixelFetchCalc = &VAR_0;
        else
            VAR_5.info.PostPixelFetchCalc = &VAR_3;
    }

    VAR_7 = VAR_4->WCTLC >> 8;
    VAR_5.clip[0].xstart = VAR_5.clip[0].ystart = 0;
    VAR_5.clip[0].xend = VAR_5.clip[0].yend = 0;
    VAR_5.clip[1].xstart = VAR_5.clip[1].ystart = 0;
    VAR_5.clip[1].xend = VAR_5.clip[1].yend = 0;
    FUNC_1(VAR_7, VAR_5.clip, VAR_4);
    VAR_5.linewnd0addr = VAR_5.linewnd1addr = 0;
    FUNC_0(&VAR_5.islinewindow, VAR_7, &VAR_5.linewnd0addr, &VAR_5.linewnd1addr, VAR_4);
}
