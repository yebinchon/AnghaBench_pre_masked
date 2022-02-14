
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__* s6_addr16; } ;
struct sockaddr_in6 {scalar_t__ sin6_scope_id; TYPE_1__ sin6_addr; } ;
struct sockaddr {int sa_len; scalar_t__ sa_family; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct sockaddr const*,struct sockaddr*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;

__attribute__((used)) static void
FUNC_3(
 const struct sockaddr *VAR_1,
 struct sockaddr *VAR_2,
 int VAR_3)
{
 if (VAR_1->sa_len > VAR_3) return;

 FUNC_1(VAR_1, VAR_2, VAR_1->sa_len);
 if (VAR_1->sa_family == VAR_0 &&
  VAR_1->sa_len >= sizeof(struct sockaddr_in6))
 {
  struct sockaddr_in6 *VAR_4 = (struct sockaddr_in6*)(void *)VAR_2;
  if (FUNC_0(&VAR_4->sin6_addr))
  {
   if (VAR_4->sin6_scope_id == 0)
    VAR_4->sin6_scope_id = FUNC_2(VAR_4->sin6_addr.s6_addr16[1]);
   VAR_4->sin6_addr.s6_addr16[1] = 0;
  }
 }
}
