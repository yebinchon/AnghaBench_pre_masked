
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_nl {int nl_family; } ;
struct sockaddr {int dummy; } ;
typedef int l_addr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sockaddr_nl*,int ,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(void)
{
   struct sockaddr_nl VAR_4;
   int VAR_5 = FUNC_3(VAR_2, VAR_3, VAR_1);

   if(VAR_5 < 0)
      return -1;

   FUNC_2(&VAR_4, 0, sizeof(VAR_4));
   VAR_4.nl_family = VAR_0;
   if(FUNC_0(VAR_5, (struct sockaddr *)&VAR_4, sizeof(VAR_4)) < 0)
   {
      FUNC_1(VAR_5);
      return -1;
   }

   return VAR_5;
}
