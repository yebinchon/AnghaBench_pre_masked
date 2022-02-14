
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_1; int member_2; char const* member_3; int column; char* label; int line_no; int * member_0; } ;
typedef TYPE_1__ dat_converter_token_t ;
typedef int dat_converter_list_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int * FUNC_1 (int ) ;

__attribute__((used)) static dat_converter_list_t* FUNC_2(
      char* VAR_1, const char* VAR_2)
{
   dat_converter_list_t* VAR_3 =
      FUNC_1(VAR_0);
   dat_converter_token_t VAR_4 = {((void*)0), 1, 1, VAR_2};
   bool VAR_5 = 0;

   while (*VAR_1)
   {
      if ((!VAR_5 && (*VAR_1 == '\t' || *VAR_1 == ' ')) || (*VAR_1 == '\r'))
      {
         *VAR_1 = '\0';
         VAR_1++;
         VAR_4.column++;
         VAR_4.label = ((void*)0);
         VAR_5 = 0;
         continue;
      }

      if (*VAR_1 == '\n')
      {
         *VAR_1 = '\0';
         VAR_1++;
         VAR_4.column = 1;
         VAR_4.line_no++;
         VAR_4.label = ((void*)0);
         VAR_5 = 0;
         continue;
      }

      if (*VAR_1 == '\"')
      {
         *VAR_1 = '\0';
         VAR_1++;
         VAR_4.column++;
         VAR_5 = !VAR_5;
         VAR_4.label = ((void*)0);

         if (VAR_5)
         {
            VAR_4.label = VAR_1;
            FUNC_0(VAR_3, &VAR_4);
         }

         continue;
      }

      if (!VAR_4.label)
      {
         VAR_4.label = VAR_1;
         FUNC_0(VAR_3, &VAR_4);
      }

      VAR_1++;
      VAR_4.column++;
   }

   VAR_4.label = ((void*)0);
   FUNC_0(VAR_3, &VAR_4);

   return VAR_3;
}
