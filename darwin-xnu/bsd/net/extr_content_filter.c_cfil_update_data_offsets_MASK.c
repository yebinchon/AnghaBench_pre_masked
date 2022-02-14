
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct socket {int dummy; } ;
struct cfil_info {int cfi_flags; struct cfil_entry* cfi_entries; } ;
struct cfe_buf {scalar_t__ cfe_pass_offset; scalar_t__ cfe_peek_offset; int cfe_ctl_q; } ;
struct cfil_entry {int cfe_flags; struct cfe_buf cfe_rcv; struct cfe_buf cfe_snd; } ;
typedef scalar_t__ errno_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cfil_info*) ;
 int FUNC_1 (int ,char*,scalar_t__,...) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (struct socket*) ;
 scalar_t__ FUNC_3 (struct socket*,struct cfil_info*,int,int) ;
 scalar_t__ FUNC_4 (struct socket*) ;
 int FUNC_5 (int ,struct cfil_info*,char*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct socket*) ;
 int FUNC_8 (int ) ;

int
FUNC_9(struct socket *VAR_8, struct cfil_info *VAR_9, uint32_t VAR_10, int VAR_11,
 uint64_t VAR_12, uint64_t VAR_13)
{
 errno_t VAR_14 = 0;
 struct cfil_entry *VAR_15 = ((void*)0);
 struct cfe_buf *VAR_16;
 int VAR_17 = 0;

 FUNC_1(VAR_7, "pass %llu peek %llu", VAR_12, VAR_13);

 FUNC_7(VAR_8);

 if (VAR_9 == ((void*)0)) {
  FUNC_1(VAR_6, "so %llx cfil detached",
   (uint64_t)FUNC_2(VAR_8));
  VAR_14 = 0;
  goto done;
 } else if (VAR_9->cfi_flags & VAR_2) {
  FUNC_1(VAR_6, "so %llx drop set",
   (uint64_t)FUNC_2(VAR_8));
  VAR_14 = VAR_5;
  goto done;
 }

 VAR_15 = &VAR_9->cfi_entries[VAR_10 - 1];
 if (VAR_11)
  VAR_16 = &VAR_15->cfe_snd;
 else
  VAR_16 = &VAR_15->cfe_rcv;


 if (VAR_12 > VAR_16->cfe_pass_offset) {
  VAR_16->cfe_pass_offset = VAR_12;

  if (VAR_16->cfe_peek_offset < VAR_16->cfe_pass_offset)
   VAR_16->cfe_peek_offset = VAR_16->cfe_pass_offset;
  VAR_17 = 1;
 } else {
  FUNC_1(VAR_7, "pass_offset %llu <= cfe_pass_offset %llu",
   VAR_12, VAR_16->cfe_pass_offset);
 }

 if (VAR_13 > VAR_16->cfe_pass_offset &&
  VAR_13 > VAR_16->cfe_peek_offset) {
  VAR_16->cfe_peek_offset = VAR_13;
  VAR_17 = 1;
 }

 if (VAR_17 == 0)
  goto done;


 VAR_14 = FUNC_3(VAR_8, VAR_9, VAR_10, VAR_11);
 if (VAR_14 != 0) {
  FUNC_1(VAR_6, "cfil_data_service_ctl_q() error %d",
   VAR_14);
  goto done;
 }
 VAR_14 = VAR_4;

done:





 if (VAR_15 != ((void*)0) &&
     ((VAR_15->cfe_snd.cfe_pass_offset == VAR_3 &&
     VAR_15->cfe_rcv.cfe_pass_offset == VAR_3) ||
     ((VAR_9->cfi_flags & VAR_1) &&
     FUNC_6(&VAR_15->cfe_snd.cfe_ctl_q) &&
     FUNC_6(&VAR_15->cfe_rcv.cfe_ctl_q)))) {
  VAR_15->cfe_flags |= VAR_0;





  FUNC_1(VAR_7, "so %llx detached %u",
   (uint64_t)FUNC_2(VAR_8), VAR_10);
  if ((VAR_9->cfi_flags & VAR_1) &&
      FUNC_4(VAR_8) == 0) {



   FUNC_1(VAR_7, "so %llx waking",
    (uint64_t)FUNC_2(VAR_8));
   FUNC_8((caddr_t)VAR_9);
  }
 }
 FUNC_0(VAR_9);
 FUNC_1(VAR_7, "return %d", VAR_14);
 return (VAR_14);
}
