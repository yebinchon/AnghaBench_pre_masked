
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_message {int dummy; } ;
struct dlm_lkb {struct dlm_rsb* lkb_resource; } ;


 int FUNC_0 (struct dlm_rsb*,struct dlm_lkb*,struct dlm_message*) ;
 int FUNC_1 (struct dlm_rsb*) ;
 int FUNC_2 (struct dlm_rsb*) ;
 int FUNC_3 (struct dlm_rsb*) ;
 int FUNC_4 (struct dlm_lkb*,struct dlm_message*) ;
 int FUNC_5 (struct dlm_rsb*) ;
 int FUNC_6 (struct dlm_lkb*,struct dlm_message*) ;

__attribute__((used)) static void FUNC_7(struct dlm_lkb *VAR_0, struct dlm_message *VAR_1)
{
 struct dlm_rsb *VAR_2 = VAR_0->lkb_resource;
 int VAR_3;

 FUNC_1(VAR_2);
 FUNC_2(VAR_2);

 VAR_3 = FUNC_6(VAR_0, VAR_1);
 if (VAR_3)
  goto out;


 VAR_3 = FUNC_4(VAR_0, VAR_1);
 if (VAR_3)
  goto out;

 FUNC_0(VAR_2, VAR_0, VAR_1);
 out:
 FUNC_5(VAR_2);
 FUNC_3(VAR_2);
}
