
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_long ;
struct TYPE_7__ {int auxd; scalar_t__ base; } ;
struct TYPE_8__ {TYPE_3__ njet; } ;
struct TYPE_5__ {unsigned char lmr1; int (* ph_command ) (struct IsdnCardState*,unsigned char,char*) ;} ;
struct TYPE_6__ {TYPE_1__ amd7930; } ;
struct IsdnCardState {int debug; TYPE_4__ hw; TYPE_2__ dc; int lock; } ;


 int FUNC_0 (struct IsdnCardState*) ;




 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct IsdnCardState*,char*,unsigned char) ;
 int FUNC_2 (struct IsdnCardState*) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct IsdnCardState*) ;
 int FUNC_5 (struct IsdnCardState*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct IsdnCardState*,unsigned char,char*) ;
 int FUNC_9 (struct IsdnCardState*,unsigned char,char*) ;

__attribute__((used)) static int
FUNC_10(struct IsdnCardState *VAR_3, int VAR_4, void *VAR_5)
{
 u_long VAR_6;
        unsigned char *VAR_7;

 if (VAR_3->debug & VAR_0)
  FUNC_1(VAR_3, "enter:now PCI: card_msg: 0x%04X", VAR_4);

        switch (VAR_4) {
  case 133:
   FUNC_6(&VAR_3->lock, VAR_6);
   FUNC_5(VAR_3);
                        FUNC_0(VAR_3);
                        FUNC_7(&VAR_3->lock, VAR_6);
   break;
  case 134:
   FUNC_4(VAR_3);
   break;
  case 135:
   FUNC_5(VAR_3);
   FUNC_2(VAR_3);

   FUNC_0(VAR_3);
   break;
  case 132:
   break;
                case 131:

                        VAR_3->hw.njet.auxd = VAR_2 << 1;
                        FUNC_3(VAR_3->hw.njet.auxd, VAR_3->hw.njet.base + VAR_1);
                        break;
                case 128:

                 VAR_3->hw.njet.auxd = 0;
                        FUNC_3(0x00, VAR_3->hw.njet.base + VAR_1);
                        break;
                case 130:

                        VAR_7 = (unsigned char *)VAR_5;

                        if (VAR_3->debug & VAR_0)
                  FUNC_1(VAR_3, "enter:now PCI: assign phys. BC %d in AMD LMR1", *VAR_7);

                        VAR_3->dc.amd7930.ph_command(VAR_3, (VAR_3->dc.amd7930.lmr1 | (*VAR_7 + 1)), "MDL_BC_ASSIGN");

                        VAR_3->hw.njet.auxd |= VAR_2 << 2;
                        FUNC_3(VAR_3->hw.njet.auxd, VAR_3->hw.njet.base + VAR_1);
                        break;
                case 129:

                        VAR_7 = (unsigned char *)VAR_5;

                        if (VAR_3->debug & VAR_0)
                  FUNC_1(VAR_3, "enter:now PCI: release phys. BC %d in Amd LMR1", *VAR_7);

                        VAR_3->dc.amd7930.ph_command(VAR_3, (VAR_3->dc.amd7930.lmr1 & ~(*VAR_7 + 1)), "MDL_BC_RELEASE");

                        if (!(VAR_3->dc.amd7930.lmr1 & 3)) {
                                VAR_3->hw.njet.auxd &= ~(VAR_2 << 2);
                                FUNC_3(VAR_3->hw.njet.auxd, VAR_3->hw.njet.base + VAR_1);
                        }
                        break;
                default:
                        break;

 }
 return(0);
}
