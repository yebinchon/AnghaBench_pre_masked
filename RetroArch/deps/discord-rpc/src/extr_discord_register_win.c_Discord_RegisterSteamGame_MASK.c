
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int steamPath ;
typedef int command ;
typedef scalar_t__ LSTATUS ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int FUNC_0 (int*,int*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,char const*,int,int*,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,char*,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,char*,int *,int *,int *,int*) ;
 int FUNC_5 (int*,int,char*,int*,int*) ;
 int FUNC_6 (int ,char*) ;
 int VAR_5 ;

void FUNC_7(
      const char* VAR_6,
      const char* VAR_7)
{
   DWORD VAR_8, VAR_9, VAR_10;
   HKEY VAR_11;
   wchar_t VAR_12[VAR_4];
   wchar_t VAR_13[1024];
   wchar_t VAR_14[32];
   wchar_t VAR_15[32];
   FUNC_1(VAR_0, 0, VAR_6, -1, VAR_14, 32);
   FUNC_1(VAR_0, 0, VAR_7, -1, VAR_15, 32);
   LSTATUS VAR_16 = FUNC_3(VAR_2,
         L"Software\\Valve\\Steam", 0, VAR_3, &VAR_11);
   if (VAR_16 != VAR_1)
   {
      FUNC_6(VAR_5, "Error opening Steam key\n");
      return;
   }

   VAR_9 = sizeof(VAR_12);
   VAR_16 = FUNC_4(VAR_11,
         L"SteamExe", ((void*)0), ((void*)0), (BYTE*)VAR_12, &VAR_9);
   FUNC_2(VAR_11);
   if (VAR_16 != VAR_1 || VAR_9 < 1) {
      FUNC_6(VAR_5, "Error reading SteamExe key\n");
      return;
   }

   VAR_8 = VAR_9 / sizeof(wchar_t);
   for (VAR_10 = 0; VAR_10 < VAR_8; ++VAR_10)
   {
      if (VAR_12[VAR_10] == L'/')
         VAR_12[VAR_10] = L'\\';
   }

   FUNC_5(VAR_13, sizeof(VAR_13),
         L"\"%s\" steam://rungameid/%s", VAR_12, VAR_15);

   FUNC_0(VAR_14, VAR_13);
}
