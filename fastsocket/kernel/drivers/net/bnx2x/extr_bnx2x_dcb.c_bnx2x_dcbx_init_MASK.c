
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {int pmf; } ;
struct bnx2x {int flags; scalar_t__ dcbx_enabled; scalar_t__ dcb_state; TYPE_1__ port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,scalar_t__,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct bnx2x*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct bnx2x*,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (struct bnx2x*,scalar_t__) ;
 int FUNC_5 (struct bnx2x*,int ,int ) ;
 int FUNC_6 (struct bnx2x*,int ) ;
 int FUNC_7 (struct bnx2x*,int,int ) ;

void FUNC_8(struct bnx2x *VAR_7, bool VAR_8)
{
 u32 VAR_9 = VAR_6;


 if ((!VAR_7->port.pmf) && (!(VAR_7->flags & VAR_0)))
  return;

 if (VAR_7->dcbx_enabled <= 0)
  return;






 FUNC_0(VAR_2, "dcb_state %d bp->port.pmf %d\n",
    VAR_7->dcb_state, VAR_7->port.pmf);

 if (VAR_7->dcb_state == VAR_1 &&
     FUNC_1(VAR_7, VAR_9)) {
  VAR_9 =
   FUNC_2(VAR_7, VAR_9);

  FUNC_0(VAR_2, "dcbx_lldp_params_offset 0x%x\n",
     VAR_9);

  FUNC_7(VAR_7, 1 << VAR_3, 0);

  if (VAR_6 != VAR_9) {



   FUNC_3(VAR_7,
           VAR_5);
   if (VAR_8)
    FUNC_4(VAR_7,
     VAR_9);


   FUNC_5(VAR_7,
      VAR_4, 0);



   FUNC_6(VAR_7,
           VAR_5);
  }
 }
}
