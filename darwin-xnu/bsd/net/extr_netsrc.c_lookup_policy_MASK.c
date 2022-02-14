
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int s_addr; } ;
struct TYPE_6__ {TYPE_1__ sin_addr; } ;
struct TYPE_8__ {int * s6_addr32; } ;
struct sockaddr_in6 {scalar_t__ sin6_family; int sin6_len; TYPE_4__ sin6_addr; } ;
struct TYPE_7__ {scalar_t__ sa_family; } ;
union sockaddr_in_4_6 {TYPE_2__ sin; struct sockaddr_in6 sin6; TYPE_3__ sa; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct in6_addrpolicy {int dummy; } ;
typedef int mapped ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 struct in6_addrpolicy* FUNC_0 (struct sockaddr_in6*) ;

__attribute__((used)) static struct in6_addrpolicy *
FUNC_1(struct sockaddr* VAR_3)
{


 union sockaddr_in_4_6 *VAR_4 = (union sockaddr_in_4_6 *)(void*)VAR_3;
 if (VAR_4->sa.sa_family == VAR_1) {
  return FUNC_0(&VAR_4->sin6);
 } else if (VAR_3->sa_family == VAR_0) {
  struct sockaddr_in6 VAR_5 = {
   .sin6_family = VAR_1,
   .sin6_len = sizeof(VAR_5),
   .sin6_addr = VAR_2,
  };
  VAR_5.sin6_addr.s6_addr32[3] = VAR_4->sin.sin_addr.s_addr;
  return FUNC_0(&VAR_5);
 }
 return ((void*)0);
}
