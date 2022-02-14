
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct qib_pportdata {int lflags; int state_wanted; int state_wait; int port; int * statusp; } ;
struct qib_devdata {struct qib_pportdata* pport; int * devstatusp; int flags; TYPE_2__* cspec; TYPE_1__* eep_st_masks; } ;
struct TYPE_6__ {int sps_hdrfull; int sps_buffull; int sps_txerrs; int sps_rcverrs; } ;
struct TYPE_5__ {int errormask; char* emsgbuf; scalar_t__ lastlinkrecov; } ;
struct TYPE_4__ {int errs_to_log; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct qib_devdata*,int) ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct qib_devdata*,char*,int,int) ;
 int FUNC_5 (struct qib_devdata*,char*,...) ;
 int FUNC_6 (struct qib_devdata*,int ,char*,char*) ;
 int FUNC_7 (struct qib_pportdata*) ;
 int FUNC_8 (struct qib_devdata*,char*,int) ;
 int FUNC_9 (struct qib_pportdata*,int) ;
 int FUNC_10 (struct qib_devdata*,unsigned int) ;
 int FUNC_11 (struct qib_devdata*,int,int) ;
 int FUNC_12 (struct qib_devdata*,int ) ;
 TYPE_3__ VAR_19 ;
 int FUNC_13 (struct qib_devdata*,int ,int) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct qib_devdata *VAR_20, u64 VAR_21)
{
 char *VAR_22;
 u64 VAR_23 = 0;
 u64 VAR_24 = 0;
 int VAR_25;
 struct qib_pportdata *VAR_26 = VAR_20->pport;
 u64 VAR_27;


 VAR_21 &= VAR_20->cspec->errormask;
 VAR_22 = VAR_20->cspec->emsgbuf;


 if (VAR_21 & FUNC_0(VAR_3))
  FUNC_8(VAR_20, VAR_22, sizeof VAR_20->cspec->emsgbuf);
 else
  for (VAR_25 = 0; VAR_25 < VAR_9; ++VAR_25)
   if (VAR_21 & VAR_20->eep_st_masks[VAR_25].errs_to_log)
    FUNC_11(VAR_20, VAR_25, 1);

 if (VAR_21 & ~VAR_5)
  FUNC_5(VAR_20,
   "error interrupt with unknown errors %llx set\n",
   (unsigned long long) (VAR_21 & ~VAR_5));

 if (VAR_21 & VAR_0) {
  FUNC_7(VAR_26);
  if ((VAR_21 & VAR_1) &&
      !(VAR_26->lflags & VAR_8)) {







   VAR_23 = VAR_21 & VAR_1;
  }
 } else if ((VAR_21 & VAR_1) &&
     !(VAR_26->lflags & VAR_8)) {







  VAR_23 = VAR_21 & VAR_1;
 }

 FUNC_13(VAR_20, VAR_17, VAR_21);

 VAR_21 &= ~VAR_23;
 if (!VAR_21)
  goto done;





 VAR_27 = FUNC_0(VAR_4) | FUNC_0(VAR_14) |
  FUNC_0(VAR_15) | FUNC_0(VAR_3);
 FUNC_4(VAR_20, VAR_22, sizeof VAR_20->cspec->emsgbuf, VAR_21 & ~VAR_27);

 if (VAR_21 & VAR_2)
  VAR_19.sps_rcverrs++;
 if (VAR_21 & VAR_0)
  VAR_19.sps_txerrs++;

 VAR_24 = VAR_21 & ~(VAR_2 | VAR_13);

 if (VAR_21 & FUNC_0(VAR_4)) {
  u64 VAR_28 = FUNC_12(VAR_20, VAR_18);
  u32 VAR_29 = FUNC_2(VAR_28);
  int VAR_30 = 1;

  if (VAR_29 != VAR_7 && VAR_20->cspec->lastlinkrecov)
   VAR_30 = FUNC_1(VAR_20, VAR_28);







  if (VAR_30 && FUNC_3(VAR_28) ==
         VAR_6)
   VAR_30 = 0;
  if (VAR_30)
   FUNC_9(VAR_26, VAR_28);
 }

 if (VAR_21 & FUNC_0(VAR_16)) {
  FUNC_5(VAR_20,
   "Got reset, requires re-init (unload and reload driver)\n");
  VAR_20->flags &= ~VAR_10;

  *VAR_20->devstatusp |= VAR_11;
  *VAR_20->pport->statusp &= ~VAR_12;
 }

 if (*VAR_22 && VAR_24)
  FUNC_6(VAR_20, VAR_26->port, "%s error\n", VAR_22);

 if (VAR_26->state_wanted & VAR_26->lflags)
  FUNC_14(&VAR_26->state_wait);
 if (VAR_21 & (FUNC_0(VAR_14) | FUNC_0(VAR_15))) {
  FUNC_10(VAR_20, ~0U);
  if (VAR_21 & FUNC_0(VAR_14))
   VAR_19.sps_buffull++;
  else
   VAR_19.sps_hdrfull++;
 }
done:
 return;
}
