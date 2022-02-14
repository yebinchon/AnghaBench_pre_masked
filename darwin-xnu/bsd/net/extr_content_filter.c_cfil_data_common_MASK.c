
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct socket {struct socket* m_nextpkt; int m_flags; } ;
struct sockaddr {int dummy; } ;
struct mbuf {struct mbuf* m_nextpkt; int m_flags; } ;
struct cfi_buf {scalar_t__ cfi_pending_last; scalar_t__ cfi_pending_mbcnt; scalar_t__ cfi_pending_mbnum; scalar_t__ cfi_pass_offset; unsigned int cfi_pending_first; int cfi_tail_drop_cnt; } ;
struct cfil_info {int cfi_flags; struct cfi_buf cfi_rcv; struct cfi_buf cfi_snd; } ;
typedef scalar_t__ errno_t ;


 int VAR_0 ;
 int FUNC_0 (struct cfil_info*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct cfil_info*,int) ;
 scalar_t__ FUNC_3 (struct socket*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (struct socket*) ;
 scalar_t__ FUNC_5 (struct socket*,struct cfil_info*,int,int,struct socket*,unsigned int) ;
 unsigned int FUNC_6 (struct socket*,int*,int*) ;
 int FUNC_7 (struct cfi_buf*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (struct cfil_info*,struct socket*) ;
 int FUNC_9 (struct socket*,struct cfil_info*,int,unsigned int) ;
 struct socket* FUNC_10 (int *,struct sockaddr*,struct socket*,struct socket*) ;

int
FUNC_11(struct socket *VAR_8, struct cfil_info *VAR_9, int VAR_10, struct sockaddr *VAR_11,
  struct mbuf *VAR_12, struct mbuf *VAR_13, uint32_t VAR_14)
{
#pragma unused(to, control, flags)
 errno_t VAR_15 = 0;
 unsigned int VAR_16;
 int VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19;
 struct cfi_buf *VAR_20;
 struct mbuf *VAR_21 = ((void*)0);

 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_4, "so %llx cfil detached",
   (uint64_t)FUNC_4(VAR_8));
  VAR_15 = 0;
  goto done;
 } else if (VAR_9->cfi_flags & VAR_0) {
  FUNC_1(VAR_4, "so %llx drop set",
   (uint64_t)FUNC_4(VAR_8));
  VAR_15 = VAR_2;
  goto done;
 }

 VAR_16 = FUNC_6(VAR_12, &VAR_17, &VAR_18);

 if (VAR_10)
  VAR_20 = &VAR_9->cfi_snd;
 else
  VAR_20 = &VAR_9->cfi_rcv;

 VAR_20->cfi_pending_last += VAR_16;
 VAR_20->cfi_pending_mbcnt += VAR_17;
 VAR_20->cfi_pending_mbnum += VAR_18;

 if (FUNC_3(VAR_8)) {
  if (VAR_20->cfi_pending_mbnum > VAR_7 ||
   VAR_20->cfi_pending_mbcnt > VAR_6) {
   VAR_20->cfi_tail_drop_cnt++;
   VAR_20->cfi_pending_mbcnt -= VAR_17;
   VAR_20->cfi_pending_mbnum -= VAR_18;
   return (VAR_2);
  }
 }

 FUNC_7(VAR_20);
 if (VAR_20->cfi_pending_last <= VAR_20->cfi_pass_offset) {
  FUNC_9(VAR_8, VAR_9, VAR_10, VAR_16);



 } else {
  for (VAR_19 = 1; VAR_19 <= VAR_5; VAR_19++) {

   if (FUNC_2(VAR_9, VAR_19)) {
    if (FUNC_3(VAR_8)) {




     (void) FUNC_8(VAR_9, VAR_12);
     VAR_21 = FUNC_10(((void*)0), VAR_10 ? ((void*)0) : VAR_11, VAR_12, VAR_13);
     if (VAR_21 == ((void*)0)) {
      return (VAR_1);
     }
     VAR_12 = VAR_21;
    }
    VAR_15 = FUNC_5(VAR_8, VAR_9, VAR_19, VAR_10, VAR_12,
           VAR_16);
   }

   if (VAR_15 != 0)
    break;
  }
 }


 if (VAR_15 == 0) {
  VAR_20->cfi_pending_first += VAR_16;
  VAR_20->cfi_pending_mbcnt -= VAR_17;
  VAR_20->cfi_pending_mbnum -= VAR_18;
  FUNC_7(VAR_20);
 }
done:
 FUNC_0(VAR_9);

 return (VAR_15);
}
