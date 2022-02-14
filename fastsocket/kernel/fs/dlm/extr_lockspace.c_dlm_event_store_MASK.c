
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int ls_uevent_wait; int ls_flags; int ls_uevent_result; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (char const*,int *,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct dlm_ls *VAR_1, const char *VAR_2, size_t VAR_3)
{
 VAR_1->ls_uevent_result = FUNC_1(VAR_2, ((void*)0), 0);
 FUNC_0(VAR_0, &VAR_1->ls_flags);
 FUNC_2(&VAR_1->ls_uevent_wait);
 return VAR_3;
}
