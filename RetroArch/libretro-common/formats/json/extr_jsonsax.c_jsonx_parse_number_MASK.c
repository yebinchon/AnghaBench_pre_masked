
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* json; int env; } ;
typedef TYPE_1__ state_t ;


 int FUNC_0 (char const*,char const*,int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(state_t* VAR_1)
{
   const char* VAR_2 = VAR_1->json;

   if ( *VAR_1->json == '-' )
      VAR_1->json++;

   if ( !FUNC_1( (unsigned char)*VAR_1->json ) )
      FUNC_2( VAR_1->env, VAR_0 );

   FUNC_3( VAR_1 );

   if ( *VAR_1->json == '.' )
   {
      VAR_1->json++;

      if ( !FUNC_1( (unsigned char)*VAR_1->json ) )
         FUNC_2( VAR_1->env, VAR_0 );

      FUNC_3( VAR_1 );
   }

   if ( *VAR_1->json == 'e' || *VAR_1->json == 'E' )
   {
      VAR_1->json++;

      if ( *VAR_1->json == '-' || *VAR_1->json == '+' )
         VAR_1->json++;

      if ( !FUNC_1( (unsigned char)*VAR_1->json ) )
         FUNC_2( VAR_1->env, VAR_0 );

      FUNC_3( VAR_1 );
   }

   FUNC_0( VAR_2, VAR_2, VAR_1->json - VAR_2 );
}
