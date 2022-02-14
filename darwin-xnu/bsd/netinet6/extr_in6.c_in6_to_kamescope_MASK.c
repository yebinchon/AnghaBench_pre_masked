
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_scope_id; int sin6_addr; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ifnet*,int *) ;
 int FUNC_2 (int *,struct sockaddr_in6*,int *,int *,int *) ;
 int FUNC_3 (struct sockaddr_in6*,int *,struct ifnet*) ;

__attribute__((used)) static int
FUNC_4(struct sockaddr_in6 *VAR_1, struct ifnet *VAR_2)
{
 struct sockaddr_in6 VAR_3;
 int VAR_4, VAR_5;

 FUNC_0(VAR_1 != ((void*)0));
 VAR_3 = *VAR_1;

 VAR_4 = FUNC_3(&VAR_3, &VAR_1->sin6_addr, VAR_2);
 if (VAR_4 != 0)
  return (VAR_4);

 VAR_5 = FUNC_1(VAR_2, &VAR_3.sin6_addr);
 if (VAR_3.sin6_scope_id == 0)
  VAR_3.sin6_scope_id = VAR_5;
 else if (VAR_3.sin6_scope_id != VAR_5)
  return (VAR_0);

 VAR_4 = FUNC_2(&VAR_3.sin6_addr, &VAR_3, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_4 != 0)
  return (VAR_4);

 VAR_3.sin6_scope_id = 0;
 *VAR_1 = VAR_3;
 return (0);
}
