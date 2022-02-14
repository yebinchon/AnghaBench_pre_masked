
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
typedef int u_char ;
struct TYPE_3__ {int isac; int adr; int hscx; } ;
struct TYPE_4__ {TYPE_1__ sedl; } ;
struct IsdnCardState {int debug; int lock; TYPE_2__ hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct IsdnCardState*,char*,...) ;
 int FUNC_1 (struct IsdnCardState*,int) ;
 int FUNC_2 (struct IsdnCardState*,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ,int ,int) ;

__attribute__((used)) static irqreturn_t
FUNC_7(int VAR_7, void *VAR_8)
{
 struct IsdnCardState *VAR_9 = VAR_8;
 u_char VAR_10, VAR_11, VAR_12 = 5;
 u_long VAR_13;

 FUNC_4(&VAR_9->lock, VAR_13);
 VAR_10 = FUNC_3(VAR_9->hw.sedl.adr, VAR_9->hw.sedl.isac, VAR_1);
Start_IPAC:
 if (VAR_9->debug & VAR_5)
  FUNC_0(VAR_9, "IPAC ISTA %02X", VAR_10);
 if (VAR_10 & 0x0f) {
  VAR_11 = FUNC_3(VAR_9->hw.sedl.adr, VAR_9->hw.sedl.hscx, VAR_0 + 0x40);
  if (VAR_10 & 0x01)
   VAR_11 |= 0x01;
  if (VAR_10 & 0x04)
   VAR_11 |= 0x02;
  if (VAR_10 & 0x08)
   VAR_11 |= 0x04;
  if (VAR_11)
   FUNC_1(VAR_9, VAR_11);
 }
 if (VAR_10 & 0x20) {
  VAR_11 = 0xfe & FUNC_3(VAR_9->hw.sedl.adr, VAR_9->hw.sedl.isac, VAR_4 | 0x80);
  if (VAR_11) {
   FUNC_2(VAR_9, VAR_11);
  }
 }
 if (VAR_10 & 0x10) {
  VAR_11 = 0x01;
  FUNC_2(VAR_9, VAR_11);
 }
 VAR_10 = FUNC_3(VAR_9->hw.sedl.adr, VAR_9->hw.sedl.isac, VAR_1);
 if ((VAR_10 & 0x3f) && VAR_12) {
  VAR_12--;
  goto Start_IPAC;
 }
 if (!VAR_12)
  if (VAR_9->debug & VAR_6)
   FUNC_0(VAR_9, "Sedlbauer IRQ LOOP");
 FUNC_6(VAR_9->hw.sedl.adr, VAR_9->hw.sedl.isac, VAR_2, 0xFF);
 FUNC_6(VAR_9->hw.sedl.adr, VAR_9->hw.sedl.isac, VAR_2, 0xC0);
 FUNC_5(&VAR_9->lock, VAR_13);
 return VAR_3;
}
