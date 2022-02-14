
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_lspace_params {int name; int flags; } ;
struct TYPE_2__ {int minor; } ;
struct dlm_ls {TYPE_1__ ls_device; } ;
typedef int dlm_lockspace_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct dlm_ls*,int ) ;
 struct dlm_ls* FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int **,int ,int ) ;
 int FUNC_4 (struct dlm_ls*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct dlm_lspace_params *VAR_4)
{
 dlm_lockspace_t *VAR_5;
 struct dlm_ls *VAR_6;
 int VAR_7;

 if (!FUNC_0(VAR_0))
  return -VAR_3;

 VAR_7 = FUNC_3(VAR_4->name, FUNC_6(VAR_4->name),
      &VAR_5, VAR_4->flags, VAR_1);
 if (VAR_7)
  return VAR_7;

 VAR_6 = FUNC_2(VAR_5);
 if (!VAR_6)
  return -VAR_2;

 VAR_7 = FUNC_1(VAR_6, VAR_4->name);
 FUNC_4(VAR_6);

 if (VAR_7)
  FUNC_5(VAR_5, 0);
 else
  VAR_7 = VAR_6->ls_device.minor;

 return VAR_7;
}
