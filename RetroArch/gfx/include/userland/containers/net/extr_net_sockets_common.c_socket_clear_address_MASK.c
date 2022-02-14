
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int sa_family; } ;




 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct sockaddr *VAR_0)
{
   switch (VAR_0->sa_family)
   {
   case 129:
      {
         struct sockaddr_in *VAR_1 = (struct sockaddr_in *)VAR_0;

         FUNC_0(&VAR_1->sin_addr, 0, sizeof(VAR_1->sin_addr));
      }
      break;
   case 128:
      {
         struct sockaddr_in6 *VAR_2 = (struct sockaddr_in6 *)VAR_0;

         FUNC_0(&VAR_2->sin6_addr, 0, sizeof(VAR_2->sin6_addr));
      }
      break;
   default:

      FUNC_1(0);
   }
}
