
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WORD ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (int,int,int*) ;

__attribute__((used)) static DWORD FUNC_1(WORD VAR_0)
{
 WORD VAR_1, VAR_2;
 if (FUNC_0(VAR_0, 62, &VAR_1))
  return 0;
 if (FUNC_0(VAR_0, 63, &VAR_2))
  return 0;
 return (((DWORD) VAR_2 << 16) | VAR_1);
}
