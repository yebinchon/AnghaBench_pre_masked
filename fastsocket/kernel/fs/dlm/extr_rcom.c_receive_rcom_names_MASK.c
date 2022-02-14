
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h_nodeid; int h_length; } ;
struct dlm_rcom {int rc_buf; int rc_seq; int rc_seq_reply; int rc_id; TYPE_1__ rc_header; } ;
struct dlm_mhandle {int dummy; } ;
struct dlm_ls {int dummy; } ;
struct TYPE_4__ {int ci_buffer_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_ls*,int,int ,int,struct dlm_rcom**,struct dlm_mhandle**) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (struct dlm_ls*,int ,int,int ,int,int) ;
 int FUNC_2 (struct dlm_ls*,struct dlm_mhandle*,struct dlm_rcom*) ;

__attribute__((used)) static void FUNC_3(struct dlm_ls *VAR_2, struct dlm_rcom *VAR_3)
{
 struct dlm_rcom *VAR_4;
 struct dlm_mhandle *VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_9 = VAR_3->rc_header.h_nodeid;
 VAR_7 = VAR_3->rc_header.h_length - sizeof(struct dlm_rcom);
 VAR_8 = VAR_1.ci_buffer_size - sizeof(struct dlm_rcom);

 VAR_6 = FUNC_0(VAR_2, VAR_9, VAR_0, VAR_8, &VAR_4, &VAR_5);
 if (VAR_6)
  return;
 VAR_4->rc_id = VAR_3->rc_id;
 VAR_4->rc_seq_reply = VAR_3->rc_seq;

 FUNC_1(VAR_2, VAR_3->rc_buf, VAR_7, VAR_4->rc_buf, VAR_8,
         VAR_9);
 FUNC_2(VAR_2, VAR_5, VAR_4);
}
