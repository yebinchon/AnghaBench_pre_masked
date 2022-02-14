
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_mhandle {int dummy; } ;
struct dlm_message {scalar_t__ m_result; } ;
struct dlm_lkb {int lkb_nodeid; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_rsb*,struct dlm_lkb*,int,int ,struct dlm_message**,struct dlm_mhandle**) ;
 int FUNC_1 (struct dlm_rsb*,struct dlm_lkb*,struct dlm_message*) ;
 int FUNC_2 (struct dlm_mhandle*,struct dlm_message*) ;

__attribute__((used)) static int FUNC_3(struct dlm_rsb *VAR_1, struct dlm_lkb *VAR_2)
{
 struct dlm_message *VAR_3;
 struct dlm_mhandle *VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = VAR_2->lkb_nodeid;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_5, VAR_0, &VAR_3, &VAR_4);
 if (VAR_6)
  goto out;

 FUNC_1(VAR_1, VAR_2, VAR_3);

 VAR_3->m_result = 0;

 VAR_6 = FUNC_2(VAR_4, VAR_3);
 out:
 return VAR_6;
}
