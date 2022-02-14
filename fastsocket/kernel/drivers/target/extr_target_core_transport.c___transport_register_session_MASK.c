
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_session {void* fabric_sess_ptr; int sess_list; int sess_acl_list; int sess_bin_isid; struct se_portal_group* se_tpg; } ;
struct se_portal_group {TYPE_1__* se_tpg_tfo; int tpg_sess_list; } ;
struct se_node_acl {int nacl_sess_lock; int acl_sess_list; struct se_session* nacl_sess; int acl_kref; } ;
struct TYPE_2__ {int (* get_fabric_name ) () ;int (* sess_get_initiator_sid ) (struct se_session*,unsigned char*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (unsigned char*,int ,int) ;
 int FUNC_4 (char*,int ,void*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct se_session*,unsigned char*,int) ;
 int FUNC_8 () ;

void FUNC_9(
 struct se_portal_group *VAR_1,
 struct se_node_acl *VAR_2,
 struct se_session *VAR_3,
 void *VAR_4)
{
 unsigned char VAR_5[VAR_0];

 VAR_3->se_tpg = VAR_1;
 VAR_3->fabric_sess_ptr = VAR_4;






 if (VAR_2) {




  if (VAR_1->se_tpg_tfo->sess_get_initiator_sid != ((void*)0)) {
   FUNC_3(&VAR_5[0], 0, VAR_0);
   VAR_1->se_tpg_tfo->sess_get_initiator_sid(VAR_3,
     &VAR_5[0], VAR_0);
   VAR_3->sess_bin_isid = FUNC_0(&VAR_5[0]);
  }
  FUNC_1(&VAR_2->acl_kref);

  FUNC_5(&VAR_2->nacl_sess_lock);




  VAR_2->nacl_sess = VAR_3;

  FUNC_2(&VAR_3->sess_acl_list,
         &VAR_2->acl_sess_list);
  FUNC_6(&VAR_2->nacl_sess_lock);
 }
 FUNC_2(&VAR_3->sess_list, &VAR_1->tpg_sess_list);

 FUNC_4("TARGET_CORE[%s]: Registered fabric_sess_ptr: %p\n",
  VAR_1->se_tpg_tfo->get_fabric_name(), VAR_3->fabric_sess_ptr);
}
