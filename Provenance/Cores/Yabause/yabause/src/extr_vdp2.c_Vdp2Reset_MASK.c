
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_18__ {int disptoggle; } ;
struct TYPE_17__ {scalar_t__ ColorMode; } ;
struct TYPE_14__ {int all; } ;
struct TYPE_13__ {int all; } ;
struct TYPE_12__ {int all; } ;
struct TYPE_11__ {int all; } ;
struct TYPE_10__ {int all; } ;
struct TYPE_16__ {int TVMD; int EXTEN; int TVSTAT; int VRSIZE; int RAMCTL; int BGON; int CHCTLA; int CHCTLB; int BMPNA; int MPOFN; int MPABN2; int MPCDN2; int SCXIN0; int SCXDN0; int SCYIN0; int SCYDN0; int SCXIN1; int SCXDN1; int SCYIN1; int SCYDN1; int SCXN2; int SCYN2; int SCXN3; int SCYN3; int ZMCTL; int SCRCTL; int BKTAU; int BKTAL; int RPMD; int RPRCTL; int KTCTL; int KTAOF; int OVPNRA; int OVPNRB; int WPSX0; int WPSY0; int WPEX0; int WPEY0; int WPSX1; int WPSY1; int WPEX1; int WPEY1; int WCTLA; int WCTLB; int WCTLC; int WCTLD; int SPCTL; int SDCTL; int CRAOFA; int CRAOFB; int LNCLEN; int SFPRMD; int CCCTL; int SFCCMD; int PRISA; int PRISB; int PRISC; int PRISD; int PRINA; int PRINB; int PRIR; int CCRNA; int CCRNB; int CLOFEN; int CLOFSL; int COAR; int COAG; int COAB; int COBR; int COBG; int COBB; TYPE_5__ VCSTA; TYPE_4__ ZMYN1; TYPE_3__ ZMXN1; TYPE_2__ ZMYN0; TYPE_1__ ZMXN0; } ;
struct TYPE_15__ {int VBlankLineCount; } ;


 TYPE_9__ VAR_0 ;
 TYPE_8__ VAR_1 ;
 TYPE_7__* VAR_2 ;
 TYPE_6__ VAR_3 ;

void FUNC_0(void) {
   VAR_2->TVMD = 0x0000;
   VAR_2->EXTEN = 0x0000;
   VAR_2->TVSTAT = VAR_2->TVSTAT & 0x1;
   VAR_2->VRSIZE = 0x0000;
   VAR_2->RAMCTL = 0x0000;
   VAR_2->BGON = 0x0000;
   VAR_2->CHCTLA = 0x0000;
   VAR_2->CHCTLB = 0x0000;
   VAR_2->BMPNA = 0x0000;
   VAR_2->MPOFN = 0x0000;
   VAR_2->MPABN2 = 0x0000;
   VAR_2->MPCDN2 = 0x0000;
   VAR_2->SCXIN0 = 0x0000;
   VAR_2->SCXDN0 = 0x0000;
   VAR_2->SCYIN0 = 0x0000;
   VAR_2->SCYDN0 = 0x0000;
   VAR_2->ZMXN0.all = 0x00000000;
   VAR_2->ZMYN0.all = 0x00000000;
   VAR_2->SCXIN1 = 0x0000;
   VAR_2->SCXDN1 = 0x0000;
   VAR_2->SCYIN1 = 0x0000;
   VAR_2->SCYDN1 = 0x0000;
   VAR_2->ZMXN1.all = 0x00000000;
   VAR_2->ZMYN1.all = 0x00000000;
   VAR_2->SCXN2 = 0x0000;
   VAR_2->SCYN2 = 0x0000;
   VAR_2->SCXN3 = 0x0000;
   VAR_2->SCYN3 = 0x0000;
   VAR_2->ZMCTL = 0x0000;
   VAR_2->SCRCTL = 0x0000;
   VAR_2->VCSTA.all = 0x00000000;
   VAR_2->BKTAU = 0x0000;
   VAR_2->BKTAL = 0x0000;
   VAR_2->RPMD = 0x0000;
   VAR_2->RPRCTL = 0x0000;
   VAR_2->KTCTL = 0x0000;
   VAR_2->KTAOF = 0x0000;
   VAR_2->OVPNRA = 0x0000;
   VAR_2->OVPNRB = 0x0000;
   VAR_2->WPSX0 = 0x0000;
   VAR_2->WPSY0 = 0x0000;
   VAR_2->WPEX0 = 0x0000;
   VAR_2->WPEY0 = 0x0000;
   VAR_2->WPSX1 = 0x0000;
   VAR_2->WPSY1 = 0x0000;
   VAR_2->WPEX1 = 0x0000;
   VAR_2->WPEY1 = 0x0000;
   VAR_2->WCTLA = 0x0000;
   VAR_2->WCTLB = 0x0000;
   VAR_2->WCTLC = 0x0000;
   VAR_2->WCTLD = 0x0000;
   VAR_2->SPCTL = 0x0000;
   VAR_2->SDCTL = 0x0000;
   VAR_2->CRAOFA = 0x0000;
   VAR_2->CRAOFB = 0x0000;
   VAR_2->LNCLEN = 0x0000;
   VAR_2->SFPRMD = 0x0000;
   VAR_2->CCCTL = 0x0000;
   VAR_2->SFCCMD = 0x0000;
   VAR_2->PRISA = 0x0000;
   VAR_2->PRISB = 0x0000;
   VAR_2->PRISC = 0x0000;
   VAR_2->PRISD = 0x0000;
   VAR_2->PRINA = 0x0000;
   VAR_2->PRINB = 0x0000;
   VAR_2->PRIR = 0x0000;
   VAR_2->CCRNA = 0x0000;
   VAR_2->CCRNB = 0x0000;
   VAR_2->CLOFEN = 0x0000;
   VAR_2->CLOFSL = 0x0000;
   VAR_2->COAR = 0x0000;
   VAR_2->COAG = 0x0000;
   VAR_2->COAB = 0x0000;
   VAR_2->COBR = 0x0000;
   VAR_2->COBG = 0x0000;
   VAR_2->COBB = 0x0000;

   VAR_3.VBlankLineCount = 225;
   VAR_1.ColorMode = 0;

   VAR_0.disptoggle = 0xFF;
}
