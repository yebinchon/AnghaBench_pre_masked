
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dlm_ls {scalar_t__ ls_low_nodeid; } ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct dlm_ls*,int) ;
 int FUNC_2 (struct dlm_ls*,int) ;
 int FUNC_3 (struct dlm_ls*,int) ;

__attribute__((used)) static int FUNC_4(struct dlm_ls *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2 = VAR_1 << 1;
 int VAR_3;

 if (VAR_0->ls_low_nodeid == FUNC_0()) {
  VAR_3 = FUNC_2(VAR_0, VAR_1);
  if (!VAR_3)
   FUNC_1(VAR_0, VAR_2);
 } else
  VAR_3 = FUNC_3(VAR_0, VAR_2);

 return VAR_3;
}
