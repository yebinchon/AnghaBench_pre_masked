
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_siginfo_t ;
typedef int user_addr_t ;
typedef int user64_siginfo_t ;
typedef int user32_siginfo_t ;
typedef int sinfo64 ;
typedef int sinfo32 ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int
FUNC_4(user_siginfo_t *VAR_0, boolean_t VAR_1, user_addr_t VAR_2)
{
 if (VAR_1) {
  user64_siginfo_t VAR_3;

  FUNC_0(&VAR_3, sizeof (VAR_3));
  FUNC_3(VAR_0, &VAR_3);
  return (FUNC_1(&VAR_3, VAR_2, sizeof (VAR_3)));
 } else {
  user32_siginfo_t VAR_4;

  FUNC_0(&VAR_4, sizeof (VAR_4));
  FUNC_2(VAR_0, &VAR_4);
  return (FUNC_1(&VAR_4, VAR_2, sizeof (VAR_4)));
 }
}
