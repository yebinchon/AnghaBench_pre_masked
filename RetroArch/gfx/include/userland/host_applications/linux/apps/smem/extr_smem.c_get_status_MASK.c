
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VCSM_STATUS_T ;




 int const VAR_0 ;


 int FUNC_0 (int const,int) ;

__attribute__((used)) static int FUNC_1( VCSM_STATUS_T VAR_1, int VAR_2 )
{
   switch ( VAR_1 )
   {
      case 128:
         FUNC_0( 128, -1 );
      break;

      case 131:
         if ( VAR_2 != -1 )
         {
            FUNC_0( VAR_0, VAR_2 );
         }
         else
         {
            FUNC_0( 131, -1 );
         }
      break;

      case 130:
         FUNC_0( 130, VAR_2 );
      break;

      case 129:
         FUNC_0( 128, -1 );
         FUNC_0( 131, -1 );
      break;

      default:
      break;
   }

   return 0;
}
