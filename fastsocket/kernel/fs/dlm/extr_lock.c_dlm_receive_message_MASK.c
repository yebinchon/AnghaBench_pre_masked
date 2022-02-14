
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_message {int dummy; } ;
struct dlm_ls {int dummy; } ;


 int FUNC_0 (struct dlm_ls*,struct dlm_message*) ;
 int FUNC_1 (struct dlm_ls*,int,struct dlm_message*) ;
 scalar_t__ FUNC_2 (struct dlm_ls*) ;
 int FUNC_3 (struct dlm_ls*) ;

__attribute__((used)) static void FUNC_4(struct dlm_ls *VAR_0, struct dlm_message *VAR_1,
    int VAR_2)
{
 if (FUNC_2(VAR_0)) {
  FUNC_1(VAR_0, VAR_2, VAR_1);
 } else {
  FUNC_3(VAR_0);
  FUNC_0(VAR_0, VAR_1);
 }
}
