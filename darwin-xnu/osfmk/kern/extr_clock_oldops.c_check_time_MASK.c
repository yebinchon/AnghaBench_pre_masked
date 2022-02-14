
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_timespec_t ;
typedef int alarm_type_t ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(
 alarm_type_t VAR_2,
 mach_timespec_t *VAR_3,
 mach_timespec_t *VAR_4)
{
 int VAR_5;

 if (FUNC_1(VAR_2))
  return (-1);
 if (FUNC_2(VAR_3))
  return (-1);
 if ((VAR_2 & VAR_0) == VAR_1)
  FUNC_0(VAR_3, VAR_4);

 VAR_5 = FUNC_3(VAR_3, VAR_4);

 return ((VAR_5 >= 0)? VAR_5: 0);
}
