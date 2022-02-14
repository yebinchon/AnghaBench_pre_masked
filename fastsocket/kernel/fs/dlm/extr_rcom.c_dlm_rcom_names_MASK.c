
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dlm_rcom {int rc_id; int rc_buf; } ;
struct dlm_mhandle {int dummy; } ;
struct dlm_ls {int ls_recover_nodeid; TYPE_2__* ls_recover_buf; } ;
struct TYPE_6__ {int ci_buffer_size; } ;
struct TYPE_4__ {int h_length; } ;
struct TYPE_5__ {int rc_buf; TYPE_1__ rc_header; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_ls*,int *) ;
 int FUNC_1 (struct dlm_ls*,int,int ,int,struct dlm_rcom**,struct dlm_mhandle**) ;
 int FUNC_2 (struct dlm_ls*) ;
 TYPE_3__ VAR_1 ;
 int FUNC_3 (struct dlm_ls*,char*,int,int ,int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct dlm_ls*,int *) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int VAR_2 ;
 int FUNC_8 (struct dlm_ls*,struct dlm_mhandle*,struct dlm_rcom*) ;

int FUNC_9(struct dlm_ls *VAR_3, int VAR_4, char *VAR_5, int VAR_6)
{
 struct dlm_rcom *VAR_7;
 struct dlm_mhandle *VAR_8;
 int VAR_9 = 0;
 int VAR_10 = VAR_1.ci_buffer_size - sizeof(struct dlm_rcom);

 VAR_3->ls_recover_nodeid = VAR_4;

 if (VAR_4 == FUNC_4()) {
  VAR_3->ls_recover_buf->rc_header.h_length =
   VAR_1.ci_buffer_size;
  FUNC_3(VAR_3, VAR_5, VAR_6,
                        VAR_3->ls_recover_buf->rc_buf,
                        VAR_10, VAR_4);
  goto out;
 }

 VAR_9 = FUNC_1(VAR_3, VAR_4, VAR_0, VAR_6, &VAR_7, &VAR_8);
 if (VAR_9)
  goto out;
 FUNC_6(VAR_7->rc_buf, VAR_5, VAR_6);

 FUNC_0(VAR_3, &VAR_7->rc_id);
 FUNC_7(VAR_3->ls_recover_buf, 0, VAR_1.ci_buffer_size);

 FUNC_8(VAR_3, VAR_8, VAR_7);

 VAR_9 = FUNC_5(VAR_3, &VAR_2);
 FUNC_2(VAR_3);
 out:
 return VAR_9;
}
