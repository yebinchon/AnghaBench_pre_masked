
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* eval; } ;
typedef TYPE_1__ scope_t ;
struct TYPE_7__ {char const* value; } ;
typedef TYPE_2__ param_t ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,char*,int ) ;
 int FUNC_1 (char*,char const*) ;
 char* FUNC_2 (char const*,char) ;
 int FUNC_3 (char*,char const*,size_t) ;
 int FUNC_4 (char*,char const*,size_t) ;

const char *FUNC_5(scope_t *VAR_1, const char *VAR_2)
{
   const char* VAR_3;
   bool VAR_4;
   char VAR_5[VAR_0];

   if (!VAR_2)
      return ((void*)0);

   VAR_1->eval[0] = '\0';
   VAR_3 = VAR_2;

   while (VAR_3[0] != '\0')
   {
      const char* VAR_6;
      VAR_6 = VAR_3;

      if ((VAR_4 = (VAR_3[0] == '~')))
         ++VAR_6;

      VAR_3 = FUNC_2(VAR_6, '~');

      if (VAR_3 && VAR_3 != VAR_6)
      {
         size_t VAR_7;
         VAR_7 = VAR_3 - VAR_6;

         if (VAR_4)
         {
            param_t *VAR_8;

            FUNC_4(VAR_5, VAR_6, VAR_7);
            VAR_5[VAR_7] = '\0';

            if ((VAR_8 = FUNC_0(VAR_1, VAR_5, 0)))
               FUNC_1(VAR_1->eval, VAR_8->value);
            else
               FUNC_1(VAR_1->eval, VAR_5);

            ++VAR_3;
         }
         else
         {
            FUNC_3(VAR_1->eval, VAR_6, VAR_7);
         }
      }
      else
      {
         if (VAR_4)
            --VAR_6;
         FUNC_1(VAR_1->eval, VAR_6);
         break;
      }
   }

   return VAR_1->eval;
}
