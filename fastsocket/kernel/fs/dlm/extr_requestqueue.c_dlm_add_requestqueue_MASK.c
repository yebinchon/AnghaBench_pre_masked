
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rq_entry {int nodeid; int list; int request; } ;
struct TYPE_2__ {int h_length; } ;
struct dlm_message {TYPE_1__ m_header; } ;
struct dlm_ls {int ls_requestqueue_mutex; int ls_requestqueue; } ;


 int VAR_0 ;
 struct rq_entry* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *,struct dlm_message*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct dlm_ls *VAR_1, int VAR_2, struct dlm_message *VAR_3)
{
 struct rq_entry *VAR_4;
 int VAR_5 = VAR_3->m_header.h_length - sizeof(struct dlm_message);

 VAR_4 = FUNC_0(sizeof(struct rq_entry) + VAR_5, VAR_0);
 if (!VAR_4) {
  FUNC_2("dlm_add_requestqueue: out of memory len %d", VAR_5);
  return;
 }

 VAR_4->nodeid = VAR_2;
 FUNC_3(&VAR_4->request, VAR_3, VAR_3->m_header.h_length);

 FUNC_4(&VAR_1->ls_requestqueue_mutex);
 FUNC_1(&VAR_4->list, &VAR_1->ls_requestqueue);
 FUNC_5(&VAR_1->ls_requestqueue_mutex);
}
