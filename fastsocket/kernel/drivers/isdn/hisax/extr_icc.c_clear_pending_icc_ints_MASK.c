
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ph_state; } ;
struct TYPE_4__ {TYPE_1__ icc; } ;
struct IsdnCardState {int (* readisac ) (struct IsdnCardState*,int ) ;int (* writeisac ) (struct IsdnCardState*,int ,int) ;TYPE_2__ dc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct IsdnCardState*,char*,int) ;
 int FUNC_1 (struct IsdnCardState*,int ) ;
 int FUNC_2 (struct IsdnCardState*,int ) ;
 int FUNC_3 (struct IsdnCardState*,int ) ;
 int FUNC_4 (struct IsdnCardState*,int ) ;
 int FUNC_5 (struct IsdnCardState*,int ) ;
 int FUNC_6 (struct IsdnCardState*,int ) ;
 int FUNC_7 (struct IsdnCardState*,int ) ;
 int FUNC_8 (struct IsdnCardState*,int ,int) ;

void
FUNC_9(struct IsdnCardState *VAR_8)
{
 int VAR_9, VAR_10;

 VAR_9 = VAR_8->readisac(VAR_8, VAR_7);
 FUNC_0(VAR_8, "ICC STAR %x", VAR_9);
 VAR_9 = VAR_8->readisac(VAR_8, VAR_6);
 FUNC_0(VAR_8, "ICC MODE %x", VAR_9);
 VAR_9 = VAR_8->readisac(VAR_8, VAR_1);
 FUNC_0(VAR_8, "ICC ADF2 %x", VAR_9);
 VAR_9 = VAR_8->readisac(VAR_8, VAR_4);
 FUNC_0(VAR_8, "ICC ISTA %x", VAR_9);
 if (VAR_9 & 0x01) {
  VAR_10 = VAR_8->readisac(VAR_8, VAR_3);
  FUNC_0(VAR_8, "ICC EXIR %x", VAR_10);
 }
 VAR_9 = VAR_8->readisac(VAR_8, VAR_2);
 FUNC_0(VAR_8, "ICC CIR0 %x", VAR_9);
 VAR_8->dc.icc.ph_state = (VAR_9 >> 2) & 0xf;
 FUNC_1(VAR_8, VAR_0);

 VAR_8->writeisac(VAR_8, VAR_5, 0xFF);
}
