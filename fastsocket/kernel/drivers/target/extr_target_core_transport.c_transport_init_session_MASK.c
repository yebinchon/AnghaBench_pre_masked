
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_session {int sess_kref; int sess_cmd_lock; int sess_wait_list; int sess_cmd_list; int sess_acl_list; int sess_list; } ;


 int VAR_0 ;
 struct se_session* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct se_session* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;

struct se_session *FUNC_6(void)
{
 struct se_session *VAR_3;

 VAR_3 = FUNC_2(VAR_2, VAR_1);
 if (!VAR_3) {
  FUNC_4("Unable to allocate struct se_session from"
    " se_sess_cache\n");
  return FUNC_0(-VAR_0);
 }
 FUNC_1(&VAR_3->sess_list);
 FUNC_1(&VAR_3->sess_acl_list);
 FUNC_1(&VAR_3->sess_cmd_list);
 FUNC_1(&VAR_3->sess_wait_list);
 FUNC_5(&VAR_3->sess_cmd_lock);
 FUNC_3(&VAR_3->sess_kref);

 return VAR_3;
}
