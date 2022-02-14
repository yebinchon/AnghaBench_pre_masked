
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ,int ,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static enum xp_retval
FUNC_4(void)
{
 int VAR_8;
 u64 VAR_9;
 u64 VAR_10;

 VAR_9 = *(u64 *)VAR_6;
 VAR_10 = *(u64 *)VAR_5;
 VAR_8 = FUNC_3(VAR_9, VAR_10, VAR_10,
           1, 1);
 if (VAR_8 != 0) {
  FUNC_0(VAR_2, "can't register nofault code, error=%d\n", VAR_8);
  return VAR_3;
 }




 if (FUNC_1())
  VAR_7 = VAR_0;
 else if (FUNC_2())
  VAR_7 = VAR_1;

 return VAR_4;
}
