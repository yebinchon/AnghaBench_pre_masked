
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_nodeid; } ;
struct dlm_mhandle {int dummy; } ;
struct dlm_message {int dummy; } ;
struct dlm_lkb {int dummy; } ;


 int FUNC_0 (struct dlm_lkb*,int,int) ;
 int FUNC_1 (struct dlm_rsb*,struct dlm_lkb*,int,int,struct dlm_message**,struct dlm_mhandle**) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct dlm_lkb*,int ) ;
 int FUNC_4 (struct dlm_rsb*,struct dlm_lkb*,struct dlm_message*) ;
 int FUNC_5 (struct dlm_mhandle*,struct dlm_message*) ;

__attribute__((used)) static int FUNC_6(struct dlm_rsb *VAR_0, struct dlm_lkb *VAR_1, int VAR_2)
{
 struct dlm_message *VAR_3;
 struct dlm_mhandle *VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = VAR_0->res_nodeid;

 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_5, VAR_2, &VAR_3, &VAR_4);
 if (VAR_6)
  goto fail;

 FUNC_4(VAR_0, VAR_1, VAR_3);

 VAR_6 = FUNC_5(VAR_4, VAR_3);
 if (VAR_6)
  goto fail;
 return 0;

 fail:
 FUNC_3(VAR_1, FUNC_2(VAR_2));
 return VAR_6;
}
