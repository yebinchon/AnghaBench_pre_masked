
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct in_addr {int dummy; } ;
struct sockaddr_in {int sin_len; struct in_addr sin_addr; int sin_port; int sin_family; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(
 const struct in_addr *VAR_1,
 u_int16_t VAR_2,
 struct sockaddr_in *VAR_3,
 u_int32_t VAR_4)
{
 if (VAR_4 < sizeof(struct sockaddr_in))
  return;

 VAR_3->sin_family = VAR_0;
 VAR_3->sin_len = sizeof(*VAR_3);
 VAR_3->sin_port = VAR_2;
 VAR_3->sin_addr = *VAR_1;
}
