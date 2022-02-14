
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int h_nodeid; } ;
struct dlm_rcom {int rc_type; scalar_t__ rc_seq_reply; TYPE_1__ rc_header; } ;
struct dlm_ls {int ls_recover_lock; scalar_t__ ls_recover_seq; } ;






 int FUNC_0 (struct dlm_ls*,char*,int,int ,unsigned long long,unsigned long long) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dlm_ls *VAR_0, struct dlm_rcom *VAR_1)
{
 uint64_t VAR_2;
 int VAR_3 = 0;

 switch (VAR_1->rc_type) {
 case 128:
 case 129:
 case 130:
 case 131:
  FUNC_1(&VAR_0->ls_recover_lock);
  VAR_2 = VAR_0->ls_recover_seq;
  FUNC_2(&VAR_0->ls_recover_lock);
  if (VAR_1->rc_seq_reply != VAR_2) {
   FUNC_0(VAR_0, "ignoring old reply %x from %d "
          "seq_reply %llx expect %llx",
          VAR_1->rc_type, VAR_1->rc_header.h_nodeid,
          (unsigned long long)VAR_1->rc_seq_reply,
          (unsigned long long)VAR_2);
   VAR_3 = 1;
  }
 }
 return VAR_3;
}
