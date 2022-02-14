
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_13__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_11__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct TYPE_28__ {scalar_t__ VDD_OK; } ;
struct TYPE_29__ {TYPE_7__ bitreg; } ;
struct TYPE_30__ {TYPE_8__ xr0; } ;
struct TYPE_26__ {int rly1; int rly3; scalar_t__ rly2; } ;
struct TYPE_27__ {int byte; TYPE_5__ bits; } ;
struct TYPE_24__ {scalar_t__ daafsyncen; } ;
struct TYPE_25__ {int byte; TYPE_3__ bits; } ;
struct TYPE_22__ {scalar_t__ potspstn; } ;
struct TYPE_23__ {TYPE_1__ bits; int byte; } ;
struct TYPE_20__ {int pstncheck; int pstn_present; int pots_pstn; int pots_correct; } ;
struct TYPE_18__ {TYPE_9__ XOP; } ;
struct TYPE_19__ {TYPE_10__ XOP_REGS; } ;
struct TYPE_21__ {TYPE_12__ flags; scalar_t__ pstn_sleeptil; TYPE_11__ m_DAAShadowRegs; scalar_t__ XILINXbase; TYPE_6__ pld_slicw; TYPE_4__ pld_scrw; TYPE_2__ pld_slicr; } ;
typedef TYPE_13__ IXJ ;


 int FUNC_0 (int,TYPE_13__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_13__*) ;
 int FUNC_2 (TYPE_13__*,int ) ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(IXJ *VAR_4)
{
 VAR_4->flags.pstncheck = 1;
 VAR_4->flags.pstn_present = 0;

 FUNC_1(VAR_4);




 VAR_4->pld_slicw.bits.rly1 = 0;
 VAR_4->pld_slicw.bits.rly2 = 0;
 VAR_4->pld_slicw.bits.rly3 = 0;
 FUNC_5(VAR_4->pld_slicw.byte, VAR_4->XILINXbase + 0x01);
 VAR_4->pld_scrw.bits.daafsyncen = 0;

 FUNC_5(VAR_4->pld_scrw.byte, VAR_4->XILINXbase);
 VAR_4->pld_slicr.byte = FUNC_3(VAR_4->XILINXbase + 0x01);
 if (VAR_4->pld_slicr.bits.potspstn) {
  VAR_4->flags.pots_pstn = 1;
  VAR_4->flags.pots_correct = 0;
  FUNC_0(0x4, VAR_4);
 } else {
  VAR_4->flags.pots_pstn = 0;
  VAR_4->pld_slicw.bits.rly1 = 0;
  VAR_4->pld_slicw.bits.rly2 = 0;
  VAR_4->pld_slicw.bits.rly3 = 1;
  FUNC_5(VAR_4->pld_slicw.byte, VAR_4->XILINXbase + 0x01);
  VAR_4->pld_scrw.bits.daafsyncen = 0;

  FUNC_5(VAR_4->pld_scrw.byte, VAR_4->XILINXbase);
  FUNC_2(VAR_4, VAR_0);
  FUNC_4(1000);
  FUNC_1(VAR_4);
  FUNC_2(VAR_4, VAR_1);
  if (VAR_4->m_DAAShadowRegs.XOP_REGS.XOP.xr0.bitreg.VDD_OK) {
   VAR_4->flags.pots_correct = 0;
   FUNC_0(0x4, VAR_4);
   VAR_4->pld_slicw.bits.rly3 = 0;
   FUNC_5(VAR_4->pld_slicw.byte, VAR_4->XILINXbase + 0x01);
  } else {
   VAR_4->flags.pots_correct = 1;
   FUNC_0(0x8, VAR_4);
   VAR_4->pld_slicw.bits.rly1 = 1;
   VAR_4->pld_slicw.bits.rly2 = 0;
   VAR_4->pld_slicw.bits.rly3 = 0;
   FUNC_5(VAR_4->pld_slicw.byte, VAR_4->XILINXbase + 0x01);
  }
 }
 VAR_4->pld_slicw.bits.rly3 = 0;
 FUNC_5(VAR_4->pld_slicw.byte, VAR_4->XILINXbase + 0x01);
 FUNC_2(VAR_4, VAR_0);
 FUNC_4(1000);
 FUNC_1(VAR_4);
 FUNC_2(VAR_4, VAR_1);
 if (VAR_4->m_DAAShadowRegs.XOP_REGS.XOP.xr0.bitreg.VDD_OK) {
  VAR_4->pstn_sleeptil = VAR_3 + (VAR_2 / 4);
  VAR_4->flags.pstn_present = 1;
 } else {
  VAR_4->flags.pstn_present = 0;
 }
 if (VAR_4->flags.pstn_present) {
  if (VAR_4->flags.pots_correct) {
   FUNC_0(0xA, VAR_4);
  } else {
   FUNC_0(0x6, VAR_4);
  }
 } else {
  if (VAR_4->flags.pots_correct) {
   FUNC_0(0x9, VAR_4);
  } else {
   FUNC_0(0x5, VAR_4);
  }
 }
 VAR_4->flags.pstncheck = 0;
 return VAR_4->flags.pstn_present;
}
