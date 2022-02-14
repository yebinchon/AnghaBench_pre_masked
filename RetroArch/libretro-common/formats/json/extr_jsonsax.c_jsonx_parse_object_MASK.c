
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* json; int env; } ;
typedef TYPE_1__ state_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_6 ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static void FUNC_6( state_t* VAR_7 )
{
   VAR_7->json++;
   FUNC_4( VAR_7 );
   FUNC_0( VAR_6 );

   while ( *VAR_7->json != '}' )
   {
      const char *VAR_8 = ((void*)0);
      if ( *VAR_7->json != '"' )
         FUNC_3( VAR_7->env, VAR_0 );

      VAR_8 = ++VAR_7->json;

      for ( ;; )
      {
         const char* VAR_9 = FUNC_5( VAR_7->json, '"' );

         if ( !VAR_9 )
            FUNC_3( VAR_7->env, VAR_2 );

         VAR_7->json = VAR_9 + 1;

         if ( VAR_9[ -1 ] != '\\' )
            break;
      }

      FUNC_1( VAR_5, VAR_8, VAR_7->json - VAR_8 - 1 );
      FUNC_4( VAR_7 );

      if ( *VAR_7->json != ':' )
         FUNC_3( VAR_7->env, VAR_1 );

      VAR_7->json++;
      FUNC_4( VAR_7 );
      FUNC_2( VAR_7 );
      FUNC_4( VAR_7 );

      if ( *VAR_7->json != ',' )
         break;

      VAR_7->json++;
      FUNC_4( VAR_7 );
   }

   if ( *VAR_7->json != '}' )
      FUNC_3( VAR_7->env, VAR_3 );

   VAR_7->json++;
   FUNC_0( VAR_4 );
}
