
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct sockaddr {int sa_family; scalar_t__ sa_len; } ;
struct TYPE_4__ {int sin_addr; int sin_port; } ;
struct TYPE_3__ {int sin6_addr; int sin6_scope_id; int sin6_port; } ;




 int VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 TYPE_2__* FUNC_1 (struct sockaddr*) ;
 TYPE_1__* FUNC_2 (struct sockaddr*) ;

__attribute__((used)) static bool
FUNC_3(struct sockaddr *VAR_1, struct sockaddr *VAR_2, u_int8_t VAR_3)
{
 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0)) {
  return (VAR_0);
 }

 if (VAR_1->sa_family != VAR_2->sa_family || VAR_1->sa_len != VAR_2->sa_len) {
  return (VAR_0);
 }

 switch (VAR_1->sa_family) {
  case 129: {
   if (FUNC_1(VAR_2)->sin_port != 0 &&
    FUNC_1(VAR_1)->sin_port != FUNC_1(VAR_2)->sin_port) {
    return (VAR_0);
   }
   return (FUNC_0((u_int8_t *)&FUNC_1(VAR_1)->sin_addr, (u_int8_t *)&FUNC_1(VAR_2)->sin_addr, VAR_3));
  }
  case 128: {
   if (FUNC_2(VAR_2)->sin6_port != 0 &&
    FUNC_2(VAR_1)->sin6_port != FUNC_2(VAR_2)->sin6_port) {
    return (VAR_0);
   }
   if (FUNC_2(VAR_1)->sin6_scope_id &&
    FUNC_2(VAR_2)->sin6_scope_id &&
    FUNC_2(VAR_1)->sin6_scope_id != FUNC_2(VAR_2)->sin6_scope_id) {
    return (VAR_0);
   }
   return (FUNC_0((u_int8_t *)&FUNC_2(VAR_1)->sin6_addr, (u_int8_t *)&FUNC_2(VAR_2)->sin6_addr, VAR_3));
  }
  default: {
   return (VAR_0);
  }
 }

 return (VAR_0);
}
