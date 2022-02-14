
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct socket {int dummy; } ;
struct so_cinforeq64 {int scir_aux_len; int scir_aux_data; int scir_aux_type; int scir_dst_len; int scir_dst; int scir_src_len; int scir_src; int scir_error; int scir_ifindex; int scir_flags; int scir_cid; int scr_cidp; int scr_cnt; int scr_aid; int sar_aidp; int sar_cnt; } ;
struct so_cinforeq32 {int scir_aux_len; int scir_aux_data; int scir_aux_type; int scir_dst_len; int scir_dst; int scir_src_len; int scir_src; int scir_error; int scir_ifindex; int scir_flags; int scir_cid; int scr_cidp; int scr_cnt; int scr_aid; int sar_aidp; int sar_cnt; } ;
struct so_cidreq64 {int scir_aux_len; int scir_aux_data; int scir_aux_type; int scir_dst_len; int scir_dst; int scir_src_len; int scir_src; int scir_error; int scir_ifindex; int scir_flags; int scir_cid; int scr_cidp; int scr_cnt; int scr_aid; int sar_aidp; int sar_cnt; } ;
struct so_cidreq32 {int scir_aux_len; int scir_aux_data; int scir_aux_type; int scir_dst_len; int scir_dst; int scir_src_len; int scir_src; int scir_error; int scir_ifindex; int scir_flags; int scir_cid; int scr_cidp; int scr_cnt; int scr_aid; int sar_aidp; int sar_cnt; } ;
struct so_aidreq64 {int scir_aux_len; int scir_aux_data; int scir_aux_type; int scir_dst_len; int scir_dst; int scir_src_len; int scir_src; int scir_error; int scir_ifindex; int scir_flags; int scir_cid; int scr_cidp; int scr_cnt; int scr_aid; int sar_aidp; int sar_cnt; } ;
struct so_aidreq32 {int scir_aux_len; int scir_aux_data; int scir_aux_type; int scir_dst_len; int scir_dst; int scir_src_len; int scir_src; int scir_error; int scir_ifindex; int scir_flags; int scir_cid; int scr_cidp; int scr_cnt; int scr_aid; int sar_aidp; int sar_cnt; } ;
struct proc {int dummy; } ;
struct mptses {int dummy; } ;
struct mppcb {scalar_t__ mpp_state; } ;
struct ifnet {int dummy; } ;
typedef int cifr ;
typedef int cidr ;
typedef struct so_cinforeq64* caddr_t ;
typedef int aidr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;






 int FUNC_0 (int ) ;
 int FUNC_1 (struct so_cinforeq64*,struct so_cinforeq64*,int) ;
 struct mppcb* FUNC_2 (struct socket*) ;
 int FUNC_3 (struct mptses*,int *,int ) ;
 int FUNC_4 (struct mptses*,int ,int *,int ) ;
 int FUNC_5 (struct mptses*,int *,int *,int *,int *,int ,int *,int ,int *,int *,int ,int *) ;
 int FUNC_6 (struct mptses*) ;
 struct mptses* FUNC_7 (struct mppcb*) ;

__attribute__((used)) static int
FUNC_8(struct socket *VAR_3, u_long VAR_4, caddr_t VAR_5,
    struct ifnet *VAR_6, struct proc *VAR_7)
{
#pragma unused(ifp, p)
 struct mppcb *VAR_8 = FUNC_2(VAR_3);
 struct mptses *VAR_9;
 int VAR_10 = 0;

 if (VAR_8 == ((void*)0) || VAR_8->mpp_state == VAR_2) {
  VAR_10 = VAR_0;
  goto out;
 }
 VAR_9 = FUNC_7(VAR_8);
 FUNC_0(VAR_9 != ((void*)0));

 FUNC_6(VAR_9);

 switch (VAR_4) {
 case 133: {
  struct so_aidreq32 VAR_11;
  FUNC_1(VAR_5, &VAR_11, sizeof (VAR_11));
  VAR_10 = FUNC_3(VAR_9, &VAR_11.sar_cnt,
      VAR_11.sar_aidp);
  if (VAR_10 == 0)
   FUNC_1(&VAR_11, VAR_5, sizeof (VAR_11));
  break;
 }

 case 132: {
  struct so_aidreq64 VAR_12;
  FUNC_1(VAR_5, &VAR_12, sizeof (VAR_12));
  VAR_10 = FUNC_3(VAR_9, &VAR_12.sar_cnt,
      VAR_12.sar_aidp);
  if (VAR_10 == 0)
   FUNC_1(&VAR_12, VAR_5, sizeof (VAR_12));
  break;
 }

 case 131: {
  struct so_cidreq32 VAR_13;
  FUNC_1(VAR_5, &VAR_13, sizeof (VAR_13));
  VAR_10 = FUNC_4(VAR_9, VAR_13.scr_aid, &VAR_13.scr_cnt,
      VAR_13.scr_cidp);
  if (VAR_10 == 0)
   FUNC_1(&VAR_13, VAR_5, sizeof (VAR_13));
  break;
 }

 case 130: {
  struct so_cidreq64 VAR_14;
  FUNC_1(VAR_5, &VAR_14, sizeof (VAR_14));
  VAR_10 = FUNC_4(VAR_9, VAR_14.scr_aid, &VAR_14.scr_cnt,
      VAR_14.scr_cidp);
  if (VAR_10 == 0)
   FUNC_1(&VAR_14, VAR_5, sizeof (VAR_14));
  break;
 }

 case 129: {
  struct so_cinforeq32 VAR_15;
  FUNC_1(VAR_5, &VAR_15, sizeof (VAR_15));
  VAR_10 = FUNC_5(VAR_9, &VAR_15.scir_cid,
      &VAR_15.scir_flags, &VAR_15.scir_ifindex, &VAR_15.scir_error,
      VAR_15.scir_src, &VAR_15.scir_src_len, VAR_15.scir_dst,
      &VAR_15.scir_dst_len, &VAR_15.scir_aux_type, VAR_15.scir_aux_data,
      &VAR_15.scir_aux_len);
  if (VAR_10 == 0)
   FUNC_1(&VAR_15, VAR_5, sizeof (VAR_15));
  break;
 }

 case 128: {
  struct so_cinforeq64 VAR_16;
  FUNC_1(VAR_5, &VAR_16, sizeof (VAR_16));
  VAR_10 = FUNC_5(VAR_9, &VAR_16.scir_cid,
      &VAR_16.scir_flags, &VAR_16.scir_ifindex, &VAR_16.scir_error,
      VAR_16.scir_src, &VAR_16.scir_src_len, VAR_16.scir_dst,
      &VAR_16.scir_dst_len, &VAR_16.scir_aux_type, VAR_16.scir_aux_data,
      &VAR_16.scir_aux_len);
  if (VAR_10 == 0)
   FUNC_1(&VAR_16, VAR_5, sizeof (VAR_16));
  break;
 }

 default:
  VAR_10 = VAR_1;
  break;
 }
out:
 return (VAR_10);
}
