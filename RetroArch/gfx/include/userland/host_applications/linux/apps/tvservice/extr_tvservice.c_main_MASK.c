
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char uint32_t ;
typedef int int32_t ;
typedef int id ;
typedef int VCHI_INSTANCE_T ;
typedef int VCHI_CONNECTION_T ;
struct TYPE_4__ {char* vendor; char* monitor_name; } ;
typedef TYPE_1__ TV_DEVICE_ID_T ;
typedef int SDTV_MODE_T ;
typedef int SDTV_ASPECT_T ;
typedef int HDMI_RES_GROUP_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 char VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int,char**,char*,int ,int *) ;
 int VAR_24 ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 char* VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_11 () ;
 scalar_t__ FUNC_12 (int ,char,char) ;
 scalar_t__ FUNC_13 () ;
 scalar_t__ FUNC_14 (int ,int ,int) ;
 int VAR_27 ;
 scalar_t__ FUNC_15 (int ,int ,int ) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 () ;
 int FUNC_18 (char*,char*,char*,char*,char*) ;
 scalar_t__ FUNC_19 () ;
 scalar_t__ FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (int ,int **,int) ;
 int FUNC_22 () ;
 int FUNC_23 (int *,int ,int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 () ;
 int FUNC_29 (char*,char*) ;

int FUNC_30( int VAR_28, char **VAR_29 )
{
   int32_t VAR_30;
   char VAR_31[VAR_15];
   int VAR_32;
   int VAR_33 = 0;
   int VAR_34 = 0;
   int VAR_35 = 0;
   int VAR_36 = 0;
   int VAR_37 = 0;
   int VAR_38 = 0;
   int VAR_39 = 0;
   int VAR_40 = 0;
   int VAR_41 = 0;
   int VAR_42 = 0;
   int VAR_43 = 0;
   int VAR_44 = 0;
   int VAR_45 = 0;
   int VAR_46 = 0;

   char *VAR_47 = ((void*)0);
   VCHI_INSTANCE_T VAR_48;
   VCHI_CONNECTION_T *VAR_49;
   HDMI_RES_GROUP_T VAR_50 = VAR_13;
   uint32_t VAR_51;
   uint32_t VAR_52 = VAR_6;
   HDMI_RES_GROUP_T VAR_53 = VAR_13;
   SDTV_MODE_T VAR_54 = VAR_20;
   SDTV_ASPECT_T VAR_55 = VAR_19;
   int VAR_56 = 0;


   FUNC_28();


   FUNC_3( VAR_31 );


   while (( VAR_32 = FUNC_9( VAR_28, VAR_29, VAR_31, VAR_24,
                                    ((void*)0) )) != -1 )
   {
      switch ( VAR_32 )
      {
         case 0:
         {

            break;
         }
         case 131:
         {
            VAR_33 = 1;
            break;
         }
         case 139:
         {
            char VAR_57[32], VAR_58[32];


            int VAR_59 = FUNC_18( VAR_25, "%31s %u %31s", VAR_57, &VAR_51, VAR_58 );
            if ( VAR_59 != 2 && VAR_59 != 3 )
            {
               FUNC_0( "Invalid arguments '%s'", VAR_25 );
               goto err_out;
            }


            if ( FUNC_29( "CEA", VAR_57 ) == 0 )
            {
               VAR_50 = VAR_11;
            }
            else if ( FUNC_29( "DMT", VAR_57 ) == 0 )
            {
               VAR_50 = VAR_12;
            }
            else if ( FUNC_29( "CEA_3D", VAR_57 ) == 0 ||
                      FUNC_29( "CEA_3D_SBS", VAR_57 ) == 0)
            {
               VAR_50 = VAR_11;
               VAR_44 = 1;
            }
            else if ( FUNC_29( "CEA_3D_TB", VAR_57 ) == 0 )
            {
               VAR_50 = VAR_11;
               VAR_44 = 2;
            }
            else if ( FUNC_29( "CEA_3D_FP", VAR_57 ) == 0 )
            {
               VAR_50 = VAR_11;
               VAR_44 = 3;
            }
            else if ( FUNC_29( "CEA_3D_FS", VAR_57 ) == 0 )
            {
               VAR_50 = VAR_11;
               VAR_44 = 4;
            }
            else
            {
               FUNC_0( "Invalid group '%s'", VAR_57 );
               goto err_out;
            }
            if (VAR_59==3)
            {
               if (FUNC_29( "HDMI", VAR_58 ) == 0 )
               {
                  VAR_52 = VAR_6;
               }
               else if (FUNC_29( "DVI", VAR_58 ) == 0 )
               {
                  VAR_52 = VAR_5;
               }
               else
               {
                  FUNC_0( "Invalid drive '%s'", VAR_58 );
                  goto err_out;
               }
            }

            if ( VAR_51 > VAR_14 )
            {
               FUNC_0( "Invalid mode '%u'", VAR_51 );
               goto err_out;
            }

            VAR_34 = 1;
            break;
         }
         case 133:
         {
            VAR_35 = 1;
            break;
         }
         case 130:
         {
            char VAR_60[32], VAR_61[32], VAR_62[32];
            int VAR_63 = FUNC_18( VAR_25, "%s %s %s", VAR_60, VAR_61, VAR_62 );
            if ( VAR_63 != 2 && VAR_63 != 3 )
            {
               FUNC_0( "Invalid arguments '%s'", VAR_25 );
               goto err_out;
            }


            if ( FUNC_29( "NTSC", VAR_60 ) == 0 )
            {
               VAR_54 = VAR_20;
            }
            else if ( FUNC_29( "NTSC_J", VAR_60 ) == 0 )
            {
               VAR_54 = VAR_21;
            }
            else if ( FUNC_29( "PAL", VAR_60 ) == 0 )
            {
               VAR_54 = VAR_22;
            }
            else if ( FUNC_29( "PAL_M", VAR_60 ) == 0 )
            {
               VAR_54 = VAR_23;
            }
            else
            {
               FUNC_0( "Invalid mode '%s'", VAR_60 );
               goto err_out;
            }

            if ( FUNC_29( "4:3", VAR_61 ) == 0 )
            {
               VAR_55 = VAR_18;
            }
            else if ( FUNC_29( "14:9", VAR_61 ) == 0 )
            {
               VAR_55 = VAR_16;
            }
            else if ( FUNC_29( "16:9", VAR_61 ) == 0 )
            {
               VAR_55 = VAR_17;
            }

            if (VAR_63 == 3 && FUNC_29( "P", VAR_62 ) == 0 )
            {
              VAR_56 = 1;
            }
            VAR_36 = 1;
            break;
         }
         case 132:
         {
            VAR_37 = 1;
            break;
         }
         case 136:
         {
            if ( FUNC_29( "CEA", VAR_25 ) == 0 )
            {
               VAR_53 = VAR_11;
            }
            else if ( FUNC_29( "DMT", VAR_25 ) == 0 )
            {
               VAR_53 = VAR_12;
            }
            else
            {
               FUNC_0( "Invalid group '%s'", VAR_25 );
               goto err_out;
            }

            VAR_38 = 1;
            break;
         }
         case 135:
         {
            VAR_39 = 1;
            break;
         }
         case 128:
         {
            VAR_40 = 1;
            break;
         }
         case 141:
         {
            VAR_41 = 1;
            break;
         }
         case 140:
         {
            VAR_42 = 1;
            VAR_47 = VAR_25;
            break;
         }
         case 129:
         {
            VAR_43 = FUNC_2(VAR_25)+1;
            break;
         }
         case 137:
         {
            VAR_45 = 1;
            break;
         }
         case 134:
         {
            VAR_46 = 1;
            break;
         }
         default:
         {
            FUNC_0( "Unrecognized option '%d'\n", VAR_32 );
            goto err_usage;
         }
         case '?':
         case 138:
         {
            goto err_usage;
         }
      }
   }

   VAR_28 -= VAR_26;
   VAR_29 += VAR_26;

   if (( VAR_26 == 1 ) || ( VAR_28 > 0 ))
   {
      if ( VAR_28 > 0 )
      {
         FUNC_0( "Unrecognized argument -- '%s'", *VAR_29 );
      }

      goto err_usage;
   }

   if (( VAR_33 + VAR_34 + VAR_36 > 1 ))
   {
      FUNC_0( "Conflicting power on options" );
      goto err_usage;
   }

   if ((( VAR_33 == 1 ) || ( VAR_34 == 1 ) || ( VAR_36 == 1)) && ( VAR_37 == 1 ))
   {
      FUNC_0( "Cannot power on and power off simultaneously" );
      goto err_out;
   }


   VAR_30 = FUNC_25( &VAR_48 );
   if ( VAR_30 != 0 )
   {
      FUNC_0( "Failed to initialize VCHI (ret=%d)", VAR_30 );
      goto err_out;
   }

   VAR_30 = FUNC_23( ((void*)0), 0, VAR_48 );
   if ( VAR_30 != 0)
   {
      FUNC_0( "Failed to create VCHI connection (ret=%d)", VAR_30 );
      goto err_out;
   }




   FUNC_21( VAR_48, &VAR_49, 1 );

   if ( VAR_39 == 1 )
   {
      FUNC_1( "Starting to monitor for HDMI events" );

      if ( FUNC_19() != 0 )
      {
         goto err_stop_service;
      }
   }

   if ( VAR_38 == 1 )
   {
      if ( FUNC_7( VAR_53, VAR_45 ) != 0 )
      {
         goto err_stop_service;
      }
   }

   if ( VAR_33 == 1 )
   {
      if(FUNC_15( VAR_9, VAR_2, 0) != 0)
      {
         goto err_stop_service;
      }
      if ( FUNC_13() != 0 )
      {
         goto err_stop_service;
      }
   }
   else if ( VAR_34 == 1 )
   {

      if(VAR_44 == 0 && FUNC_15( VAR_9, VAR_2, 0) != 0)
      {
         goto err_stop_service;
      }
      else if(VAR_44 == 1 && FUNC_15( VAR_9, VAR_3, 0) != 0)
      {
         goto err_stop_service;
      }
      else if(VAR_44 == 2 && FUNC_15( VAR_9, VAR_4, 0) != 0)
      {
         goto err_stop_service;
      }
      else if(VAR_44 == 3 && FUNC_15( VAR_9, VAR_0, 0) != 0)
      {
         goto err_stop_service;
      }
      else if(VAR_44 == 4 && FUNC_15( VAR_9, VAR_1, 0) != 0)
      {
         goto err_stop_service;
      }
      if (FUNC_15( VAR_10, VAR_35 ? VAR_7 : VAR_8, 0) != 0)
      {
         goto err_stop_service;
      }
      if ( FUNC_12( VAR_50,
                              VAR_51, VAR_52 ) != 0 )
      {
         goto err_stop_service;
      }
   }
   else if ( VAR_36 == 1 )
   {
      if ( FUNC_14( VAR_54,
                              VAR_55, VAR_56 ) != 0 )
      {
         goto err_stop_service;
      }
   }
   else if (VAR_37 == 1 )
   {
      if ( FUNC_11() != 0 )
      {
         goto err_stop_service;
      }
   }

   if ( VAR_40 == 1 )
   {
      if ( FUNC_8() != 0 )
      {
         goto err_stop_service;
      }
   }

   if ( VAR_41 == 1 )
   {
      if ( FUNC_6() != 0 )
      {
         goto err_stop_service;
      }
   }

   if ( VAR_42 == 1 )
   {
      if ( FUNC_4(VAR_47) != 0 )
      {
         goto err_stop_service;
      }
   }

   if ( VAR_43 )
   {
      if ( FUNC_16(VAR_43-1) != 0 )
      {
         goto err_stop_service;
      }
   }

   if ( VAR_46 == 1 )
   {
      TV_DEVICE_ID_T VAR_64;
      FUNC_10(&VAR_64, 0, sizeof(VAR_64));
      if(FUNC_20(&VAR_64) == 0) {
         if(VAR_64.vendor[0] == '\0' || VAR_64.monitor_name[0] == '\0') {
            FUNC_0( "No device present" );
         } else {
            FUNC_1( "device_name=%s-%s", VAR_64.vendor, VAR_64.monitor_name);
         }
      } else {
         FUNC_0( "Failed to obtain device name" );
      }
   }

   if ( VAR_39 == 1 )
   {

      FUNC_27( &VAR_27 );

      FUNC_26( &VAR_27 );
   }

err_stop_service:



   FUNC_22();


   FUNC_24( VAR_48 );

   FUNC_5( 0 );

err_usage:
   FUNC_17();

err_out:
   FUNC_5( 1 );
}
