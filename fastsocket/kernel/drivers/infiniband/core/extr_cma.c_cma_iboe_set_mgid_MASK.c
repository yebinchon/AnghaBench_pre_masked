
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union ib_gid {int* raw; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_2__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sockaddr*) ;
 int FUNC_1 (union ib_gid*,int *,int) ;
 int FUNC_2 (union ib_gid*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct sockaddr *VAR_1, union ib_gid *VAR_2)
{
 struct sockaddr_in *VAR_3 = (struct sockaddr_in *)VAR_1;
 struct sockaddr_in6 *VAR_4 = (struct sockaddr_in6 *)VAR_1;

 if (FUNC_0(VAR_1)) {
  FUNC_2(VAR_2, 0, sizeof *VAR_2);
 } else if (VAR_1->sa_family == VAR_0) {
  FUNC_1(VAR_2, &VAR_4->sin6_addr, sizeof *VAR_2);
 } else {
  VAR_2->raw[0] = 0xff;
  VAR_2->raw[1] = 0x0e;
  VAR_2->raw[2] = 0;
  VAR_2->raw[3] = 0;
  VAR_2->raw[4] = 0;
  VAR_2->raw[5] = 0;
  VAR_2->raw[6] = 0;
  VAR_2->raw[7] = 0;
  VAR_2->raw[8] = 0;
  VAR_2->raw[9] = 0;
  VAR_2->raw[10] = 0xff;
  VAR_2->raw[11] = 0xff;
  *(__be32 *)(&VAR_2->raw[12]) = VAR_3->sin_addr.s_addr;
 }
}
