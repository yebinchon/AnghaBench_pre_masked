
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {long data; scalar_t__ expires; int function; } ;
struct dlm_ls {TYPE_1__ ls_timer; int ls_wait_general; } ;
struct TYPE_6__ {int ci_recover_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__ VAR_2 ;
 scalar_t__ FUNC_2 (struct dlm_ls*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (struct dlm_ls*,char*) ;
 int FUNC_5 (int ,int) ;

int FUNC_6(struct dlm_ls *VAR_5, int (*VAR_6) (struct dlm_ls *VAR_7))
{
 int VAR_8 = 0;

 FUNC_3(&VAR_5->ls_timer);
 VAR_5->ls_timer.function = VAR_3;
 VAR_5->ls_timer.data = (long) VAR_5;
 VAR_5->ls_timer.expires = VAR_4 + (VAR_2.ci_recover_timer * VAR_1);
 FUNC_0(&VAR_5->ls_timer);

 FUNC_5(VAR_5->ls_wait_general, VAR_6(VAR_5) || FUNC_2(VAR_5));
 FUNC_1(&VAR_5->ls_timer);

 if (FUNC_2(VAR_5)) {
  FUNC_4(VAR_5, "dlm_wait_function aborted");
  VAR_8 = -VAR_0;
 }
 return VAR_8;
}
