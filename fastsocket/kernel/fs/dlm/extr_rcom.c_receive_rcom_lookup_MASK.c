
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h_nodeid; int h_length; } ;
struct dlm_rcom {int rc_result; int rc_seq; int rc_seq_reply; int rc_id; int rc_buf; TYPE_1__ rc_header; } ;
struct dlm_mhandle {int dummy; } ;
struct dlm_ls {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_ls*,int,int ,int ,struct dlm_rcom**,struct dlm_mhandle**) ;
 int FUNC_1 (struct dlm_ls*,int,int ,int,int*) ;
 int FUNC_2 (struct dlm_ls*,struct dlm_mhandle*,struct dlm_rcom*) ;

__attribute__((used)) static void FUNC_3(struct dlm_ls *VAR_1, struct dlm_rcom *VAR_2)
{
 struct dlm_rcom *VAR_3;
 struct dlm_mhandle *VAR_4;
 int VAR_5, VAR_6, VAR_7 = VAR_2->rc_header.h_nodeid;
 int VAR_8 = VAR_2->rc_header.h_length - sizeof(struct dlm_rcom);

 VAR_5 = FUNC_0(VAR_1, VAR_7, VAR_0, 0, &VAR_3, &VAR_4);
 if (VAR_5)
  return;

 VAR_5 = FUNC_1(VAR_1, VAR_7, VAR_2->rc_buf, VAR_8, &VAR_6);
 if (VAR_5)
  VAR_6 = VAR_5;
 VAR_3->rc_result = VAR_6;
 VAR_3->rc_id = VAR_2->rc_id;
 VAR_3->rc_seq_reply = VAR_2->rc_seq;

 FUNC_2(VAR_1, VAR_4, VAR_3);
}
