
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct qib_pportdata {int lflags; int state_wanted; int state_wait; int port; int * statusp; int link_speed_active; int link_width_active; } ;
struct qib_devdata {struct qib_pportdata* pport; int * devstatusp; int flags; TYPE_2__* eep_st_masks; TYPE_1__* cspec; } ;
struct TYPE_6__ {int sps_hdrfull; int sps_buffull; int sps_txerrs; int sps_rcverrs; } ;
struct TYPE_5__ {int errs_to_log; } ;
struct TYPE_4__ {int errormask; char* emsgbuf; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (struct qib_pportdata*,int) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_2 (struct qib_devdata*,char*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct qib_devdata*,char*,int,int) ;
 int FUNC_5 (struct qib_devdata*,char*,...) ;
 int FUNC_6 (struct qib_devdata*,int ,char*,char*) ;
 int FUNC_7 (struct qib_pportdata*) ;
 int FUNC_8 (struct qib_pportdata*,int) ;
 int FUNC_9 (struct qib_devdata*,unsigned int) ;
 int FUNC_10 (struct qib_devdata*,int,int) ;
 int FUNC_11 (struct qib_devdata*,int ) ;
 TYPE_3__ VAR_27 ;
 int FUNC_12 (struct qib_devdata*,int ,int) ;
 int FUNC_13 (struct qib_pportdata*,int) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct qib_devdata *VAR_28, u64 VAR_29)
{
 char *VAR_30;
 u64 VAR_31 = 0;
 u64 VAR_32 = 0;
 int VAR_33;
 struct qib_pportdata *VAR_34 = VAR_28->pport;
 u64 VAR_35;


 VAR_29 &= VAR_28->cspec->errormask;
 VAR_30 = VAR_28->cspec->emsgbuf;


 if (VAR_29 & FUNC_0(VAR_3))
  FUNC_2(VAR_28, VAR_30, sizeof VAR_28->cspec->emsgbuf);
 else
  for (VAR_33 = 0; VAR_33 < VAR_13; ++VAR_33)
   if (VAR_29 & VAR_28->eep_st_masks[VAR_33].errs_to_log)
    FUNC_10(VAR_28, VAR_33, 1);

 if (VAR_29 & VAR_20)
  FUNC_13(VAR_34, VAR_29);

 if (VAR_29 & ~VAR_7)
  FUNC_5(VAR_28,
   "error interrupt with unknown errors %llx set\n",
   (unsigned long long) (VAR_29 & ~VAR_7));

 if (VAR_29 & VAR_0) {
  FUNC_7(VAR_34);
  if ((VAR_29 & VAR_1) &&
      !(VAR_34->lflags & VAR_12)) {







   VAR_31 = VAR_29 & VAR_1;
  }
 } else if ((VAR_29 & VAR_1) &&
     !(VAR_34->lflags & VAR_12)) {







  VAR_31 = VAR_29 & VAR_1;
 }

 FUNC_12(VAR_28, VAR_25, VAR_29);

 VAR_29 &= ~VAR_31;
 if (!VAR_29)
  goto done;






 VAR_35 = FUNC_0(VAR_6) |
  FUNC_0(VAR_21) | FUNC_0(VAR_22) |
  FUNC_0(VAR_3) | FUNC_0(VAR_24);

 FUNC_4(VAR_28, VAR_30, sizeof VAR_28->cspec->emsgbuf, VAR_29 & ~VAR_35);

 if (VAR_29 & VAR_2)
  VAR_27.sps_rcverrs++;
 if (VAR_29 & VAR_0)
  VAR_27.sps_txerrs++;
 VAR_32 = VAR_29 & ~(VAR_2 | VAR_19 |
    FUNC_0(VAR_24));

 if (VAR_29 & FUNC_0(VAR_6)) {
  u64 VAR_36;

  VAR_36 = FUNC_11(VAR_28, VAR_26);
  if (!(VAR_34->lflags & VAR_11))
   FUNC_1(VAR_34, VAR_36);


  VAR_34->link_width_active =
   ((VAR_36 >> VAR_5) & 1) ?
       VAR_10 : VAR_9;
  VAR_34->link_speed_active =
   ((VAR_36 >> VAR_4) & 1) ?
       VAR_14 : VAR_15;
  if (FUNC_3(VAR_36) !=
         VAR_8)
   FUNC_8(VAR_34, VAR_36);
 }

 if (VAR_29 & FUNC_0(VAR_23)) {
  FUNC_5(VAR_28,
   "Got reset, requires re-init (unload and reload driver)\n");
  VAR_28->flags &= ~VAR_16;

  *VAR_28->devstatusp |= VAR_17;
  *VAR_28->pport->statusp &= ~VAR_18;
 }

 if (*VAR_30 && VAR_32)
  FUNC_6(VAR_28, VAR_34->port, "%s error\n", VAR_30);

 if (VAR_34->state_wanted & VAR_34->lflags)
  FUNC_14(&VAR_34->state_wait);
 if (VAR_29 & (FUNC_0(VAR_21) | FUNC_0(VAR_22))) {
  FUNC_9(VAR_28, ~0U);
  if (VAR_29 & FUNC_0(VAR_21))
   VAR_27.sps_buffull++;
  else
   VAR_27.sps_hdrfull++;
 }
done:
 return;
}
