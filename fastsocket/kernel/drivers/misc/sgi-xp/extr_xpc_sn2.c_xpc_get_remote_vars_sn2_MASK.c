
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_vars_sn2 {int version; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct xpc_vars_sn2*) ;
 int FUNC_2 (int ,unsigned long,int ) ;

__attribute__((used)) static enum xp_retval
FUNC_3(unsigned long VAR_5,
   struct xpc_vars_sn2 *VAR_6)
{
 enum xp_retval VAR_7;

 if (VAR_5 == 0)
  return VAR_4;


 VAR_7 = FUNC_2(FUNC_1(VAR_6), VAR_5,
          VAR_0);
 if (VAR_7 != VAR_3)
  return VAR_7;

 if (FUNC_0(VAR_6->version) !=
     FUNC_0(VAR_1)) {
  return VAR_2;
 }

 return VAR_3;
}
