
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_message {int m_type; } ;
struct dlm_ls {int ls_waiters_mutex; struct dlm_message ls_stub_ms; } ;
struct dlm_lkb {TYPE_1__* lkb_resource; } ;
struct TYPE_2__ {struct dlm_ls* res_ls; } ;


 int FUNC_0 (struct dlm_lkb*,int ,struct dlm_message*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dlm_lkb *VAR_0, struct dlm_message *VAR_1)
{
 struct dlm_ls *VAR_2 = VAR_0->lkb_resource->res_ls;
 int VAR_3;

 if (VAR_1 != &VAR_2->ls_stub_ms)
  FUNC_1(&VAR_2->ls_waiters_mutex);
 VAR_3 = FUNC_0(VAR_0, VAR_1->m_type, VAR_1);
 if (VAR_1 != &VAR_2->ls_stub_ms)
  FUNC_2(&VAR_2->ls_waiters_mutex);
 return VAR_3;
}
