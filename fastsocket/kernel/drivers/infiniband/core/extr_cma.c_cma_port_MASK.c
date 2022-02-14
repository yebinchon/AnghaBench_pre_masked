
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr_ib {int sib_sid_mask; int sib_sid; } ;
struct sockaddr {int sa_family; } ;
typedef int __be16 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static __be16 FUNC_2(struct sockaddr *VAR_0)
{
 struct sockaddr_ib *VAR_1;

 switch (VAR_0->sa_family) {
 case 129:
  return ((struct sockaddr_in *) VAR_0)->sin_port;
 case 128:
  return ((struct sockaddr_in6 *) VAR_0)->sin6_port;
 case 130:
  VAR_1 = (struct sockaddr_ib *) VAR_0;
  return FUNC_1((u16) (FUNC_0(VAR_1->sib_sid) &
        FUNC_0(VAR_1->sib_sid_mask)));
 default:
  return 0;
 }
}
