
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {int sin_len; TYPE_1__ sin_addr; int sin_port; int sin_family; } ;
union sockaddr_in_4_6 {struct sockaddr_in sin; } ;
typedef int u_int16_t ;
struct in_addr {int s_addr; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(union sockaddr_in_4_6 *VAR_1,
 struct in_addr VAR_2, u_int16_t VAR_3)
{
 struct sockaddr_in *VAR_4 = &VAR_1->sin;

 VAR_4->sin_family = VAR_0;
 VAR_4->sin_len = sizeof(*VAR_4);
 VAR_4->sin_port = VAR_3;
 VAR_4->sin_addr.s_addr = VAR_2.s_addr;
}
