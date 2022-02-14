
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int args ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;


 int FUNC_0 (char*,int*) ;
 int* FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int *,int*,int ,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (char*,char*) ;
 int VAR_6 ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (int*,int,char*,char*,int*) ;

int FUNC_9(int VAR_7, char *VAR_8[])
{
 HKEY VAR_9;
 bool VAR_10 = 0;
 char VAR_11[VAR_2];
 wchar_t *VAR_12;
 bool VAR_13 = 0;
 bool VAR_14 = 0;

 VAR_11[0] = 0;

 FUNC_6(VAR_1, "");

 VAR_12 = FUNC_1();


 while (1)
 {
  switch (*VAR_12)
  {
  case L'\"':
   if (VAR_13 == 0)
   {
    VAR_13 = 1;
   }
   else
   {
    VAR_13 = 0;
   }
   break;

  case L' ':
  case L'\t':
  case 0:
   if (VAR_13 == 0)
   {
    VAR_14 = 1;
   }
   break;
  }
  if (VAR_14)
  {
   break;
  }
  VAR_12++;
 }

 while (1)
 {
  if (*VAR_12 == L' ' || *VAR_12 == L'\t')
  {
   VAR_12++;
  }
  else
  {
   break;
  }
 }

 FUNC_7(VAR_11, "VPN Command Line Tools is not Installed.\nPlease reinstall programs.");


 if (FUNC_3(VAR_0, VAR_4, &VAR_9) == 0)
 {
  DWORD VAR_15 = VAR_3;
  DWORD VAR_16 = 4096;
  char VAR_17[4096];

  if (FUNC_4(VAR_9, VAR_5, ((void*)0), &VAR_15, (LPBYTE)VAR_17, &VAR_16) == 0)
  {
   wchar_t VAR_18[VAR_2];

   FUNC_8(VAR_18, sizeof(VAR_18), L"\"%S\" %s", VAR_17, VAR_12);
   if (FUNC_0(VAR_17, VAR_18) == 0)
   {

   }
   else
   {
    VAR_10 = 1;
   }
  }

  FUNC_2(VAR_9);
 }

 if (VAR_10 == 0)
 {
  FUNC_5("%s\n", VAR_11);
 }

 return VAR_6;
}
