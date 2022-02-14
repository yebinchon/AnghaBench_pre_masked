
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int netplay_t ;
typedef int msg ;
typedef enum rarch_netplay_connection_mode { ____Placeholder_rarch_netplay_connection_mode } rarch_netplay_connection_mode ;
typedef int device_str ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;



 int VAR_9 ;
 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int,int,int,int *,int ,int ) ;
 size_t FUNC_3 (char*,int,char*,...) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static void FUNC_5(netplay_t *VAR_10,
      const char *VAR_11,
      enum rarch_netplay_connection_mode VAR_12, uint32_t VAR_13)
{
   char VAR_14[512];
   VAR_14[0] = VAR_14[sizeof(VAR_14) - 1] = '\0';

   switch (VAR_12)
   {
      case 128:
         if (VAR_11)
            FUNC_3(VAR_14, sizeof(VAR_14) - 1,
                  FUNC_1(VAR_3), VAR_9,
                  VAR_11);
         else
            FUNC_4(VAR_14, FUNC_1(VAR_8), sizeof(VAR_14));
         break;

      case 130:
      case 129:
      {
         uint32_t VAR_15;
         uint32_t VAR_16 = (uint32_t) -1;
         char VAR_17[512];
         size_t VAR_18;

         for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++)
         {
            if (!(VAR_13 & (1<<VAR_15)))
               continue;
            if (VAR_16 == (uint32_t) -1)
               VAR_16 = VAR_15;
            else
            {
               VAR_16 = (uint32_t) -1;
               break;
            }
         }

         if (VAR_16 != (uint32_t) -1)
         {

            if (VAR_11)
               FUNC_3(VAR_14, sizeof(VAR_14) - 1,
                     FUNC_1(VAR_4),
                     VAR_9, VAR_11, VAR_16 + 1);
            else
               FUNC_3(VAR_14, sizeof(VAR_14) - 1,
                     FUNC_1(VAR_6),
                     VAR_16 + 1);
         }
         else
         {

            VAR_17[0] = 0;
            VAR_18 = 0;
            for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++)
            {
               if (!(VAR_13 & (1<<VAR_15)))
                  continue;
               if (VAR_18)
                  VAR_18 += FUNC_3(VAR_17 + VAR_18,
                        sizeof(VAR_17) - 1 - VAR_18, ", ");
               VAR_18 += FUNC_3(VAR_17 + VAR_18,
                     sizeof(VAR_17) - 1 - VAR_18, "%u",
                     (unsigned) (VAR_15+1));
            }


            if (VAR_11)
               FUNC_3(VAR_14, sizeof(VAR_14) - 1,
                     FUNC_1(
                           VAR_5),
                     VAR_9, VAR_11, sizeof(VAR_17),
                     VAR_17);
            else
               FUNC_3(VAR_14, sizeof(VAR_14) - 1,
                     FUNC_1(
                           VAR_7),
                     sizeof(VAR_17), VAR_17);
         }

         break;
      }

      default:
         break;
   }

   if (VAR_14[0])
   {
      FUNC_0("[netplay] %s\n", VAR_14);
      FUNC_2(VAR_14, 1, 180, 0, ((void*)0), VAR_2, VAR_1);
   }
}
