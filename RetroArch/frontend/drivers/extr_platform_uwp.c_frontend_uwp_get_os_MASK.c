
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int buildStr ;
struct TYPE_10__ {int dwOSVersionInfoSize; int dwMajorVersion; int dwMinorVersion; char* szCSDVersion; int dwPlatformId; int dwBuildNumber; int member_0; } ;
struct TYPE_9__ {int dwOSVersionInfoSize; scalar_t__ wProductType; int member_0; } ;
struct TYPE_7__ {int member_0; } ;
struct TYPE_8__ {int wProcessorArchitecture; TYPE_1__ member_0; } ;
typedef TYPE_2__ SYSTEM_INFO ;
typedef TYPE_3__ OSVERSIONINFOEX ;
typedef TYPE_4__ OSVERSIONINFO ;
typedef int DWORD ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ FUNC_2 (int ) ;



 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,size_t,char*,int,...) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*,char*) ;
 int FUNC_6 (char*,char const*,size_t) ;
 int FUNC_7 (char*,char*,size_t) ;
 char* VAR_3 ;

__attribute__((used)) static void FUNC_8(char *VAR_4, size_t VAR_5, int *VAR_6, int *VAR_7)
{
   char VAR_8[11] = {0};
   bool VAR_9 = 0;
   const char *VAR_10 = "";
   OSVERSIONINFO VAR_11 = {0};
   VAR_11.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);


   FUNC_1(&VAR_11);


   if (VAR_6)
      *VAR_6 = VAR_11.dwMajorVersion;

   if (VAR_7)
      *VAR_7 = VAR_11.dwMinorVersion;

   if (VAR_11.dwMajorVersion == 4 && VAR_11.dwMinorVersion == 0)
      FUNC_3(VAR_8, sizeof(VAR_8), "%lu", (DWORD)(FUNC_2(VAR_11.dwBuildNumber)));
   else
      FUNC_3(VAR_8, sizeof(VAR_8), "%lu", VAR_11.dwBuildNumber);

   switch (VAR_11.dwMajorVersion)
   {
      case 10:
         if (VAR_9)
            FUNC_7(VAR_4, "Windows Server 2016", VAR_5);
         else
            FUNC_7(VAR_4, "Windows 10", VAR_5);
         break;
      case 6:
         switch (VAR_11.dwMinorVersion)
         {
            case 3:
               if (VAR_9)
                  FUNC_7(VAR_4, "Windows Server 2012 R2", VAR_5);
               else
                  FUNC_7(VAR_4, "Windows 8.1", VAR_5);
               break;
            case 2:
               if (VAR_9)
                  FUNC_7(VAR_4, "Windows Server 2012", VAR_5);
               else
                  FUNC_7(VAR_4, "Windows 8", VAR_5);
               break;
            case 1:
               if (VAR_9)
                  FUNC_7(VAR_4, "Windows Server 2008 R2", VAR_5);
               else
                  FUNC_7(VAR_4, "Windows 7", VAR_5);
               break;
            case 0:
               if (VAR_9)
                  FUNC_7(VAR_4, "Windows Server 2008", VAR_5);
               else
                  FUNC_7(VAR_4, "Windows Vista", VAR_5);
               break;
            default:
               break;
         }
         break;
      case 5:
         switch (VAR_11.dwMinorVersion)
         {
            case 2:
               if (VAR_9)
                  FUNC_7(VAR_4, "Windows Server 2003", VAR_5);
               else
               {

                  if (FUNC_5(VAR_10, "x64"))
                     FUNC_7(VAR_4, "Windows XP", VAR_5);
               }
               break;
            case 1:
               FUNC_7(VAR_4, "Windows XP", VAR_5);
               break;
            case 0:
               FUNC_7(VAR_4, "Windows 2000", VAR_5);
               break;
         }
         break;
      case 4:
         switch (VAR_11.dwMinorVersion)
         {
            case 0:
               if (VAR_11.dwPlatformId == VAR_2)
                  FUNC_7(VAR_4, "Windows 95", VAR_5);
               else if (VAR_11.dwPlatformId == VAR_1)
                  FUNC_7(VAR_4, "Windows NT 4.0", VAR_5);
               else
                  FUNC_7(VAR_4, "Unknown", VAR_5);
               break;
            case 90:
               FUNC_7(VAR_4, "Windows ME", VAR_5);
               break;
            case 10:
               FUNC_7(VAR_4, "Windows 98", VAR_5);
               break;
         }
         break;
      default:
         FUNC_3(VAR_4, VAR_5, "Windows %i.%i", *VAR_6, *VAR_7);
         break;
   }

   if (!FUNC_4(VAR_10))
   {
      FUNC_6(VAR_4, " ", VAR_5);
      FUNC_6(VAR_4, VAR_10, VAR_5);
   }

   FUNC_6(VAR_4, " Build ", VAR_5);
   FUNC_6(VAR_4, VAR_8, VAR_5);

   if (!FUNC_4(VAR_11.szCSDVersion))
   {
      FUNC_6(VAR_4, " ", VAR_5);
      FUNC_6(VAR_4, VAR_11.szCSDVersion, VAR_5);
   }

   if (!FUNC_4(VAR_3))
   {
      FUNC_6(VAR_4, " ", VAR_5);
      FUNC_6(VAR_4, VAR_3, VAR_5);
   }
}
