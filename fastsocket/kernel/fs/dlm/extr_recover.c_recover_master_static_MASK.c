
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_nodeid; } ;


 int FUNC_0 (struct dlm_rsb*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct dlm_rsb*) ;
 scalar_t__ FUNC_3 (struct dlm_rsb*) ;
 int FUNC_4 (struct dlm_rsb*,int) ;

__attribute__((used)) static int FUNC_5(struct dlm_rsb *VAR_0)
{
 int VAR_1 = FUNC_0(VAR_0);

 if (VAR_1 == FUNC_1())
  VAR_1 = 0;

 if (VAR_0->res_nodeid != VAR_1) {
  if (FUNC_3(VAR_0))
   FUNC_2(VAR_0);
  FUNC_4(VAR_0, VAR_1);
  return 1;
 }
 return 0;
}
