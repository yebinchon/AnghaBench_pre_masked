
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int dummy; } ;
struct dlm_lkb {scalar_t__ lkb_nodeid; int lkb_resource; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct dlm_ls*,scalar_t__) ;
 int FUNC_2 (struct dlm_ls*) ;

__attribute__((used)) static int FUNC_3(struct dlm_ls *VAR_0, struct dlm_lkb *VAR_1)
{
 if (FUNC_1(VAR_0, VAR_1->lkb_nodeid))
  return 1;

 if (!FUNC_2(VAR_0))
  return 0;

 if (FUNC_0(VAR_1->lkb_resource) != VAR_1->lkb_nodeid)
  return 1;

 return 0;
}
