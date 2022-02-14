
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int ls_uevent_result; int ls_flags; int ls_uevent_wait; int ls_kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct dlm_ls*,char*,...) ;
 int FUNC_2 (struct dlm_ls*,char*,char*,int,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct dlm_ls *VAR_3, int VAR_4)
{
 int VAR_5;

 if (VAR_4)
  FUNC_0(&VAR_3->ls_kobj, VAR_1);
 else
  FUNC_0(&VAR_3->ls_kobj, VAR_0);

 FUNC_1(VAR_3, "%s the lockspace group...", VAR_4 ? "joining" : "leaving");




 VAR_5 = FUNC_4(VAR_3->ls_uevent_wait,
   FUNC_3(VAR_2, &VAR_3->ls_flags));

 FUNC_1(VAR_3, "group event done %d %d", VAR_5, VAR_3->ls_uevent_result);

 if (VAR_5)
  goto out;

 VAR_5 = VAR_3->ls_uevent_result;
 out:
 if (VAR_5)
  FUNC_2(VAR_3, "group %s failed %d %d", VAR_4 ? "join" : "leave",
     VAR_5, VAR_3->ls_uevent_result);
 return VAR_5;
}
