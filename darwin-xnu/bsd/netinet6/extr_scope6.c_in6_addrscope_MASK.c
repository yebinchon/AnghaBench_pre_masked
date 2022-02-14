
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int* s6_addr8; } ;


 int VAR_0 ;



 scalar_t__ FUNC_0 (int *,struct in6_addr*,int) ;
 int VAR_1 ;

int
FUNC_1(struct in6_addr *VAR_2)
{
 int VAR_3;

 if (VAR_2->s6_addr8[0] == 0xfe) {
  VAR_3 = VAR_2->s6_addr8[1] & 0xc0;

  switch (VAR_3) {
  case 0x80:
   return (129);
  case 0xc0:
   return (128);
  default:
   return (VAR_0);
  }
 }

 if (VAR_2->s6_addr8[0] == 0xff) {
  VAR_3 = VAR_2->s6_addr8[1] & 0x0f;





  switch (VAR_3) {
  case 130:
   return (130);
  case 129:
   return (129);
  case 128:
   return (128);
  default:
   return (VAR_0);
  }
 }





 if (FUNC_0(&VAR_1, VAR_2, sizeof (*VAR_2) - 1) == 0) {
  if (VAR_2->s6_addr8[15] == 1)
   return (129);
  if (VAR_2->s6_addr8[15] == 0)
   return (VAR_0);
 }

 return (VAR_0);
}
