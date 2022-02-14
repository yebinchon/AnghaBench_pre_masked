
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ HDMI_RES_GROUP_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,int ) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_3( HDMI_RES_GROUP_T VAR_2,
                              uint32_t VAR_3, uint32_t VAR_4 )
{
   int VAR_5;

   FUNC_1( "Powering on HDMI with explicit settings (%s mode %u)",
            VAR_2 == VAR_0 ? "CEA" : VAR_2 == VAR_1 ? "DMT" : "CUSTOM", VAR_3 );

   VAR_5 = FUNC_2( VAR_4, VAR_2, VAR_3 );
   if ( VAR_5 != 0 )
   {
      FUNC_0( "Failed to power on HDMI with explicit settings (%s mode %u)",
               VAR_2 == VAR_0 ? "CEA" : VAR_2 == VAR_1 ? "DMT" : "CUSTOM", VAR_3 );
   }

   return VAR_5;
}
