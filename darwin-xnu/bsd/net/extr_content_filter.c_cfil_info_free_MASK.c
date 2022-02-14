
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
struct content_filter {int cf_sock_count; int cf_sock_entries; } ;
struct TYPE_9__ {int cfe_ctl_q; int cfe_pending_q; } ;
struct TYPE_8__ {int cfe_ctl_q; int cfe_pending_q; } ;
struct TYPE_7__ {int cfi_inject_q; } ;
struct TYPE_6__ {int cfi_inject_q; } ;
struct cfil_info {TYPE_4__ cfe_rcv; TYPE_3__ cfe_snd; struct cfil_info* cfi_entries; TYPE_2__ cfi_rcv; TYPE_1__ cfi_snd; int * cfi_hash_entry; scalar_t__ cfe_necp_control_unit; struct content_filter* cfe_filter; } ;
struct cfil_entry {TYPE_4__ cfe_rcv; TYPE_3__ cfe_snd; struct cfil_entry* cfi_entries; TYPE_2__ cfi_rcv; TYPE_1__ cfi_snd; int * cfi_hash_entry; scalar_t__ cfe_necp_control_unit; struct content_filter* cfe_filter; } ;
struct TYPE_10__ {int cfs_flush_in_free; int cfs_flush_out_free; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct cfil_info*,int ) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_5__ VAR_9 ;
 struct content_filter** VAR_10 ;
 int FUNC_7 (struct content_filter*) ;
 int FUNC_8 (int ,struct cfil_info*) ;

__attribute__((used)) static void
FUNC_9(struct cfil_info *VAR_11)
{
 int VAR_12;
 uint64_t VAR_13 = 0;
 uint64_t VAR_14 = 0;

 if (VAR_11 == ((void*)0))
  return;

 FUNC_0(VAR_0, "");

 FUNC_5(&VAR_5);

 for (VAR_12 = 1;
  VAR_10 != ((void*)0) && VAR_12 <= VAR_1;
  VAR_12++) {
  struct cfil_entry *VAR_15;
  struct content_filter *VAR_16;

  VAR_15 = &VAR_11->cfi_entries[VAR_12 - 1];


  if (VAR_15->cfe_filter == ((void*)0))
   continue;

  VAR_16 = VAR_10[VAR_12 - 1];

  FUNC_3(VAR_16 == VAR_15->cfe_filter);

  VAR_15->cfe_filter = ((void*)0);
  VAR_15->cfe_necp_control_unit = 0;
  FUNC_2(&VAR_16->cf_sock_entries, VAR_15, VAR_2);
  VAR_16->cf_sock_count--;

  FUNC_7(VAR_16);
 }
 if (VAR_11->cfi_hash_entry != ((void*)0))
  VAR_8--;
 VAR_6--;
 FUNC_2(&VAR_7, VAR_11, VAR_3);

 VAR_14 += FUNC_4(&VAR_11->cfi_snd.cfi_inject_q);
 VAR_13 += FUNC_4(&VAR_11->cfi_rcv.cfi_inject_q);

 for (VAR_12 = 1; VAR_12 <= VAR_1; VAR_12++) {
  struct cfil_entry *VAR_17;

  VAR_17 = &VAR_11->cfi_entries[VAR_12 - 1];
  VAR_14 += FUNC_4(&VAR_17->cfe_snd.cfe_pending_q);
  VAR_13 += FUNC_4(&VAR_17->cfe_rcv.cfe_pending_q);
  VAR_14 += FUNC_4(&VAR_17->cfe_snd.cfe_ctl_q);
  VAR_13 += FUNC_4(&VAR_17->cfe_rcv.cfe_ctl_q);
 }
 FUNC_6(&VAR_5);

 if (VAR_14)
  FUNC_1(&VAR_9.cfs_flush_out_free);
 if (VAR_13)
  FUNC_1(&VAR_9.cfs_flush_in_free);

 FUNC_8(VAR_4, VAR_11);
}
