
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int uint64_t ;
typedef int uint32_t ;
struct socket {int dummy; } ;
struct cfil_queue {unsigned int q_start; } ;
struct TYPE_5__ {int cfi_inject_q; } ;
struct TYPE_4__ {int cfi_inject_q; } ;
struct cfil_info {TYPE_2__ cfi_rcv; TYPE_1__ cfi_snd; struct cfil_entry* cfi_entries; } ;
struct cfe_buf {unsigned int cfe_pass_offset; struct cfil_queue cfe_pending_q; } ;
struct cfil_entry {struct cfe_buf cfe_rcv; struct cfe_buf cfe_snd; } ;
typedef struct socket* mbuf_t ;
typedef scalar_t__ errno_t ;
struct TYPE_6__ {int cfs_inject_q_in_enqueued; int cfs_inject_q_out_enqueued; } ;


 int FUNC_0 (struct cfil_info*) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int,unsigned int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (unsigned int,int *) ;
 scalar_t__ FUNC_3 (struct socket*) ;
 scalar_t__ FUNC_4 (struct socket*,struct cfil_info*,int,int,struct socket*,unsigned int) ;
 unsigned int FUNC_5 (struct socket*,int *,int *) ;
 int FUNC_6 (int *,struct socket*,unsigned int) ;
 struct socket* FUNC_7 (struct cfil_queue*) ;
 int FUNC_8 (struct cfil_queue*,struct socket*,unsigned int) ;
 TYPE_3__ VAR_3 ;
 int FUNC_9 (struct socket*) ;

__attribute__((used)) static int
FUNC_10(struct socket *VAR_4, struct cfil_info *VAR_5, uint32_t VAR_6, int VAR_7)
{
 uint64_t VAR_8, VAR_9;
 mbuf_t VAR_10;
 unsigned int VAR_11;
 errno_t VAR_12 = 0;
 struct cfil_entry *VAR_13;
 struct cfe_buf *VAR_14;
 struct cfil_queue *VAR_15;

 FUNC_1(VAR_1, "so %llx kcunit %u outgoing %d",
  (uint64_t)FUNC_3(VAR_4), VAR_6, VAR_7);

 FUNC_9(VAR_4);

 VAR_13 = &VAR_5->cfi_entries[VAR_6 - 1];
 if (VAR_7)
  VAR_14 = &VAR_13->cfe_snd;
 else
  VAR_14 = &VAR_13->cfe_rcv;

 VAR_15 = &VAR_14->cfe_pending_q;

 VAR_8 = VAR_14->cfe_pass_offset - VAR_15->q_start;





 VAR_9 = 0;
 while ((VAR_10 = FUNC_7(VAR_15)) != ((void*)0)) {
  VAR_11 = FUNC_5(VAR_10, ((void*)0), ((void*)0));
  if (VAR_9 + VAR_11 > VAR_8)
   break;

  FUNC_8(VAR_15, VAR_10, VAR_11);

  VAR_9 += VAR_11;

  for (VAR_6 += 1;
   VAR_6 <= VAR_2;
   VAR_6++) {
   VAR_12 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7,
    VAR_10, VAR_11);

   if (VAR_12 != 0)
    break;
  }

  if (VAR_12 == 0) {
   if (VAR_7) {
    FUNC_6(
     &VAR_5->cfi_snd.cfi_inject_q,
     VAR_10, VAR_11);
    FUNC_2(VAR_11,
     &VAR_3.cfs_inject_q_out_enqueued);
   } else {
    FUNC_6(
     &VAR_5->cfi_rcv.cfi_inject_q,
     VAR_10, VAR_11);
    FUNC_2(VAR_11,
     &VAR_3.cfs_inject_q_in_enqueued);
   }
  }
 }

 FUNC_0(VAR_5);

 return (VAR_12);
}
