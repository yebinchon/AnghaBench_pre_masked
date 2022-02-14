
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* s6_addr32; } ;
struct sockaddr_in6 {int sin6_len; TYPE_2__ sin6_addr; int sin6_port; int sin6_family; } ;
struct TYPE_3__ {scalar_t__ s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; int sin_port; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sockaddr_in6*,int) ;

void
FUNC_1(struct sockaddr_in *VAR_2, struct sockaddr_in6 *VAR_3)
{
 FUNC_0(VAR_3, sizeof (*VAR_3));
 VAR_3->sin6_len = sizeof (struct sockaddr_in6);
 VAR_3->sin6_family = VAR_0;
 VAR_3->sin6_port = VAR_2->sin_port;
 VAR_3->sin6_addr.s6_addr32[0] = 0;
 VAR_3->sin6_addr.s6_addr32[1] = 0;
 if (VAR_2->sin_addr.s_addr) {
  VAR_3->sin6_addr.s6_addr32[2] = VAR_1;
  VAR_3->sin6_addr.s6_addr32[3] = VAR_2->sin_addr.s_addr;
 } else {
  VAR_3->sin6_addr.s6_addr32[2] = 0;
  VAR_3->sin6_addr.s6_addr32[3] = 0;
 }
}
