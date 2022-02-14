
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_in6 {int dummy; } ;
struct TYPE_7__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; int sin_len; int sin_family; } ;
struct sockaddr {int sa_family; } ;
struct TYPE_8__ {int s_addr; } ;
struct TYPE_9__ {TYPE_3__ sin_addr; int sin_len; int sin_family; } ;
struct TYPE_6__ {struct in_ifaddr* tqe_next; } ;
struct in_ifaddr {int ia_ifa; TYPE_4__ ia_addr; TYPE_1__ ia_link; } ;
struct TYPE_10__ {struct in_ifaddr* tqh_first; } ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_2 (struct sockaddr_in6*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

int
FUNC_6(
    struct sockaddr *VAR_2)
{






 if (VAR_2 == ((void*)0))
  FUNC_5("key_ismyaddr: NULL pointer is passed.\n");

 switch (VAR_2->sa_family) {
 }

 return 0;
}
