
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct socket {int dummy; } ;
struct mbuf {int dummy; } ;
struct cfil_info {struct cfil_entry* cfi_entries; } ;
struct cfe_buf {int cfe_ctl_q; } ;
struct cfil_entry {int * cfe_filter; struct cfe_buf cfe_rcv; struct cfe_buf cfe_snd; } ;
typedef scalar_t__ errno_t ;
struct TYPE_2__ {int cfs_ctl_q_in_enqueued; int cfs_ctl_q_out_enqueued; } ;


 int FUNC_0 (struct cfil_info*) ;
 int FUNC_1 (int ,char*,scalar_t__,...) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct socket*) ;
 scalar_t__ FUNC_4 (struct socket*,struct cfil_info*,int,int) ;
 int FUNC_5 (int *,struct mbuf*,int ) ;
 TYPE_1__ VAR_3 ;
 int FUNC_6 (struct socket*) ;

int
FUNC_7(struct socket *VAR_4, struct cfil_info *VAR_5, uint32_t VAR_6, int VAR_7,
 struct mbuf *VAR_8, uint64_t VAR_9)
{
 errno_t VAR_10 = 0;
 struct cfil_entry *VAR_11;
 struct cfe_buf *VAR_12;

 FUNC_1(VAR_2, "so %llx kcunit %u outgoing %d",
  (uint64_t)FUNC_3(VAR_4), VAR_6, VAR_7);

 FUNC_6(VAR_4);

 VAR_11 = &VAR_5->cfi_entries[VAR_6 - 1];
 if (VAR_7)
  VAR_12 = &VAR_11->cfe_snd;
 else
  VAR_12 = &VAR_11->cfe_rcv;


 if (VAR_11->cfe_filter == ((void*)0)) {
  VAR_10 = 0;
  goto done;
 }


 FUNC_5(&VAR_12->cfe_ctl_q, VAR_8, VAR_9);
 if (VAR_7)
  FUNC_2(VAR_9,
   &VAR_3.cfs_ctl_q_out_enqueued);
 else
  FUNC_2(VAR_9,
   &VAR_3.cfs_ctl_q_in_enqueued);

 VAR_10 = FUNC_4(VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_10 != 0) {
  FUNC_1(VAR_1, "cfil_data_service_ctl_q() error %d",
   VAR_10);
 }




 VAR_10 = VAR_0;
done:
 FUNC_0(VAR_5);

 FUNC_1(VAR_2, "return %d", VAR_10);
 return (VAR_10);
}
