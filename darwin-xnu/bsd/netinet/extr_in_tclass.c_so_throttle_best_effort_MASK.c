
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct socket {int dummy; } ;
struct ifnet {scalar_t__ if_rt_sendts; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (struct socket*) ;

__attribute__((used)) static inline int
FUNC_2(struct socket *VAR_2, struct ifnet *VAR_3)
{
 u_int32_t VAR_4 = FUNC_0();
 return (FUNC_1(VAR_2) &&
     VAR_1 == 1 &&
     VAR_3->if_rt_sendts > 0 &&
     (int)(VAR_4 - VAR_3->if_rt_sendts) <= VAR_0);
}
