
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_char ;
struct TYPE_3__ {size_t old_state; size_t ph_state; } ;
struct TYPE_4__ {TYPE_1__ amd7930; } ;
struct IsdnCardState {int debug; TYPE_2__ dc; scalar_t__ tx_skb; } ;


 int FUNC_0 (struct IsdnCardState*) ;
 int FUNC_1 (struct IsdnCardState*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct IsdnCardState*,char*,size_t,size_t,size_t,size_t) ;
 size_t* VAR_9 ;
 int FUNC_3 (struct IsdnCardState*,int,int *) ;
 int* VAR_10 ;
 int FUNC_4 (struct IsdnCardState*,int,int) ;

__attribute__((used)) static void
FUNC_5(struct IsdnCardState *VAR_11)
{
        u_char VAR_12 = VAR_10[VAR_11->dc.amd7930.old_state]*8 + VAR_10[VAR_11->dc.amd7930.ph_state]-1;
        u_char VAR_13 = VAR_9[VAR_12];

        if (VAR_11->debug & VAR_8)
  FUNC_2(VAR_11, "AMD7930: new_ph %d, old_ph %d, message %d, index %d",
                        VAR_11->dc.amd7930.ph_state, VAR_11->dc.amd7930.old_state, VAR_13 & 0x0f, VAR_12);

        VAR_11->dc.amd7930.old_state = VAR_11->dc.amd7930.ph_state;


        if ((VAR_13 & 0xf0) && (VAR_11->tx_skb)) {
                FUNC_4(VAR_11, 0x21, 0xC2);
                FUNC_4(VAR_11, 0x21, 0x02);
        }

 switch (VAR_13 & 0x0f) {

                case (1):
                        FUNC_3(VAR_11, VAR_5 | VAR_7, ((void*)0));
                        FUNC_0(VAR_11);
                        break;
                case (2):
                        FUNC_3(VAR_11, VAR_1 | VAR_0, ((void*)0));
                        break;
                case (3):
                        FUNC_3(VAR_11, VAR_1 | VAR_7, ((void*)0));
                        break;
                case (4):
                        FUNC_3(VAR_11, VAR_4 | VAR_0, ((void*)0));
                        FUNC_1(VAR_11, 0x50, "HW_ENABLE REQUEST");
                        break;
                case (5):
   FUNC_3(VAR_11, VAR_6 | VAR_7, ((void*)0));
                        break;
                case (6):
   FUNC_3(VAR_11, VAR_3 | VAR_7, ((void*)0));
                        break;
                case (7):
   FUNC_3(VAR_11, VAR_6 | VAR_7, ((void*)0));
   FUNC_3(VAR_11, VAR_3 | VAR_7, ((void*)0));
                        break;
                case (8):
                        FUNC_3(VAR_11, VAR_4 | VAR_0, ((void*)0));

                case (9):
                        FUNC_1(VAR_11, 0x40, "HW_ENABLE REQ cleared if set");
   FUNC_3(VAR_11, VAR_6 | VAR_7, ((void*)0));
   FUNC_3(VAR_11, VAR_2 | VAR_7, ((void*)0));
   FUNC_3(VAR_11, VAR_3 | VAR_7, ((void*)0));
                        break;
                case (10):
                        FUNC_1(VAR_11, 0x40, "T3 expired, HW_ENABLE REQ cleared");
                        VAR_11->dc.amd7930.old_state = 3;
                        break;
                case (11):
   FUNC_3(VAR_11, VAR_2 | VAR_7, ((void*)0));
                        break;
  default:
   break;
 }
}
