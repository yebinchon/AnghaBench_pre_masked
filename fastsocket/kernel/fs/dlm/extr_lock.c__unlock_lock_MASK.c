
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int dummy; } ;
struct dlm_lkb {int dummy; } ;


 int FUNC_0 (struct dlm_rsb*,struct dlm_lkb*) ;
 scalar_t__ FUNC_1 (struct dlm_rsb*) ;
 int FUNC_2 (struct dlm_rsb*,struct dlm_lkb*) ;

__attribute__((used)) static int FUNC_3(struct dlm_rsb *VAR_0, struct dlm_lkb *VAR_1)
{
 int VAR_2;

 if (FUNC_1(VAR_0))

  VAR_2 = FUNC_2(VAR_0, VAR_1);
 else
  VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2;
}
