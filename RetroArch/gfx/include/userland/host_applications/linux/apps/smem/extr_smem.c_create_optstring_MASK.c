
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {scalar_t__ val; scalar_t__ has_arg; int * flag; int * name; } ;


 scalar_t__ VAR_0 ;
 struct option* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0( char *VAR_4 )
{
   char *VAR_5 = VAR_4;
   struct option *VAR_6;


   for ( VAR_6 = VAR_1; VAR_6->name != ((void*)0); VAR_6++ )
   {
      if (( VAR_6->flag == ((void*)0) ) && ( VAR_6->val < VAR_0 ))
      {
         *VAR_5++ = (char)VAR_6->val;

         if ( VAR_6->has_arg != VAR_2 )
         {
            *VAR_5++ = ':';
         }


         if ( VAR_6->has_arg == VAR_3 )
         {
            *VAR_5++ = ':';
         }
      }
   }
   *VAR_5++ = '\0';
}
