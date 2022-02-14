
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int* mon_tx; int arcofi_bc; int mocr; scalar_t__ mon_txp; int mon_txc; TYPE_1__* arcofi_list; } ;
struct TYPE_6__ {TYPE_2__ isac; } ;
struct IsdnCardState {TYPE_3__ dc; int (* writeisac ) (struct IsdnCardState*,int ,int) ;int (* readisac ) (struct IsdnCardState*,int ) ;} ;
struct TYPE_4__ {int msg; int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct IsdnCardState*) ;
 int FUNC_1 (int*,int ,int ) ;
 int FUNC_2 (struct IsdnCardState*,int ,int) ;
 int FUNC_3 (struct IsdnCardState*,int ) ;
 int FUNC_4 (struct IsdnCardState*,int ,int) ;
 int FUNC_5 (struct IsdnCardState*,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct IsdnCardState *VAR_3) {
 u_char VAR_4;

 FUNC_0(VAR_3);
 VAR_3->dc.isac.mon_txp = 0;
 VAR_3->dc.isac.mon_txc = VAR_3->dc.isac.arcofi_list->len;
 FUNC_1(VAR_3->dc.isac.mon_tx, VAR_3->dc.isac.arcofi_list->msg, VAR_3->dc.isac.mon_txc);
 switch(VAR_3->dc.isac.arcofi_bc) {
  case 0: break;
  case 1: VAR_3->dc.isac.mon_tx[1] |= 0x40;
   break;
  default: break;
 }
 VAR_3->dc.isac.mocr &= 0x0f;
 VAR_3->dc.isac.mocr |= 0xa0;
 VAR_3->writeisac(VAR_3, VAR_0, VAR_3->dc.isac.mocr);
 VAR_4 = VAR_3->readisac(VAR_3, VAR_1);
 VAR_3->writeisac(VAR_3, VAR_2, VAR_3->dc.isac.mon_tx[VAR_3->dc.isac.mon_txp++]);
 VAR_3->dc.isac.mocr |= 0x10;
 VAR_3->writeisac(VAR_3, VAR_0, VAR_3->dc.isac.mocr);
}
