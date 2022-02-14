
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ const wchar_t ;
typedef int protocolName ;
typedef int protocolDescription ;
typedef int openCommand ;
typedef int keyName ;
typedef scalar_t__ LSTATUS ;
typedef int HKEY ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,scalar_t__ const*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,scalar_t__ const*,int ,int *,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_4 (int ,char*,char*,int ,scalar_t__ const*,int) ;
 int FUNC_5 (scalar_t__ const*,int,char*,scalar_t__ const*) ;
 int FUNC_6 (int ,char*) ;
 scalar_t__ FUNC_7 (scalar_t__ const*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_8(
      const wchar_t* VAR_6, const wchar_t* VAR_7)
{




    DWORD VAR_8;
    LSTATUS VAR_9;
    wchar_t VAR_10 = 0;
    wchar_t VAR_11[256];
    wchar_t VAR_12[64];
    wchar_t VAR_13[128];
    wchar_t VAR_14[VAR_3];
    DWORD VAR_15 = FUNC_1(((void*)0), VAR_14, VAR_3);
    wchar_t VAR_16[1024];

    if (VAR_7 && VAR_7[0])
        FUNC_5(VAR_16, sizeof(VAR_16), L"%S", VAR_7);
    else
        FUNC_5(VAR_16, sizeof(VAR_16), L"%S", VAR_14);

    FUNC_5(VAR_12, sizeof(VAR_12),
          L"discord-%S", VAR_6);
    FUNC_5(
      VAR_13, sizeof(VAR_13),
      L"URL:Run game %S protocol", VAR_6);
    FUNC_5(VAR_11, sizeof(VAR_11), L"Software\\Classes\\%S", VAR_12);
    HKEY VAR_17;
    LSTATUS VAR_18 =
      FUNC_3(VAR_1, VAR_11, 0, ((void*)0), 0, VAR_2, ((void*)0), &VAR_17, ((void*)0));
    if (VAR_18 != VAR_0)
    {
        FUNC_6(VAR_5, "Error creating key\n");
        return;
    }
    VAR_8 = (DWORD)FUNC_7(VAR_13) + 1;
    VAR_9 =
      FUNC_4(VAR_17, ((void*)0), ((void*)0), VAR_4, VAR_13, VAR_8 * sizeof(wchar_t));
    if (FUNC_0(VAR_9)) {
        FUNC_6(VAR_5, "Error writing description\n");
    }

    VAR_8 = (DWORD)FUNC_7(VAR_13) + 1;
    VAR_9 = FUNC_4(VAR_17, ((void*)0), L"URL Protocol", VAR_4, &VAR_10, sizeof(wchar_t));
    if (FUNC_0(VAR_9))
        FUNC_6(VAR_5, "Error writing description\n");

    VAR_9 = FUNC_4(
      VAR_17, L"DefaultIcon", ((void*)0), VAR_4, VAR_14, (VAR_15 + 1) * sizeof(wchar_t));
    if (FUNC_0(VAR_9))
        FUNC_6(VAR_5, "Error writing icon\n");

    VAR_8 = (DWORD)FUNC_7(VAR_16) + 1;
    VAR_9 = FUNC_4(
      VAR_17, L"shell\\open\\command", ((void*)0), VAR_4, VAR_16, VAR_8 * sizeof(wchar_t));
    if (FUNC_0(VAR_9))
        FUNC_6(VAR_5, "Error writing command\n");
    FUNC_2(VAR_17);
}
