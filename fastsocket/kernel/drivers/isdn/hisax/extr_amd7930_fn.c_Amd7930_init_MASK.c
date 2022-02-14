
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lmr1; int ph_command; scalar_t__ old_state; scalar_t__ tx_xmtlen; } ;
struct TYPE_4__ {TYPE_1__ amd7930; } ;
struct IsdnCardState {int debug; int DC_Close; int setstack_d; TYPE_2__ dc; } ;
typedef int WORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct IsdnCardState*,char*) ;
 int* VAR_3 ;
 int FUNC_2 (struct IsdnCardState*,int) ;
 int VAR_4 ;
 int FUNC_3 (struct IsdnCardState*,int,int) ;

void FUNC_4(struct IsdnCardState *VAR_5)
{
    WORD *VAR_6;
    BYTE VAR_7, VAR_8;

        if (VAR_5->debug & VAR_2)
  FUNC_1(VAR_5, "Amd7930: initamd called");

        VAR_5->dc.amd7930.tx_xmtlen = 0;
        VAR_5->dc.amd7930.old_state = 0;
        VAR_5->dc.amd7930.lmr1 = 0x40;
        VAR_5->dc.amd7930.ph_command = VAR_0;
 VAR_5->setstack_d = VAR_4;
 VAR_5->DC_Close = VAR_1;


 for (VAR_6 = VAR_3; *VAR_6 != 0xFFFF; ) {
  VAR_7 = FUNC_0(*VAR_6);


                if (*VAR_6++ >= 0x100) {
   if (VAR_7 < 8)

                                FUNC_2(VAR_5, VAR_7);
   else {
    FUNC_3(VAR_5, 0x00, VAR_7);
    for (VAR_8 = *VAR_6++; VAR_8 > 0; VAR_8--)
     FUNC_2(VAR_5, 0x01);
   }
  }

                else if (VAR_7 < 8)
   FUNC_3(VAR_5, VAR_7, FUNC_0(*VAR_6++));

  else {
   FUNC_3(VAR_5, 0x00, VAR_7);
   for (VAR_8 = *VAR_6++; VAR_8 > 0; VAR_8--)
    FUNC_3(VAR_5, 0x01, FUNC_0(*VAR_6++));
  }
 }
}
