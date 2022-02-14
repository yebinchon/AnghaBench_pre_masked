
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int u32 ;
struct ipath_portdata {int port_rcvhdrq_size; } ;
struct TYPE_9__ {unsigned long data; void* expires; int function; } ;
struct ipath_devdata {unsigned long long ipath_rcvhdrcnt; int ipath_piobcnt2k; int ipath_piobcnt4k; int ipath_pioavregs; int ipath_cfgports; int ipath_pioreserved; int ipath_lastport_piobuf; int ipath_pbufsport; int ipath_ports_extrabuf; int ipath_lastpioindexl; int (* ipath_f_early_init ) (struct ipath_devdata*) ;int ipath_hdrqlast; int ipath_rcvhdrentsize; unsigned long long ipath_rcvhdrsize; unsigned long long ipath_pioavailregs_phys; unsigned long long ipath_hwerrmask; unsigned long long ipath_maskederrs; unsigned long ipath_dummy_hdrq_phys; int ipath_stats_timer_active; int ipath_flags; TYPE_4__ ipath_intrchk_timer; int * ipath_statusp; TYPE_1__* ipath_kregs; int (* ipath_f_intrsetup ) (struct ipath_devdata*) ;int ipath_hol_state; TYPE_4__ ipath_hol_timer; TYPE_4__ ipath_stats_timer; struct ipath_portdata** ipath_pd; TYPE_2__* pcidev; int ipath_dummy_hdrq; int (* ipath_f_tidtemplate ) (struct ipath_devdata*) ;void* ipath_errormask; int (* ipath_f_init_hwerrors ) (struct ipath_devdata*) ;scalar_t__ ipath_lastpioindex; int ipath_rcvegrcnt; int ipath_p0_rcvegrcnt; } ;
typedef int gfp_t ;
struct TYPE_8__ {scalar_t__ sps_nports; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {int kr_intclear; int kr_intmask; int kr_errormask; int kr_errorclear; int kr_hwerrmask; int kr_hwerrclear; int kr_control; int kr_rcvbthqp; int kr_sendpioavailaddr; int kr_rcvhdrsize; int kr_rcvhdrentsize; int kr_rcvhdrcnt; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned long long VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned long long VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (struct ipath_devdata*) ;
 int FUNC_3 (struct ipath_devdata*) ;
 struct ipath_portdata* FUNC_4 (struct ipath_devdata*) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (int *,int ,unsigned long*,int) ;
 int FUNC_7 (struct ipath_devdata*,int) ;
 int FUNC_8 (struct ipath_devdata*,int) ;
 int FUNC_9 (struct ipath_devdata*) ;
 int FUNC_10 (struct ipath_devdata*) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (struct ipath_devdata*,int) ;
 int FUNC_13 (int ,char*,int,int,int,int) ;
 int FUNC_14 (struct ipath_devdata*,int ,int,int) ;
 int FUNC_15 (struct ipath_devdata*,struct ipath_portdata*) ;
 int FUNC_16 (char*,int,...) ;
 int FUNC_17 (struct ipath_devdata*,char*,...) ;
 int FUNC_18 (struct ipath_devdata*,struct ipath_portdata*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_19 (struct ipath_devdata*,int ) ;
 TYPE_3__ VAR_19 ;
 int FUNC_20 (struct ipath_devdata*,int ,unsigned long long) ;
 void* VAR_20 ;
 unsigned long long FUNC_21 (int ,int ) ;
 int FUNC_22 (struct ipath_devdata*) ;
 int FUNC_23 (struct ipath_devdata*) ;
 int FUNC_24 (struct ipath_devdata*) ;
 int FUNC_25 (struct ipath_devdata*) ;
 int FUNC_26 (struct ipath_devdata*) ;
 int VAR_21 ;

int FUNC_27(struct ipath_devdata *VAR_22, int VAR_23)
{
 int VAR_24 = 0;
 u32 VAR_25, VAR_26;
 u32 VAR_27, VAR_28;
 u64 VAR_29;
 struct ipath_portdata *VAR_30;
 gfp_t VAR_31 = VAR_5 | VAR_15;

 VAR_24 = FUNC_8(VAR_22, VAR_23);
 if (VAR_24)
  goto done;





 if (VAR_24 == 2) {

  VAR_24 = -VAR_4;
  goto done;
 }







 VAR_22->ipath_rcvhdrcnt = FUNC_21(VAR_22->ipath_p0_rcvegrcnt, VAR_22->ipath_rcvegrcnt);
 FUNC_20(VAR_22, VAR_22->ipath_kregs->kr_rcvhdrcnt,
    VAR_22->ipath_rcvhdrcnt);







 VAR_27 = VAR_22->ipath_piobcnt2k + VAR_22->ipath_piobcnt4k;




 VAR_22->ipath_pioavregs = FUNC_0(VAR_27, sizeof(u64) * VAR_0 / 2)
  / (sizeof(u64) * VAR_0 / 2);
 VAR_28 = VAR_22->ipath_cfgports ? VAR_22->ipath_cfgports - 1 : 0;
 if (VAR_27 > 144)
  VAR_26 = 32 + VAR_22->ipath_pioreserved;
 else
  VAR_26 = 16 + VAR_22->ipath_pioreserved;

 if (VAR_18 && (VAR_18 +
  (VAR_28 * VAR_11)) > VAR_27) {
  int VAR_32 = (int) VAR_27 -
   (int) (VAR_28 * VAR_11);
  if (VAR_32 < 1)
   VAR_32 = 1;
  FUNC_5(&VAR_22->pcidev->dev, "Allocating %d PIO bufs of "
    "%d for kernel leaves too few for %d user ports "
    "(%d each); using %u\n", VAR_18,
    VAR_27, VAR_28, VAR_11, VAR_32);




  VAR_25 = VAR_32;
 } else if (VAR_18)
  VAR_25 = VAR_18;
 else
  VAR_25 = VAR_26;
 VAR_22->ipath_lastport_piobuf = VAR_27 - VAR_25;
 VAR_22->ipath_pbufsport =
  VAR_28 ? VAR_22->ipath_lastport_piobuf / VAR_28 : 0;

 VAR_22->ipath_ports_extrabuf = VAR_22->ipath_lastport_piobuf -
  (VAR_22->ipath_pbufsport * VAR_28);
 if (VAR_22->ipath_ports_extrabuf)
  FUNC_16("%u pbufs/port leaves some unused, add 1 buffer to "
   "ports <= %u\n", VAR_22->ipath_pbufsport,
   VAR_22->ipath_ports_extrabuf);
 VAR_22->ipath_lastpioindex = 0;
 VAR_22->ipath_lastpioindexl = VAR_22->ipath_piobcnt2k;

 FUNC_13(VAR_14, "%d PIO bufs for kernel out of %d total %u "
     "each for %u user ports\n", VAR_25,
     VAR_27, VAR_22->ipath_pbufsport, VAR_28);
 VAR_24 = VAR_22->ipath_f_early_init(VAR_22);
 if (VAR_24) {
  FUNC_17(VAR_22, "Early initialization failure\n");
  goto done;
 }





 VAR_22->ipath_hdrqlast =
  VAR_22->ipath_rcvhdrentsize * (VAR_22->ipath_rcvhdrcnt - 1);
 FUNC_20(VAR_22, VAR_22->ipath_kregs->kr_rcvhdrentsize,
    VAR_22->ipath_rcvhdrentsize);
 FUNC_20(VAR_22, VAR_22->ipath_kregs->kr_rcvhdrsize,
    VAR_22->ipath_rcvhdrsize);

 if (!VAR_23) {
  VAR_24 = FUNC_9(VAR_22);
  FUNC_10(VAR_22);
  if (VAR_24)
   goto done;
 }

 FUNC_20(VAR_22, VAR_22->ipath_kregs->kr_sendpioavailaddr,
    VAR_22->ipath_pioavailregs_phys);





 VAR_29 = FUNC_19(VAR_22, VAR_22->ipath_kregs->kr_sendpioavailaddr);
 if (VAR_29 != VAR_22->ipath_pioavailregs_phys) {
  FUNC_17(VAR_22, "Catastrophic software error, "
         "SendPIOAvailAddr written as %lx, "
         "read back as %llx\n",
         (unsigned long) VAR_22->ipath_pioavailregs_phys,
         (unsigned long long) VAR_29);
  VAR_24 = -VAR_1;
  goto done;
 }

 FUNC_20(VAR_22, VAR_22->ipath_kregs->kr_rcvbthqp, VAR_10);





 FUNC_20(VAR_22, VAR_22->ipath_kregs->kr_hwerrmask, 0ULL);
 FUNC_20(VAR_22, VAR_22->ipath_kregs->kr_hwerrclear,
    ~0ULL&~VAR_7);
 FUNC_20(VAR_22, VAR_22->ipath_kregs->kr_control, 0ULL);





 if (FUNC_2(VAR_22)) {
  FUNC_5(&VAR_22->pcidev->dev, "Failed to bringup IB link\n");
  VAR_24 = -VAR_2;
  goto done;
 }






 VAR_22->ipath_f_init_hwerrors(VAR_22);
 FUNC_20(VAR_22, VAR_22->ipath_kregs->kr_hwerrclear,
    ~0ULL&~VAR_7);
 FUNC_20(VAR_22, VAR_22->ipath_kregs->kr_hwerrmask,
    VAR_22->ipath_hwerrmask);


 FUNC_20(VAR_22, VAR_22->ipath_kregs->kr_errorclear, -1LL);

 FUNC_20(VAR_22, VAR_22->ipath_kregs->kr_errormask,
    ~VAR_22->ipath_maskederrs);
 VAR_22->ipath_maskederrs = 0;
 VAR_22->ipath_errormask =
  FUNC_19(VAR_22, VAR_22->ipath_kregs->kr_errormask);

 FUNC_20(VAR_22, VAR_22->ipath_kregs->kr_intclear, -1LL);

 VAR_22->ipath_f_tidtemplate(VAR_22);







 VAR_30 = VAR_22->ipath_pd[0];
 if (VAR_23) {
  struct ipath_portdata *VAR_33;






  VAR_33 = FUNC_4(VAR_22);
  if (VAR_33) {
   FUNC_18(VAR_22, VAR_30);
   VAR_22->ipath_pd[0] = VAR_33;
   VAR_30 = VAR_33;
  } else {
   FUNC_17(VAR_22, "Unable to allocate portdata"
          " for port 0, failing\n");
   VAR_24 = -VAR_3;
   goto done;
  }
 }
 VAR_24 = FUNC_15(VAR_22, VAR_30);
 if (!VAR_24)
  VAR_24 = FUNC_3(VAR_22);
 if (VAR_24) {
  FUNC_17(VAR_22, "failed to allocate kernel port's "
         "rcvhdrq and/or egr bufs\n");
  goto done;
 }
 else
  FUNC_7(VAR_22, VAR_23);


 FUNC_14(VAR_22, 0, VAR_27, 1);
 FUNC_12(VAR_22, 1);

 if (!VAR_23) {




  VAR_22->ipath_dummy_hdrq = FUNC_6(
   &VAR_22->pcidev->dev, VAR_22->ipath_pd[0]->port_rcvhdrq_size,
   &VAR_22->ipath_dummy_hdrq_phys,
   VAR_31);
  if (!VAR_22->ipath_dummy_hdrq) {
   FUNC_5(&VAR_22->pcidev->dev,
    "Couldn't allocate 0x%lx bytes for dummy hdrq\n",
    VAR_22->ipath_pd[0]->port_rcvhdrq_size);

   VAR_22->ipath_dummy_hdrq_phys = 0UL;
  }
 }





 FUNC_20(VAR_22, VAR_22->ipath_kregs->kr_intclear, 0ULL);

 if (!VAR_22->ipath_stats_timer_active) {





  FUNC_11(&VAR_22->ipath_stats_timer);
  VAR_22->ipath_stats_timer.function = VAR_16;
  VAR_22->ipath_stats_timer.data = (unsigned long) VAR_22;

  VAR_22->ipath_stats_timer.expires = VAR_20 + 5 * VAR_6;

  FUNC_1(&VAR_22->ipath_stats_timer);
  VAR_22->ipath_stats_timer_active = 1;
 }


 if (VAR_22->ipath_flags & VAR_8)
  VAR_24 = FUNC_22(VAR_22);


 FUNC_11(&VAR_22->ipath_hol_timer);
 VAR_22->ipath_hol_timer.function = VAR_17;
 VAR_22->ipath_hol_timer.data = (unsigned long)VAR_22;
 VAR_22->ipath_hol_state = VAR_9;

done:
 if (!VAR_24) {
  *VAR_22->ipath_statusp |= VAR_12;
  if (!VAR_22->ipath_f_intrsetup(VAR_22)) {

   FUNC_20(VAR_22, VAR_22->ipath_kregs->kr_intmask,
      -1LL);

   FUNC_20(VAR_22, VAR_22->ipath_kregs->kr_intclear,
      0ULL);

   *VAR_22->ipath_statusp |= VAR_13;





   if (!VAR_23) {
    FUNC_11(&VAR_22->ipath_intrchk_timer);
    VAR_22->ipath_intrchk_timer.function =
     VAR_21;
    VAR_22->ipath_intrchk_timer.data =
     (unsigned long) VAR_22;
   }
   VAR_22->ipath_intrchk_timer.expires = VAR_20 + VAR_6/2;
   FUNC_1(&VAR_22->ipath_intrchk_timer);
  } else
   FUNC_17(VAR_22, "No interrupts enabled, couldn't "
          "setup interrupt address\n");

  if (VAR_22->ipath_cfgports > VAR_19.sps_nports)
   VAR_19.sps_nports = VAR_22->ipath_cfgports;
 } else
  FUNC_16("Failed (%d) to initialize chip\n", VAR_24);



 return VAR_24;
}
