
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int sa_family; int sa_len; } ;
typedef int boolean_t ;




 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static boolean_t
FUNC_0(struct sockaddr *VAR_2)
{
 switch(VAR_2->sa_family)
 {
  case 129:
   if (VAR_2->sa_len != sizeof(struct sockaddr_in)) {
    return VAR_0;
   }
   break;







  default:
   return VAR_0;
 }
 return VAR_1;
}
