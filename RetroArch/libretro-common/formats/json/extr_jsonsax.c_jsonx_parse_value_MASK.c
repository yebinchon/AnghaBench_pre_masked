
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int* json; int env; } ;
typedef TYPE_1__ state_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(state_t* VAR_1)
{
   FUNC_7( VAR_1 );

   switch ( *VAR_1->json )
   {
      case '{':
         FUNC_4(VAR_1);
         break;
      case '[':
         FUNC_0( VAR_1 );
         break;
      case '"':
         FUNC_5( VAR_1 );
         break;
      case 't':
      case 'f':
         FUNC_1( VAR_1 );
         break;
      case 'n':
         FUNC_2( VAR_1 );
         break;
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
      case '-':
         FUNC_3( VAR_1 );
         break;

      default:
         FUNC_6( VAR_1->env, VAR_0 );
   }
}
