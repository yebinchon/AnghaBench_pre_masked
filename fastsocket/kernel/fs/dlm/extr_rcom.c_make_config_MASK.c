
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcom_config {void* rf_lsflags; void* rf_lvblen; } ;
struct dlm_ls {int ls_exflags; int ls_lvblen; } ;


 void* FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct dlm_ls *VAR_0, struct rcom_config *VAR_1)
{
 VAR_1->rf_lvblen = FUNC_0(VAR_0->ls_lvblen);
 VAR_1->rf_lsflags = FUNC_0(VAR_0->ls_exflags);
}
