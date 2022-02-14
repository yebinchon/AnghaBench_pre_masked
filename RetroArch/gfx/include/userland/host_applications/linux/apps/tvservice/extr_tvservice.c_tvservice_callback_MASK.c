
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,...) ;
__attribute__((used)) static void FUNC_1( void *VAR_0,
                                uint32_t VAR_1,
                                uint32_t VAR_2,
                                uint32_t VAR_3 )
{
   (void)VAR_0;
   (void)VAR_2;
   (void)VAR_3;

   switch ( VAR_1 )
   {
      case 128:
      {
         FUNC_0( "HDMI cable is unplugged" );
         break;
      }
      case 135:
      {
         FUNC_0( "HDMI is attached" );
         break;
      }
      case 134:
      {
         FUNC_0( "HDMI in DVI mode" );
         break;
      }
      case 129:
      {
         FUNC_0( "HDMI in HDMI mode" );
         break;
      }
      case 130:
      {
         FUNC_0( "HDCP authentication is broken" );
         break;
      }
      case 133:
      {
         FUNC_0( "HDCP is active" );
         break;
      }
      case 132:
      {
         FUNC_0( "HDCP key download" );
         break;
      }
      case 131:
      {
         FUNC_0( "HDCP revocation list download" );
         break;
      }
      default:
      {

         FUNC_0( "Callback with reason %d", VAR_1 );
         break;
      }
   }
}
