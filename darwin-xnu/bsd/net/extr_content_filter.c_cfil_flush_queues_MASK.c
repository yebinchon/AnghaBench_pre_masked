
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct socket {int so_flags; } ;
struct TYPE_9__ {int cfi_inject_q; } ;
struct TYPE_7__ {int cfi_inject_q; } ;
struct cfil_info {int cfi_flags; TYPE_4__ cfi_rcv; struct cfil_entry* cfi_entries; TYPE_2__ cfi_snd; } ;
struct TYPE_8__ {int cfe_pending_q; int cfe_ctl_q; } ;
struct TYPE_6__ {int cfe_pending_q; int cfe_ctl_q; } ;
struct cfil_entry {TYPE_3__ cfe_rcv; TYPE_1__ cfe_snd; } ;
struct TYPE_10__ {int cfs_flush_in_close; int cfs_flush_in_drop; int cfs_flush_out_close; int cfs_flush_out_drop; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfil_info*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct socket*,struct cfil_info*,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct socket*,int) ;
 TYPE_5__ VAR_3 ;
 int FUNC_5 (struct socket*) ;

__attribute__((used)) static void
FUNC_6(struct socket *VAR_4, struct cfil_info *VAR_5)
{
 struct cfil_entry *VAR_6;
 int VAR_7;
 uint64_t VAR_8;

 if ((VAR_4->so_flags & VAR_2) == 0 || VAR_5 == ((void*)0))
  goto done;

 FUNC_5(VAR_4);





 (void) FUNC_2(VAR_4, VAR_5, 1);
 if (VAR_5 != ((void*)0)) {
  VAR_8 = 0;
  for (VAR_7 = 1; VAR_7 <= VAR_1; VAR_7++) {
   VAR_6 = &VAR_5->cfi_entries[VAR_7 - 1];

   VAR_8 += FUNC_3(&VAR_6->cfe_snd.cfe_ctl_q);
   VAR_8 += FUNC_3(&VAR_6->cfe_snd.cfe_pending_q);
  }
  VAR_8 += FUNC_3(&VAR_5->cfi_snd.cfi_inject_q);

  if (VAR_8) {
   if (VAR_5->cfi_flags & VAR_0)
    FUNC_1(
     &VAR_3.cfs_flush_out_drop);
   else
    FUNC_1(
     &VAR_3.cfs_flush_out_close);
  }
 }
 FUNC_4(VAR_4, 1);




 (void) FUNC_2(VAR_4, VAR_5, 0);
 if (VAR_5 != ((void*)0)) {
  VAR_8 = 0;
  for (VAR_7 = 1; VAR_7 <= VAR_1; VAR_7++) {
   VAR_6 = &VAR_5->cfi_entries[VAR_7 - 1];

    VAR_8 += FUNC_3(
     &VAR_6->cfe_rcv.cfe_ctl_q);
    VAR_8 += FUNC_3(
     &VAR_6->cfe_rcv.cfe_pending_q);
  }
  VAR_8 += FUNC_3(&VAR_5->cfi_rcv.cfi_inject_q);

  if (VAR_8) {
   if (VAR_5->cfi_flags & VAR_0)
    FUNC_1(
     &VAR_3.cfs_flush_in_drop);
   else
    FUNC_1(
     &VAR_3.cfs_flush_in_close);
  }
 }
 FUNC_4(VAR_4, 0);
done:
 FUNC_0(VAR_5);
}
