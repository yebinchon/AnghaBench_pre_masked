
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ s64 ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static enum xp_retval
FUNC_1(void *VAR_5, u64 *VAR_6, unsigned long *VAR_7,
       size_t *VAR_8)
{
 s64 VAR_9;
 enum xp_retval VAR_10;

 VAR_9 = FUNC_0((u64)VAR_5, VAR_6,
   (u64 *)VAR_7, (u64 *)VAR_8);
 if (VAR_9 == VAR_1)
  VAR_10 = VAR_4;
 else if (VAR_9 == VAR_0)
  VAR_10 = VAR_2;
 else
  VAR_10 = VAR_3;

 return VAR_10;
}
