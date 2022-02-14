
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ipath_portdata {int port_lastrcvhdrqtail; } ;
struct ipath_devdata {int ipath_flags; scalar_t__ ipath_traffic_wds; int ipath_maskederrs; int ipath_errormask; int ipath_stats_timer; struct ipath_portdata** ipath_pd; scalar_t__ ipath_cfgports; TYPE_2__* ipath_kregs; int ipath_unmasktime; scalar_t__ ipath_lasthwerror; scalar_t__ ipath_lasterror; TYPE_1__* ipath_cregs; int ipath_eep_st_lock; int ipath_active_time; int ipath_kregbase; } ;
struct TYPE_4__ {int kr_errormask; } ;
struct TYPE_3__ {int cr_pktrcvcnt; int cr_pktsendcnt; int cr_wordrcvcnt; int cr_wordsendcnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (struct ipath_devdata*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (struct ipath_devdata*,char*,int,int) ;
 int FUNC_5 (struct ipath_devdata*,char*,char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (struct ipath_devdata*) ;
 scalar_t__ FUNC_7 (struct ipath_devdata*,int ) ;
 int FUNC_8 (struct ipath_devdata*,int ,int) ;
 scalar_t__ VAR_9 ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 scalar_t__ FUNC_12 (scalar_t__,int ) ;

void FUNC_13(unsigned long VAR_10)
{
 struct ipath_devdata *VAR_11 = (struct ipath_devdata *) VAR_10;
 int VAR_12;
 static unsigned VAR_13;
 unsigned long VAR_14;
 u64 VAR_15;





 if (!VAR_11->ipath_kregbase || !(VAR_11->ipath_flags & VAR_6) ||
     VAR_8)

  goto done;






 VAR_15 = FUNC_7(VAR_11, VAR_11->ipath_cregs->cr_wordsendcnt) +
  FUNC_7(VAR_11, VAR_11->ipath_cregs->cr_wordrcvcnt);
 FUNC_10(&VAR_11->ipath_eep_st_lock, VAR_14);
 VAR_15 -= VAR_11->ipath_traffic_wds;
 VAR_11->ipath_traffic_wds += VAR_15;
 if (VAR_15 >= VAR_7)
  FUNC_0(5, &VAR_11->ipath_active_time);
 FUNC_11(&VAR_11->ipath_eep_st_lock, VAR_14);

 if (VAR_11->ipath_flags & VAR_5) {
  FUNC_7(VAR_11, VAR_11->ipath_cregs->cr_pktsendcnt);
  FUNC_7(VAR_11, VAR_11->ipath_cregs->cr_pktrcvcnt);
 }

 FUNC_6(VAR_11);
 if (VAR_11->ipath_lasterror)
  VAR_11->ipath_lasterror = 0;
 if (VAR_11->ipath_lasthwerror)
  VAR_11->ipath_lasthwerror = 0;
 if (VAR_11->ipath_maskederrs
     && FUNC_12(VAR_9, VAR_11->ipath_unmasktime)) {
  char VAR_16[256];
  int VAR_17;
  VAR_17 = FUNC_4(VAR_11, VAR_16, sizeof VAR_16,
      VAR_11->ipath_maskederrs);
  if (VAR_11->ipath_maskederrs &
      ~(VAR_3 | VAR_4 |
        VAR_2))
   FUNC_5(VAR_11, "Re-enabling masked errors "
          "(%s)\n", VAR_16);
  else {







   if (VAR_17)
    FUNC_3(
     "Re-enabling queue full errors (%s)\n",
     VAR_16);
   else
    FUNC_1(VAR_0, "Re-enabling packet"
     " problem interrupt (%s)\n", VAR_16);
  }


  VAR_11->ipath_errormask |= VAR_11->ipath_maskederrs;
  FUNC_8(VAR_11, VAR_11->ipath_kregs->kr_errormask,
     VAR_11->ipath_errormask);
  VAR_11->ipath_maskederrs = 0;
 }


 if ((++VAR_13 & 0x10)) {
  for (VAR_12 = (int) VAR_11->ipath_cfgports; --VAR_12 >= 0; ) {
   struct ipath_portdata *VAR_18 = VAR_11->ipath_pd[VAR_12];

   if (VAR_18 && VAR_18->port_lastrcvhdrqtail != -1)
    VAR_18->port_lastrcvhdrqtail = -1;
  }
 }

 FUNC_2(VAR_11);
done:
 FUNC_9(&VAR_11->ipath_stats_timer, VAR_9 + VAR_1 * 5);
}
