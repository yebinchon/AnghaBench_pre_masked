
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int aspect; } ;
typedef TYPE_1__ SDTV_OPTIONS_T ;
typedef int SDTV_MODE_T ;
typedef int SDTV_ASPECT_T ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4( SDTV_MODE_T VAR_1,
                              SDTV_ASPECT_T VAR_2, int VAR_3 )
{
   int VAR_4;
   SDTV_OPTIONS_T VAR_5;
   FUNC_2(&VAR_5, 0, sizeof VAR_5);
   VAR_5.aspect = VAR_2;
   if (VAR_3)
      VAR_1 |= VAR_0;
   FUNC_1( "Powering on SDTV with explicit settings (mode:%d aspect:%d)",
            VAR_1, VAR_2 );

   VAR_4 = FUNC_3(VAR_1, &VAR_5);
   if ( VAR_4 != 0 )
   {
      FUNC_0( "Failed to power on SDTV with explicit settings (mode:%d aspect:%d)",
               VAR_1, VAR_2 );
   }

   return VAR_4;
}
