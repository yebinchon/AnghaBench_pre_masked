
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int periodic_flags; } ;
struct TYPE_5__ {scalar_t__ pmf; } ;
struct bnx2x {scalar_t__ dcbx_enabled; TYPE_2__ link_vars; TYPE_1__ port; int * mf_config; } ;
struct TYPE_8__ {int drv_status; } ;
struct TYPE_7__ {int config; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*) ;
 size_t FUNC_3 (struct bnx2x*) ;
 size_t FUNC_4 (struct bnx2x*) ;
 scalar_t__ FUNC_5 (struct bnx2x*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_6 (struct bnx2x*) ;
 int FUNC_7 (struct bnx2x*,int ) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_8 (struct bnx2x*,int ) ;
 int FUNC_9 (struct bnx2x*,scalar_t__,int) ;
 int FUNC_10 (struct bnx2x*,int ) ;
 int FUNC_11 (struct bnx2x*) ;
 int FUNC_12 (struct bnx2x*) ;
 int FUNC_13 (struct bnx2x*,int ) ;
 int FUNC_14 (struct bnx2x*,int) ;
 int FUNC_15 (struct bnx2x*) ;
 int FUNC_16 (struct bnx2x*,int) ;
 int FUNC_17 (struct bnx2x*) ;
 int FUNC_18 (struct bnx2x*) ;
 int FUNC_19 (struct bnx2x*) ;
 int FUNC_20 (struct bnx2x*) ;
 int FUNC_21 (struct bnx2x*) ;
 int FUNC_22 () ;
 int FUNC_23 (struct bnx2x*) ;
 int FUNC_24 (struct bnx2x*) ;
 int FUNC_25 (struct bnx2x*) ;
 int FUNC_26 (struct bnx2x*) ;
 int FUNC_27 (struct bnx2x*) ;
 TYPE_4__* VAR_26 ;
 TYPE_3__* VAR_27 ;

__attribute__((used)) static void FUNC_28(struct bnx2x *VAR_28, u32 VAR_29)
{
 u32 VAR_30;

 if (VAR_29 & VAR_14) {

  if (VAR_29 & VAR_5) {
   int VAR_31 = FUNC_2(VAR_28);

   FUNC_9(VAR_28, VAR_19 + VAR_31*4, 0);
   FUNC_24(VAR_28);
   VAR_28->mf_config[FUNC_4(VAR_28)] = FUNC_7(VAR_28,
     VAR_27[FUNC_1(VAR_28)].config);
   VAR_30 = FUNC_10(VAR_28,
           VAR_26[FUNC_3(VAR_28)].drv_status);
   if (VAR_30 & VAR_8)
    FUNC_14(VAR_28,
         (VAR_30 & VAR_8));

   if (VAR_30 & VAR_12)
    FUNC_26(VAR_28);

   if (VAR_30 & VAR_9)
    FUNC_17(VAR_28);

   if (VAR_30 & VAR_13)
    FUNC_27(VAR_28);

   if ((VAR_28->port.pmf == 0) && (VAR_30 & VAR_11))
    FUNC_23(VAR_28);

   if (VAR_28->port.pmf &&
       (VAR_30 & VAR_7) &&
    VAR_28->dcbx_enabled > 0)

    FUNC_13(VAR_28,
     VAR_0);
   if (VAR_30 & VAR_6)
    FUNC_16(VAR_28,
     VAR_30 & VAR_6);
   if (VAR_30 & VAR_10)
    FUNC_18(VAR_28);
   if (VAR_28->link_vars.periodic_flags &
       VAR_25) {

    FUNC_12(VAR_28);
    VAR_28->link_vars.periodic_flags &=
     ~VAR_25;
    FUNC_25(VAR_28);
    if (FUNC_6(VAR_28))
     FUNC_20(VAR_28);
    FUNC_19(VAR_28);
   }



   FUNC_11(VAR_28);
  } else if (VAR_29 & VAR_4) {

   FUNC_0("MC assert!\n");
   FUNC_21(VAR_28);
   FUNC_9(VAR_28, VAR_17, 0);
   FUNC_9(VAR_28, VAR_22, 0);
   FUNC_9(VAR_28, VAR_21, 0);
   FUNC_9(VAR_28, VAR_20, 0);
   FUNC_22();

  } else if (VAR_29 & VAR_3) {

   FUNC_0("MCP assert!\n");
   FUNC_9(VAR_28, VAR_18, 0);
   FUNC_15(VAR_28);

  } else
   FUNC_0("Unknown HW assert! (attn 0x%x)\n", VAR_29);
 }

 if (VAR_29 & VAR_15) {
  FUNC_0("LATCHED attention 0x%08x (masked)\n", VAR_29);
  if (VAR_29 & VAR_2) {
   VAR_30 = FUNC_5(VAR_28) ? 0 :
     FUNC_8(VAR_28, VAR_24);
   FUNC_0("GRC time-out 0x%08x\n", VAR_30);
  }
  if (VAR_29 & VAR_1) {
   VAR_30 = FUNC_5(VAR_28) ? 0 :
     FUNC_8(VAR_28, VAR_23);
   FUNC_0("GRC reserved 0x%08x\n", VAR_30);
  }
  FUNC_9(VAR_28, VAR_16, 0x7ff);
 }
}
