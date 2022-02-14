
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_rcom {int rc_result; int rc_id; } ;
struct dlm_mhandle {int dummy; } ;
struct dlm_ls {int ls_recover_nodeid; struct dlm_rcom* ls_recover_buf; } ;
struct TYPE_2__ {int ci_buffer_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlm_ls*,int *) ;
 int FUNC_1 (struct dlm_ls*,struct dlm_rcom*,int) ;
 int FUNC_2 (struct dlm_ls*,int,int ,int ,struct dlm_rcom**,struct dlm_mhandle**) ;
 int FUNC_3 (struct dlm_ls*) ;
 TYPE_1__ VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (struct dlm_ls*) ;
 int FUNC_6 (struct dlm_ls*,int *) ;
 int FUNC_7 (struct dlm_ls*,char*,int) ;
 int FUNC_8 (struct dlm_rcom*,int ,int ) ;
 int VAR_3 ;
 int FUNC_9 (struct dlm_ls*,struct dlm_mhandle*,struct dlm_rcom*) ;

int FUNC_10(struct dlm_ls *VAR_4, int VAR_5)
{
 struct dlm_rcom *VAR_6;
 struct dlm_mhandle *VAR_7;
 int VAR_8 = 0;

 VAR_4->ls_recover_nodeid = VAR_5;

 if (VAR_5 == FUNC_4()) {
  VAR_6 = VAR_4->ls_recover_buf;
  VAR_6->rc_result = FUNC_5(VAR_4);
  goto out;
 }

 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_0, 0, &VAR_6, &VAR_7);
 if (VAR_8)
  goto out;

 FUNC_0(VAR_4, &VAR_6->rc_id);
 FUNC_8(VAR_4->ls_recover_buf, 0, VAR_2.ci_buffer_size);

 FUNC_9(VAR_4, VAR_7, VAR_6);

 VAR_8 = FUNC_6(VAR_4, &VAR_3);
 FUNC_3(VAR_4);
 if (VAR_8)
  goto out;

 VAR_6 = VAR_4->ls_recover_buf;

 if (VAR_6->rc_result == -VAR_1) {

  FUNC_7(VAR_4, "remote node %d not ready", VAR_5);
  VAR_6->rc_result = 0;
 } else
  VAR_8 = FUNC_1(VAR_4, VAR_6, VAR_5);

 out:
 return VAR_8;
}
