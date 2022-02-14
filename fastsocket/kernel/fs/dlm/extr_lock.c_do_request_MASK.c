
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_lkb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dlm_rsb*,struct dlm_lkb*,int ) ;
 int FUNC_1 (struct dlm_lkb*) ;
 scalar_t__ FUNC_2 (struct dlm_rsb*,struct dlm_lkb*,int,int ,int *) ;
 scalar_t__ FUNC_3 (struct dlm_lkb*) ;
 int FUNC_4 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_5 (struct dlm_rsb*,struct dlm_lkb*,int) ;

__attribute__((used)) static int FUNC_6(struct dlm_rsb *VAR_3, struct dlm_lkb *VAR_4)
{
 int VAR_5 = 0;

 if (FUNC_2(VAR_3, VAR_4, 1, 0, ((void*)0))) {
  FUNC_4(VAR_3, VAR_4);
  FUNC_5(VAR_3, VAR_4, 0);
  goto out;
 }

 if (FUNC_3(VAR_4)) {
  VAR_5 = -VAR_2;
  FUNC_0(VAR_3, VAR_4, VAR_0);
  FUNC_1(VAR_4);
  goto out;
 }

 VAR_5 = -VAR_1;
 FUNC_5(VAR_3, VAR_4, -VAR_1);
 out:
 return VAR_5;
}
