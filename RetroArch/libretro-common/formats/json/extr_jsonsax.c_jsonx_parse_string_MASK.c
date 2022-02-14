
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* json; int env; } ;
typedef TYPE_1__ state_t ;


 int FUNC_0 (char const*,char const*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static void FUNC_3(state_t* VAR_1)
{
  const char* VAR_2 = ++VAR_1->json;

  for ( ;; )
  {
    const char* VAR_3 = FUNC_2( VAR_1->json, '"' );

    if ( !VAR_3 )
      FUNC_1( VAR_1->env, VAR_0 );

    VAR_1->json = VAR_3 + 1;

    if ( VAR_3[ -1 ] != '\\' )
      break;
  }

  FUNC_0( VAR_2, VAR_2, VAR_1->json - VAR_2 - 1 );
}
