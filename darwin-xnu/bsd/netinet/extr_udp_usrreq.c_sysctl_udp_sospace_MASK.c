
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_quad_t ;
typedef scalar_t__ u_int32_t ;
struct sysctl_req {int dummy; } ;
struct sysctl_oid {int oid_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;


 scalar_t__ VAR_4 ;
 int FUNC_0 (struct sysctl_req*,scalar_t__,int,scalar_t__*,int*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int
FUNC_1(struct sysctl_oid *VAR_7, void *VAR_8, int VAR_9,
    struct sysctl_req *VAR_10)
{
#pragma unused(arg1, arg2)
 u_int32_t VAR_11 = 0, *VAR_12 = ((void*)0);
 int VAR_13 = 0, VAR_14 = 0;
 u_quad_t VAR_15 = (VAR_4/(VAR_3+VAR_2)) * VAR_2;

 switch (VAR_7->oid_number) {
 case 128:
  VAR_12 = &VAR_5;
  break;
 case 129:
  VAR_12 = &VAR_6;
  break;
 default:
  return (VAR_0);
 }
 VAR_14 = FUNC_0(VAR_10, *VAR_12, sizeof (u_int32_t),
     &VAR_11, &VAR_13);
 if (VAR_13) {
  if (VAR_11 > 0 && VAR_11 <= VAR_15)
   *VAR_12 = VAR_11;
  else
   VAR_14 = VAR_1;
 }
 return (VAR_14);
}
