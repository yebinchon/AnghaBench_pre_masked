
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LSTATUS ;
typedef scalar_t__* LPCWSTR ;
typedef scalar_t__ HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__*,int ,int ,int ,int ,int ,scalar_t__*,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__*,int ,int ,int const*,int ) ;

__attribute__((used)) static LSTATUS FUNC_3(HKEY VAR_2,
      LPCWSTR VAR_3,
      LPCWSTR VAR_4,
      DWORD VAR_5,
      const void* VAR_6,
      DWORD VAR_7)
{
    HKEY VAR_8 = VAR_2, VAR_9 = ((void*)0);
    LSTATUS VAR_10;
    if (VAR_3 && VAR_3[0])
    {
        if ((VAR_10 = FUNC_1(VAR_2, VAR_3, 0, 0, 0, VAR_1, 0, &VAR_9, 0)) !=
            VAR_0)
            return VAR_10;
        VAR_8 = VAR_9;
    }
    VAR_10 = FUNC_2(VAR_8, VAR_4, 0, VAR_5, (const BYTE*)VAR_6, VAR_7);
    if (VAR_9 && VAR_9 != VAR_2)
        FUNC_0(VAR_9);
    return VAR_10;
}
