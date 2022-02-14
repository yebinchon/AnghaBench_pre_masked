
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mocr; int adf2; int * mon_rx; int * mon_tx; } ;
struct TYPE_4__ {TYPE_1__ icc; } ;
struct IsdnCardState {int (* writeisac ) (struct IsdnCardState*,int ,int) ;TYPE_2__ dc; int HW_Flags; int DC_Close; int setstack_d; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct IsdnCardState*,int ) ;
 int VAR_12 ;
 int FUNC_1 (struct IsdnCardState*,int ,int) ;
 int FUNC_2 (struct IsdnCardState*,int ,int) ;
 int FUNC_3 (struct IsdnCardState*,int ,int) ;
 int FUNC_4 (struct IsdnCardState*,int ,int) ;
 int FUNC_5 (struct IsdnCardState*,int ,int) ;
 int FUNC_6 (struct IsdnCardState*,int ,int) ;
 int FUNC_7 (struct IsdnCardState*,int ,int) ;
 int FUNC_8 (struct IsdnCardState*,int ,int) ;
 int FUNC_9 (struct IsdnCardState*,int ,int) ;
 int FUNC_10 (struct IsdnCardState*,int ,int) ;
 int FUNC_11 (struct IsdnCardState*,int ,int) ;
 int FUNC_12 (struct IsdnCardState*,int ,int) ;
 int FUNC_13 (struct IsdnCardState*,int ,int) ;
 int FUNC_14 (struct IsdnCardState*,int ,int) ;
 scalar_t__ FUNC_15 (int ,int *) ;

void
FUNC_16(struct IsdnCardState *VAR_13)
{
 VAR_13->setstack_d = VAR_12;
 VAR_13->DC_Close = VAR_0;
 VAR_13->dc.icc.mon_tx = ((void*)0);
 VAR_13->dc.icc.mon_rx = ((void*)0);
   VAR_13->writeisac(VAR_13, VAR_6, 0xff);
   VAR_13->dc.icc.mocr = 0xaa;
 if (FUNC_15(VAR_1, &VAR_13->HW_Flags)) {

  VAR_13->writeisac(VAR_13, VAR_3, 0x0);
  VAR_13->writeisac(VAR_13, VAR_8, 0xa);
  VAR_13->writeisac(VAR_13, VAR_2, 0x2);
  VAR_13->writeisac(VAR_13, VAR_10, 0x70);
  VAR_13->writeisac(VAR_13, VAR_7, 0xc9);
 } else {

  if (!VAR_13->dc.icc.adf2)
   VAR_13->dc.icc.adf2 = 0x80;
  VAR_13->writeisac(VAR_13, VAR_3, VAR_13->dc.icc.adf2);
  VAR_13->writeisac(VAR_13, VAR_9, 0xa0);
  VAR_13->writeisac(VAR_13, VAR_8, 0x20);
  VAR_13->writeisac(VAR_13, VAR_10, 0x70);
  VAR_13->writeisac(VAR_13, VAR_7, 0xca);
  VAR_13->writeisac(VAR_13, VAR_11, 0x00);
  VAR_13->writeisac(VAR_13, VAR_2, 0x20);
 }
 FUNC_0(VAR_13, VAR_5);
 VAR_13->writeisac(VAR_13, VAR_6, 0x0);
 FUNC_0(VAR_13, VAR_4);
}
