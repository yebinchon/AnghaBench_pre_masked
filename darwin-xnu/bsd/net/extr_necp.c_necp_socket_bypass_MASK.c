
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct inpcb {int dummy; } ;


 scalar_t__ FUNC_0 (struct inpcb*,int *) ;
 scalar_t__ FUNC_1 (struct sockaddr*,struct sockaddr*,struct inpcb*,int *) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool
FUNC_2(struct sockaddr *VAR_1, struct sockaddr *VAR_2, struct inpcb *VAR_3)
{

 if (VAR_0 > 0 && FUNC_1(VAR_1, VAR_2, VAR_3, ((void*)0))) {
  return (1);
 } else if (FUNC_0(VAR_3, ((void*)0))) {
  return (1);
 }

 return (0);
}
