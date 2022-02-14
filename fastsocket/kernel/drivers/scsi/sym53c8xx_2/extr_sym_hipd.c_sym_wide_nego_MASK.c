
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ offset; int period; } ;
struct sym_tcb {TYPE_1__ tgoal; } ;
struct sym_hcb {int msgout; } ;
struct sym_ccb {scalar_t__ nego_status; int target; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sym_hcb*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct sym_hcb*,int ,scalar_t__) ;
 int FUNC_2 (struct sym_hcb*,int ) ;
 int FUNC_3 (struct sym_hcb*,int ) ;
 int FUNC_4 (struct sym_hcb*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (struct sym_hcb*,int ,char*,int ) ;
 int FUNC_7 (struct sym_hcb*,int,struct sym_ccb*) ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_8(struct sym_hcb *VAR_11, struct sym_tcb *VAR_12, struct sym_ccb *VAR_13)
{
 int VAR_14 = 1;
 int VAR_15;




 if (FUNC_0(VAR_11, VAR_4) == VAR_3) {
  FUNC_1(VAR_11, VAR_4, VAR_2);
  if (VAR_13->nego_status && VAR_13->nego_status != VAR_6)
   goto reject_it;
  VAR_14 = 0;
 }




 VAR_15 = FUNC_7(VAR_11, VAR_14, VAR_13);
 if (VAR_15)
  goto reject_it;
 if (VAR_14) {
  VAR_13->nego_status = VAR_6;
  FUNC_2(VAR_11, FUNC_4(VAR_11, VAR_10));
 } else {





  if (VAR_12->tgoal.offset) {
   FUNC_5(VAR_11->msgout, VAR_12->tgoal.period,
     VAR_12->tgoal.offset);

   if (VAR_0 & VAR_1) {
    FUNC_6(VAR_11, VAR_13->target,
                       "sync msgout", VAR_11->msgout);
   }

   VAR_13->nego_status = VAR_5;
   FUNC_1(VAR_11, VAR_4, VAR_3);
   FUNC_2(VAR_11, FUNC_4(VAR_11, VAR_9));
   return;
  } else
   FUNC_2(VAR_11, FUNC_3(VAR_11, VAR_7));
 }

 return;

reject_it:
 FUNC_2(VAR_11, FUNC_4(VAR_11, VAR_8));
}
