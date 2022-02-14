
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct socket {int so_snd; int so_rcv; int m_flags; } ;
struct cfil_queue {int dummy; } ;
struct cfi_buf {unsigned int cfi_pending_first; int cfi_pending_mbcnt; int cfi_pending_mbnum; struct cfil_queue cfi_inject_q; } ;
struct cfil_info {int cfi_flags; struct cfi_buf cfi_rcv; struct cfi_buf cfi_snd; } ;
typedef struct socket* mbuf_t ;
typedef int errno_t ;
typedef int caddr_t ;
struct TYPE_2__ {int cfs_inject_q_in_fail; int cfs_inject_q_out_fail; int cfs_inject_q_nomem; int cfs_inject_q_nobufs; int cfs_inject_q_in_passed; int cfs_inject_q_out_passed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cfil_info*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct socket*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (unsigned int,int *) ;
 int FUNC_4 (int *) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_5 (struct socket*) ;
 unsigned int FUNC_6 (struct socket*,int*,int*) ;
 scalar_t__ FUNC_7 (struct socket*) ;
 int FUNC_8 (struct cfi_buf*) ;
 int FUNC_9 (int ,struct cfil_info*,char*) ;
 scalar_t__ FUNC_10 (struct cfil_queue*) ;
 struct socket* FUNC_11 (struct cfil_queue*) ;
 int FUNC_12 (struct cfil_queue*) ;
 int FUNC_13 (struct cfil_queue*,struct socket*,unsigned int) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (struct socket*,int ) ;
 TYPE_1__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_16 (int *,struct socket*,int ) ;
 scalar_t__ FUNC_17 (int *,struct socket*) ;
 int FUNC_18 (struct socket*) ;
 int FUNC_19 (struct socket*) ;
 int FUNC_20 (struct socket*,int *,struct socket*,int *,int ) ;
 int FUNC_21 (struct socket*,int ) ;
 int FUNC_22 (struct socket*) ;
 int FUNC_23 (int ) ;

__attribute__((used)) static int
FUNC_24(struct socket *VAR_14, struct cfil_info *VAR_15, int VAR_16)
{
 mbuf_t VAR_17;
 unsigned int VAR_18;
 int VAR_19 = 0;
 int VAR_20 = 0;
 errno_t VAR_21 = 0;
 struct cfi_buf *VAR_22;
 struct cfil_queue *VAR_23;
 int VAR_24 = 0;
 int VAR_25 = 0;

 if (VAR_15 == ((void*)0))
  return (0);

 FUNC_18(VAR_14);

 if (VAR_16) {
  VAR_22 = &VAR_15->cfi_snd;
  VAR_15->cfi_flags &= ~VAR_2;
 } else {
  VAR_22 = &VAR_15->cfi_rcv;
  VAR_15->cfi_flags &= ~VAR_1;
 }
 VAR_23 = &VAR_22->cfi_inject_q;

 if (FUNC_10(VAR_23))
  return (0);






 while ((VAR_17 = FUNC_11(VAR_23)) != ((void*)0)) {
  VAR_18 = FUNC_6(VAR_17, &VAR_19, &VAR_20);
  FUNC_13(VAR_23, VAR_17, VAR_18);
  VAR_22->cfi_pending_first += VAR_18;
  VAR_22->cfi_pending_mbcnt -= VAR_19;
  VAR_22->cfi_pending_mbnum -= VAR_20;
  FUNC_8(VAR_22);

  if (VAR_16) {
   VAR_21 = FUNC_20(VAR_14, ((void*)0), VAR_17, ((void*)0), 0);
   if (VAR_21 != 0) {




    break;
   }

   VAR_24 = 1;
  } else {
   VAR_17->m_flags |= VAR_9;







   if (FUNC_2(VAR_14) == VAR_11) {
    if (FUNC_16(&VAR_14->so_rcv, VAR_17, 0))
     VAR_24 = 1;
   } else {
    if (FUNC_17(&VAR_14->so_rcv, VAR_17))
     VAR_24 = 1;
   }
  }

  if (VAR_16)
   FUNC_3(VAR_18,
    &VAR_12.cfs_inject_q_out_passed);
  else
   FUNC_3(VAR_18,
    &VAR_12.cfs_inject_q_in_passed);

  VAR_25++;
 }







 if (VAR_24) {
  if (VAR_16 == VAR_11)
   FUNC_22(VAR_14);
  else
   FUNC_19(VAR_14);
 }

 if (VAR_21 != 0 && VAR_15) {
  if (VAR_21 == VAR_4)
   FUNC_4(&VAR_12.cfs_inject_q_nobufs);
  if (VAR_21 == VAR_5)
   FUNC_4(&VAR_12.cfs_inject_q_nomem);

  if (VAR_16) {
   VAR_15->cfi_flags |= VAR_2;
   FUNC_4(&VAR_12.cfs_inject_q_out_fail);
  } else {
   VAR_15->cfi_flags |= VAR_1;
   FUNC_4(&VAR_12.cfs_inject_q_in_fail);
  }
 }




 if (VAR_15 && (VAR_15->cfi_flags & VAR_3)) {
  FUNC_15(VAR_14, VAR_10);
  if (FUNC_14(&VAR_14->so_snd) == 0)
   FUNC_21(VAR_14, VAR_10);
 }
 if (VAR_15 && (VAR_15->cfi_flags & VAR_0)) {
  if (FUNC_7(VAR_14) == 0) {
   FUNC_1(VAR_8, "so %llx waking",
    (uint64_t)FUNC_5(VAR_14));
   FUNC_23((caddr_t)VAR_15);
  }
 }

 FUNC_0(VAR_15);

 return (VAR_21);
}
