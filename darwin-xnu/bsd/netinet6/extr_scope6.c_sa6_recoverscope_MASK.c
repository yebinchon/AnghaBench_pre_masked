
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_4__ {scalar_t__* s6_addr16; } ;
struct sockaddr_in6 {int sin6_scope_id; TYPE_1__ sin6_addr; } ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int ** VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,char*,int ,int) ;
 int FUNC_6 (scalar_t__) ;

int
FUNC_7(struct sockaddr_in6 *VAR_4, boolean_t VAR_5)
{
 u_int32_t VAR_6;

 if (VAR_4->sin6_scope_id != 0) {
  FUNC_5(VAR_1,
      "sa6_recoverscope: assumption failure (non 0 ID): %s%%%d\n",
      FUNC_4(&VAR_4->sin6_addr), VAR_4->sin6_scope_id);

 }
 if (FUNC_1(&VAR_4->sin6_addr) ||
     FUNC_0(&VAR_4->sin6_addr)) {



  VAR_6 = FUNC_6(VAR_4->sin6_addr.s6_addr16[1]);
  if (VAR_6) {

   if (VAR_2 < VAR_6)
    return (VAR_0);
   if (VAR_5) {
    FUNC_3();
    if (VAR_3[VAR_6] == ((void*)0)) {
     FUNC_2();
     return (VAR_0);
    }
    FUNC_2();
   }
   VAR_4->sin6_addr.s6_addr16[1] = 0;
   VAR_4->sin6_scope_id = VAR_6;
  }
 }

 return (0);
}
