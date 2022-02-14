
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int carttype; } ;
typedef int JapModem ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char const*,char const*) ;
 int VAR_3 ;
 int FUNC_1 (int ,void*) ;
 int * FUNC_2 (int) ;

int FUNC_3(const char *VAR_4, const char *VAR_5)
{
   if ((VAR_2 = FUNC_2(sizeof(JapModem))) == ((void*)0))
   {
      VAR_1->carttype = VAR_0;
      FUNC_1(VAR_3, (void *)"Japanese Modem");
      return 0;
   }

   return FUNC_0(VAR_4, VAR_5);
}
