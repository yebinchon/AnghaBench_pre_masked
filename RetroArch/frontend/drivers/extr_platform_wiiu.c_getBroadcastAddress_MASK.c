
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ACResult ;
typedef int ACIpAddress ;


 scalar_t__ FUNC_0 (int*) ;
 scalar_t__ FUNC_1 (int*) ;

int FUNC_2(ACIpAddress *VAR_0)
{
   ACIpAddress VAR_1, VAR_2;
   ACResult VAR_3;

   if(VAR_0 == ((void*)0))
      return -1;

   VAR_3 = FUNC_0(&VAR_1);
   if(VAR_3 < 0)
      return -1;
   VAR_3 = FUNC_1(&VAR_2);
   if(VAR_3 < 0)
      return -1;

   *VAR_0 = VAR_1 | (~VAR_2);
   return 0;
}
