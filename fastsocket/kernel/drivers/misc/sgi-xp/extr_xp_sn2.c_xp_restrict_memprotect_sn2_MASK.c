
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (unsigned long,unsigned long,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static enum xp_retval
FUNC_2(unsigned long VAR_4, unsigned long VAR_5)
{
 u64 VAR_6 = 0;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_4, VAR_5, VAR_0,
       &VAR_6);
 if (VAR_7 != 0) {
  FUNC_0(VAR_1, "sn_change_memprotect(,, "
   "SN_MEMPROT_ACCESS_CLASS_0,) failed ret=%d\n", VAR_7);
  return VAR_2;
 }
 return VAR_3;
}
