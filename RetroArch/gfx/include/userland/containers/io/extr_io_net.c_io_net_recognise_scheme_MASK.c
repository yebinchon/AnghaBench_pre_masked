
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* scheme; int is_udp; } ;


 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int ) ;

__attribute__((used)) static bool FUNC_3(const char *VAR_1, bool *VAR_2)
{
   size_t VAR_3;
   const char *VAR_4;

   if (!VAR_1)
      return 0;

   for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++)
   {
      VAR_4 = VAR_0[VAR_3].scheme;
      if (FUNC_2(VAR_4, VAR_1, FUNC_1(VAR_4)) == 0)
      {
         *VAR_2 = VAR_0[VAR_3].is_udp;
         return 1;
      }
   }

   return 0;
}
