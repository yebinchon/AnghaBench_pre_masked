
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int64_t ;
typedef int u_int32_t ;
struct TYPE_9__ {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct TYPE_8__ {scalar_t__ tv_sec; } ;
struct TYPE_7__ {scalar_t__ tv_nsec; } ;
struct TYPE_6__ {scalar_t__ tv_nsec; } ;
struct sfb {int sfb_allocation; int sfb_qlim; int sfb_drop_thresh; int sfb_flags; TYPE_4__ sfb_update_interval; scalar_t__ sfb_target_qdelay; TYPE_3__ sfb_hinterval; TYPE_2__ sfb_pboxtime; TYPE_1__ sfb_holdtime; int sfb_qid; TYPE_5__* sfb_stats; TYPE_5__** sfb_bins; int sfb_eff_rate; scalar_t__ sfb_current; scalar_t__ sfb_clearpkts; struct ifnet* sfb_ifp; } ;
struct ifnet {int dummy; } ;
typedef scalar_t__ cqev_t ;
struct TYPE_10__ {void* fudge; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__**,int) ;
 int VAR_3 ;
 int FUNC_2 (struct ifnet*) ;
 int FUNC_3 (struct ifnet*,scalar_t__*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (int ,char*,int ,int ,int ,int ,int ,int ,int,int,int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_6 (struct sfb*,int *) ;
 int FUNC_7 (struct sfb*,int ) ;
 int FUNC_8 (struct sfb*,int ) ;
 int FUNC_9 (struct sfb*,int ) ;
 int FUNC_10 (struct sfb*) ;
 void* FUNC_11 (struct sfb*) ;

__attribute__((used)) static void
FUNC_12(struct sfb *VAR_5, cqev_t VAR_6)
{
 struct ifnet *VAR_7 = VAR_5->sfb_ifp;
 u_int64_t VAR_8;

 FUNC_0(VAR_7 != ((void*)0));

 if (VAR_6 != VAR_0) {
  (*VAR_5->sfb_bins)[0].fudge = FUNC_11(VAR_5);
  (*VAR_5->sfb_bins)[1].fudge = FUNC_11(VAR_5);
  VAR_5->sfb_allocation = ((VAR_4 == 0) ?
      (VAR_5->sfb_qlim / 3) : VAR_4);
  VAR_5->sfb_drop_thresh = VAR_5->sfb_allocation +
      (VAR_5->sfb_allocation >> 1);
 }

 VAR_5->sfb_clearpkts = 0;
 VAR_5->sfb_current = 0;

 VAR_8 = FUNC_4(VAR_7);
 VAR_5->sfb_eff_rate = VAR_8;

 FUNC_7(VAR_5, VAR_8);
 FUNC_8(VAR_5, VAR_8);
 FUNC_6(VAR_5, ((void*)0));
 FUNC_3(VAR_7, &VAR_5->sfb_target_qdelay);
 FUNC_9(VAR_5, VAR_8);

 if (VAR_6 == VAR_0 ||
     VAR_6 == VAR_1)
  FUNC_10(VAR_5);

 FUNC_1(VAR_5->sfb_bins, sizeof (*VAR_5->sfb_bins));
 FUNC_1(&VAR_5->sfb_stats, sizeof (VAR_5->sfb_stats));

 if (VAR_6 == VAR_0 || !VAR_3)
  return;

 FUNC_5(VAR_2, "%s: SFB qid=%d, holdtime=%llu nsec, "
     "pboxtime=%llu nsec, allocation=%d, drop_thresh=%d, "
     "hinterval=%d sec, sfb_bins=%d bytes, eff_rate=%llu bps"
     "target_qdelay= %llu nsec "
     "update_interval=%llu sec %llu nsec flags=0x%x\n",
     FUNC_2(VAR_7), VAR_5->sfb_qid, (u_int64_t)VAR_5->sfb_holdtime.tv_nsec,
     (u_int64_t)VAR_5->sfb_pboxtime.tv_nsec,
     (u_int32_t)VAR_5->sfb_allocation, (u_int32_t)VAR_5->sfb_drop_thresh,
     (int)VAR_5->sfb_hinterval.tv_sec, (int)sizeof (*VAR_5->sfb_bins),
     VAR_8, (u_int64_t)VAR_5->sfb_target_qdelay,
     (u_int64_t)VAR_5->sfb_update_interval.tv_sec,
     (u_int64_t)VAR_5->sfb_update_interval.tv_nsec, VAR_5->sfb_flags);
}
