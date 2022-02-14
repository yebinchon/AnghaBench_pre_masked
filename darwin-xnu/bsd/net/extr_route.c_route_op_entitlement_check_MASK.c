
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uid_t ;
struct socket {int dummy; } ;
typedef int * kauth_cred_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ) ;
 scalar_t__ FUNC_2 (struct socket*,int ,int ) ;

int
FUNC_3(struct socket *VAR_2,
    kauth_cred_t VAR_3,
    int VAR_4,
    boolean_t VAR_5)
{
 if (VAR_2 != ((void*)0)) {
  if (VAR_4 == VAR_1) {





   if (FUNC_2(VAR_2, VAR_0,
       VAR_5) == 0)
    return (0);
   else
    return (-1);
  }
 } else if (VAR_3 != ((void*)0)) {
  uid_t VAR_6 = FUNC_0(VAR_3);


  if (VAR_6 != 0 || !VAR_5) {
   if (VAR_4 == VAR_1) {
    if (FUNC_1(VAR_3,
        VAR_0, 0) == 0)
     return (0);
    else
     return (-1);
   }
  }
 }
 return (-1);
}
