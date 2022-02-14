
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_session {int sess_kref; struct se_portal_group* se_tpg; } ;
struct se_portal_group {TYPE_1__* se_tpg_tfo; } ;
struct TYPE_2__ {int (* put_session ) (struct se_session*) ;} ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct se_session*) ;
 int VAR_0 ;

void FUNC_2(struct se_session *VAR_1)
{
 struct se_portal_group *VAR_2 = VAR_1->se_tpg;

 if (VAR_2->se_tpg_tfo->put_session != ((void*)0)) {
  VAR_2->se_tpg_tfo->put_session(VAR_1);
  return;
 }
 FUNC_0(&VAR_1->sess_kref, VAR_0);
}
