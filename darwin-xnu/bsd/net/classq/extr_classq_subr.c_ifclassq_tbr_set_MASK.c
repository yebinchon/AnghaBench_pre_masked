
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int64_t ;
typedef int u_int32_t ;
struct timespec {int member_1; int member_0; } ;
struct tb_regulator {int tbr_rate_raw; int tbr_percent; int tbr_rate; int tbr_depth; int tbr_filluptime; int tbr_token; int tbr_last; } ;
struct tb_profile {int rate; int percent; int depth; } ;
struct TYPE_2__ {int eff_bw; } ;
struct ifnet {int if_mtu; int if_flags; TYPE_1__ if_output_bw; } ;
struct ifclassq {int ifcq_flags; struct tb_regulator ifcq_tbr; struct ifnet* ifcq_ifp; } ;
typedef int int64_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ifclassq*) ;
 int FUNC_1 (struct ifclassq*) ;
 int FUNC_2 (struct ifclassq*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct tb_regulator*,int) ;
 char* FUNC_7 (struct ifnet*) ;
 int FUNC_8 (struct ifclassq*,int ) ;
 int FUNC_9 (struct ifnet*,struct timespec*) ;
 int VAR_8 ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 scalar_t__ VAR_9 ;
 int FUNC_12 (char*,char*,...) ;
 int FUNC_13 () ;

int
FUNC_14(struct ifclassq *VAR_10, struct tb_profile *VAR_11,
    boolean_t VAR_12)
{
 struct tb_regulator *VAR_13;
 struct ifnet *VAR_14 = VAR_10->ifcq_ifp;
 u_int64_t VAR_15, VAR_16;

 FUNC_1(VAR_10);
 FUNC_5(FUNC_0(VAR_10));

 FUNC_5(VAR_8 != 0);

 VAR_13 = &VAR_10->ifcq_tbr;
 VAR_16 = VAR_13->tbr_rate_raw;

 VAR_15 = VAR_11->rate;
 if (VAR_11->percent > 0) {
  u_int64_t VAR_17;

  if (VAR_11->percent > 100)
   return (VAR_1);
  if ((VAR_17 = VAR_14->if_output_bw.eff_bw) == 0)
   return (VAR_2);
  VAR_15 = (VAR_17 * VAR_11->percent) / 100;
 }

 if (VAR_15 == 0) {
  if (!FUNC_2(VAR_10))
   return (VAR_3);

  if (VAR_9)
   FUNC_12("%s: TBR disabled\n", FUNC_7(VAR_14));


  VAR_10->ifcq_flags &= ~VAR_4;
  FUNC_6(VAR_13, sizeof (*VAR_13));
  FUNC_9(VAR_14, ((void*)0));
  if (VAR_12)
   FUNC_8(VAR_10, VAR_0);
  return (0);
 }

 if (VAR_9) {
  FUNC_12("%s: TBR %s (rate %llu bps depth %u)\n", FUNC_7(VAR_14),
      (VAR_10->ifcq_flags & VAR_4) ? "reconfigured" :
      "enabled", VAR_15, VAR_11->depth);
 }


 FUNC_6(VAR_13, sizeof (*VAR_13));
 VAR_13->tbr_rate_raw = VAR_15;
 VAR_13->tbr_percent = VAR_11->percent;
 VAR_10->ifcq_flags |= VAR_4;
 VAR_13->tbr_rate = FUNC_3(VAR_15 / 8) / VAR_8;
 if (VAR_13->tbr_rate > 0) {
  u_int32_t VAR_18 = VAR_14->if_mtu;
  int64_t VAR_19, VAR_20 = 0;
  int VAR_21;

  if (VAR_18 < VAR_6)
   VAR_18 = VAR_6;

  VAR_19 = FUNC_11(10 * VAR_7);

  for (VAR_21 = 1; ; VAR_21++) {
   VAR_20 = FUNC_3(VAR_21 * VAR_18);
   if ((VAR_20 / VAR_13->tbr_rate) > VAR_19)
    break;
  }
  FUNC_5(VAR_20 > 0);

  VAR_13->tbr_depth = FUNC_3(VAR_11->depth);
  if (VAR_13->tbr_depth == 0) {
   VAR_13->tbr_filluptime = VAR_20 / VAR_13->tbr_rate;

   VAR_13->tbr_depth = VAR_20 + (VAR_20 >> 3);
  } else {
   VAR_13->tbr_filluptime = VAR_13->tbr_depth / VAR_13->tbr_rate;
  }
 } else {
  VAR_13->tbr_depth = FUNC_3(VAR_11->depth);
  VAR_13->tbr_filluptime = 0xffffffffffffffffLL;
 }
 VAR_13->tbr_token = VAR_13->tbr_depth;
 VAR_13->tbr_last = FUNC_13();

 if (VAR_13->tbr_rate > 0 && (VAR_14->if_flags & VAR_5)) {
  struct timespec VAR_22 =
      { 0, FUNC_10(VAR_13->tbr_filluptime) };
  if (VAR_9) {
   FUNC_12("%s: TBR calculated tokens %lld "
       "filluptime %llu ns\n", FUNC_7(VAR_14),
       FUNC_4(VAR_13->tbr_token),
       FUNC_10(VAR_13->tbr_filluptime));
  }
  FUNC_9(VAR_14, &VAR_22);
 } else {
  if (VAR_9) {
   if (VAR_13->tbr_rate == 0) {
    FUNC_12("%s: TBR calculated tokens %lld "
        "infinite filluptime\n", FUNC_7(VAR_14),
        FUNC_4(VAR_13->tbr_token));
   } else if (!(VAR_14->if_flags & VAR_5)) {
    FUNC_12("%s: TBR suspended (link is down)\n",
        FUNC_7(VAR_14));
   }
  }
  FUNC_9(VAR_14, ((void*)0));
 }
 if (VAR_12 && VAR_13->tbr_rate_raw != VAR_16)
  FUNC_8(VAR_10, VAR_0);

 return (0);
}
