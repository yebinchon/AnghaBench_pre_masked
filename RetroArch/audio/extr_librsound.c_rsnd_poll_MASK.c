
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct pollfd*,int,int) ;

__attribute__((used)) static int FUNC_2(struct pollfd *VAR_2, int VAR_3, int VAR_4)
{
   for(;;)
   {
      if ( FUNC_1(VAR_2, VAR_3, VAR_4) < 0 )
      {
         if ( VAR_1 == VAR_0 )
            continue;

         FUNC_0("poll");
         return -1;
      }
      return 0;
   }
}
