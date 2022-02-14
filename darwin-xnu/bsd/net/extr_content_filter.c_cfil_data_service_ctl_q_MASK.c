
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned int uint64_t ;
typedef int uint32_t ;
struct socket {int dummy; } ;
typedef struct socket mbuf ;
struct cfil_info {int cfi_flags; struct cfil_entry* cfi_entries; } ;
struct TYPE_6__ {unsigned int q_start; } ;
struct cfe_buf {unsigned int cfe_pass_offset; unsigned int cfe_peeked; unsigned int cfe_peek_offset; TYPE_2__ cfe_ctl_q; int cfe_pending_q; } ;
struct cfil_entry {int cfe_flags; struct cfe_buf cfe_rcv; struct cfe_buf cfe_snd; } ;
typedef scalar_t__ errno_t ;
struct TYPE_5__ {int cfs_ctl_q_in_peeked; int cfs_ctl_q_out_peeked; int cfs_pending_q_in_enqueued; int cfs_pending_q_out_enqueued; int cfs_ctl_q_not_started; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cfil_info*) ;
 int FUNC_1 (int ,char*,unsigned int,...) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (unsigned int,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct socket*) ;
 unsigned int FUNC_6 (struct socket*,int *,int *) ;
 scalar_t__ FUNC_7 (struct socket*,struct cfil_info*,int) ;
 scalar_t__ FUNC_8 (struct socket*,struct cfil_info*,int,int,struct socket*,unsigned int,unsigned int) ;
 int FUNC_9 (struct socket*,struct cfil_info*,int,int) ;
 int FUNC_10 (int *,struct socket*,unsigned int) ;
 struct socket* FUNC_11 (TYPE_2__*) ;
 struct socket* FUNC_12 (TYPE_2__*,struct socket*) ;
 int FUNC_13 (TYPE_2__*,struct socket*,unsigned int) ;
 scalar_t__ FUNC_14 (struct socket*,struct cfil_info*,int,int) ;
 TYPE_1__ VAR_11 ;
 int FUNC_15 (struct socket*) ;

__attribute__((used)) static int
FUNC_16(struct socket *VAR_12, struct cfil_info *VAR_13, uint32_t VAR_14, int VAR_15)
{
 errno_t VAR_16 = 0;
 struct mbuf *VAR_17, *VAR_18 = ((void*)0);
 unsigned int VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;
 struct cfil_entry *VAR_22;
 struct cfe_buf *VAR_23;
 uint64_t VAR_24 = 0;

 if (VAR_13 == ((void*)0))
  return (0);

 FUNC_1(VAR_10, "so %llx kcunit %u outgoing %d",
  (uint64_t)FUNC_5(VAR_12), VAR_14, VAR_15);

 FUNC_15(VAR_12);

 VAR_22 = &VAR_13->cfi_entries[VAR_14 - 1];
 if (VAR_15)
  VAR_23 = &VAR_22->cfe_snd;
 else
  VAR_23 = &VAR_22->cfe_rcv;


 if ((VAR_22->cfe_flags & VAR_3) == 0) {
  VAR_16 = FUNC_7(VAR_12, VAR_13, VAR_14);
  if (VAR_16 != 0) {

   if (VAR_16 == VAR_6 || VAR_16 == VAR_7)
    VAR_16 = 0;
   goto done;
  }
 } else if ((VAR_22->cfe_flags & VAR_0) == 0) {
  FUNC_3(&VAR_11.cfs_ctl_q_not_started);
  goto done;
 }
 while ((VAR_17 = FUNC_11(&VAR_23->cfe_ctl_q)) != ((void*)0) &&
  VAR_23->cfe_ctl_q.q_start < VAR_23->cfe_pass_offset) {
  VAR_19 = FUNC_6(VAR_17, ((void*)0), ((void*)0));
  VAR_18 = VAR_17;

  if (VAR_23->cfe_ctl_q.q_start + VAR_19 <=
   VAR_23->cfe_pass_offset) {



   VAR_20 = VAR_19;
  } else {



   VAR_20 = VAR_23->cfe_pass_offset -
    VAR_23->cfe_ctl_q.q_start;
  }
  FUNC_4(VAR_20 <= VAR_19);
  if (VAR_23->cfe_ctl_q.q_start + VAR_20 >
   VAR_23->cfe_peeked)
   VAR_23->cfe_peeked =
    VAR_23->cfe_ctl_q.q_start + VAR_20;



  if (VAR_20 < VAR_19)
   break;


  FUNC_13(&VAR_23->cfe_ctl_q, VAR_17, VAR_19);

  FUNC_10(&VAR_23->cfe_pending_q, VAR_17, VAR_19);
  if (VAR_15)
   FUNC_2(VAR_19,
    &VAR_11.cfs_pending_q_out_enqueued);
  else
   FUNC_2(VAR_19,
    &VAR_11.cfs_pending_q_in_enqueued);
 }
 FUNC_0(VAR_13);
 if (VAR_18 != ((void*)0))
  FUNC_1(VAR_8,
   "%llx first %llu peeked %llu pass %llu peek %llu"
   "datalen %u copylen %u",
   (uint64_t)FUNC_5(VAR_18),
   VAR_23->cfe_ctl_q.q_start,
   VAR_23->cfe_peeked,
   VAR_23->cfe_pass_offset,
   VAR_23->cfe_peek_offset,
   VAR_19, VAR_20);
 VAR_18 = ((void*)0);


 for (VAR_17 = FUNC_11(&VAR_23->cfe_ctl_q),
  VAR_24 = VAR_23->cfe_ctl_q.q_start;
  VAR_17 != ((void*)0) && VAR_24 < VAR_23->cfe_peek_offset;
  VAR_17 = FUNC_12(&VAR_23->cfe_ctl_q, VAR_17),
  VAR_24 += VAR_19) {
  VAR_19 = FUNC_6(VAR_17, ((void*)0), ((void*)0));
  VAR_18 = VAR_17;


  if (VAR_24 + VAR_19 <= VAR_23->cfe_peeked)
   continue;




  VAR_21 = VAR_23->cfe_peeked - VAR_24;
  FUNC_4(VAR_21 < VAR_19);
  VAR_20 = VAR_19 - VAR_21;
  FUNC_4(VAR_20 <= VAR_19);



  if (VAR_24 + VAR_21 + VAR_20 >
   VAR_23->cfe_peek_offset) {
   VAR_20 = VAR_23->cfe_peek_offset -
    (VAR_24 + VAR_21);
  }
  if (VAR_20 == 0)
   break;



  VAR_16 = FUNC_8(VAR_12, VAR_13, VAR_14,
   VAR_15, VAR_17, VAR_21, VAR_20);
  if (VAR_16 != 0) {

   break;
  }
  VAR_23->cfe_peeked += VAR_20;
  if (VAR_15)
   FUNC_2(VAR_20,
    &VAR_11.cfs_ctl_q_out_peeked);
  else
   FUNC_2(VAR_20,
    &VAR_11.cfs_ctl_q_in_peeked);


  if (VAR_20 + VAR_21 < VAR_19)
   break;
 }
 FUNC_0(VAR_13);
 if (VAR_18 != ((void*)0))
  FUNC_1(VAR_8,
   "%llx first %llu peeked %llu pass %llu peek %llu"
   "datalen %u copylen %u copyoffset %u",
   (uint64_t)FUNC_5(VAR_18),
   VAR_24,
   VAR_23->cfe_peeked,
   VAR_23->cfe_pass_offset,
   VAR_23->cfe_peek_offset,
   VAR_19, VAR_20, VAR_21);




 VAR_16 = FUNC_14(VAR_12, VAR_13, VAR_14, VAR_15);
 if (VAR_16 != 0) {
  FUNC_1(VAR_9, "cfil_service_pending_queue() error %d",
   VAR_16);
  goto done;
 }




 if (VAR_13 == ((void*)0))
  goto done;
 else if (VAR_15) {
  if ((VAR_13->cfi_flags & VAR_5) &&
      !(VAR_22->cfe_flags & VAR_2))
   FUNC_9(VAR_12, VAR_13, VAR_14, 1);
 } else {
  if ((VAR_13->cfi_flags & VAR_4) &&
      !(VAR_22->cfe_flags & VAR_1))
   FUNC_9(VAR_12, VAR_13, VAR_14, 0);
 }

done:
 FUNC_1(VAR_8,
  "first %llu peeked %llu pass %llu peek %llu",
  VAR_23->cfe_ctl_q.q_start,
  VAR_23->cfe_peeked,
  VAR_23->cfe_pass_offset,
  VAR_23->cfe_peek_offset);

 FUNC_0(VAR_13);
 return (VAR_16);
}
