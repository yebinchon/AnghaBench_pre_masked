
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int32_t ;
struct TYPE_4__ {int * s6_addr16; } ;
struct sockaddr_in6 {size_t sin6_scope_id; TYPE_1__ sin6_addr; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (size_t) ;
 size_t VAR_1 ;
 struct ifnet** VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 size_t FUNC_5 (TYPE_1__*) ;

int
FUNC_6(struct sockaddr_in6 *VAR_3, int VAR_4)
{
 struct ifnet *VAR_5;
 u_int32_t VAR_6;

 if ((VAR_6 = VAR_3->sin6_scope_id) == 0 && VAR_4)
  VAR_6 = FUNC_5(&VAR_3->sin6_addr);

 if (VAR_6 != 0 &&
     (FUNC_1(&VAR_3->sin6_addr) ||
     FUNC_0(&VAR_3->sin6_addr))) {






  if (VAR_1 < VAR_6)
   return (VAR_0);
  FUNC_4();
  VAR_5 = VAR_2[VAR_6];
  if (VAR_5 == ((void*)0)) {
   FUNC_3();
   return (VAR_0);
  }
  FUNC_3();

  VAR_3->sin6_addr.s6_addr16[1] = FUNC_2(VAR_6 & 0xffff);

  VAR_3->sin6_scope_id = 0;
 }

 return (0);
}
