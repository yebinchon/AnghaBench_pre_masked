
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; scalar_t__ sa_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *,int) ;

int
FUNC_1(struct sockaddr *VAR_2, struct sockaddr *VAR_3)
{
 if (!VAR_2)
  return (-1);
 if (!VAR_3)
  return (1);
 if (VAR_2->sa_family != VAR_3->sa_family)
  return ((VAR_2->sa_family < VAR_3->sa_family) ? -1 : 1);
 if (VAR_2->sa_len != VAR_3->sa_len)
  return ((VAR_2->sa_len < VAR_3->sa_len) ? -1 : 1);
 if (VAR_2->sa_family == VAR_0)
  return (FUNC_0(&((struct sockaddr_in*)VAR_2)->sin_addr,
        &((struct sockaddr_in*)VAR_3)->sin_addr, sizeof(((struct sockaddr_in*)VAR_2)->sin_addr)));
 if (VAR_2->sa_family == VAR_1)
  return (FUNC_0(&((struct sockaddr_in6*)VAR_2)->sin6_addr,
        &((struct sockaddr_in6*)VAR_3)->sin6_addr, sizeof(((struct sockaddr_in6*)VAR_2)->sin6_addr)));
 return (-1);
}
