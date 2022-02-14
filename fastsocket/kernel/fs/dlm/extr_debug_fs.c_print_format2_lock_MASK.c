
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct seq_file {int dummy; } ;
struct dlm_rsb {int res_name; int res_length; int res_nodeid; } ;
struct dlm_lkb {int lkb_flags; int lkb_rqmode; int lkb_grmode; int lkb_status; int lkb_exflags; int lkb_ownpid; int lkb_remid; int lkb_nodeid; int lkb_id; int lkb_timestamp; TYPE_1__* lkb_ua; } ;
struct TYPE_2__ {scalar_t__ xid; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct seq_file*,char*,int ,int ,int ,int ,unsigned long long,int ,int,int ,int ,int ,unsigned long long,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_1, struct dlm_lkb *VAR_2,
         struct dlm_rsb *VAR_3)
{
 u64 VAR_4 = 0;
 u64 VAR_5;
 int VAR_6;

 if (VAR_2->lkb_flags & VAR_0) {
  if (VAR_2->lkb_ua)
   VAR_4 = VAR_2->lkb_ua->xid;
 }


 VAR_5 = FUNC_2(FUNC_1(FUNC_0(), VAR_2->lkb_timestamp));




 VAR_6 = FUNC_3(VAR_1, "%x %d %x %u %llu %x %x %d %d %d %llu %u %d \"%s\"\n",
   VAR_2->lkb_id,
   VAR_2->lkb_nodeid,
   VAR_2->lkb_remid,
   VAR_2->lkb_ownpid,
   (unsigned long long)VAR_4,
   VAR_2->lkb_exflags,
   VAR_2->lkb_flags,
   VAR_2->lkb_status,
   VAR_2->lkb_grmode,
   VAR_2->lkb_rqmode,
   (unsigned long long)VAR_5,
   VAR_3->res_nodeid,
   VAR_3->res_length,
   VAR_3->res_name);
 return VAR_6;
}
