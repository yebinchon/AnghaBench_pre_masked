
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int sin6_addr; } ;
struct TYPE_7__ {scalar_t__ sa_family; } ;
struct TYPE_5__ {scalar_t__ s_addr; } ;
struct TYPE_6__ {TYPE_1__ sin_addr; } ;
union necp_sockaddr_union {TYPE_4__ sin6; TYPE_3__ sa; TYPE_2__ sin; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static inline bool
FUNC_1(const union necp_sockaddr_union * const VAR_3)
{
 return ((VAR_3->sa.sa_family == VAR_0 && VAR_3->sin.sin_addr.s_addr == VAR_2) ||
   (VAR_3->sa.sa_family == VAR_1 && FUNC_0(&VAR_3->sin6.sin6_addr)));
}
