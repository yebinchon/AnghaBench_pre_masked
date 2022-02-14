
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(DWORD VAR_0)
{
 DWORD VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0();
 VAR_2 = (int)VAR_0 - (int)VAR_1;
 if (VAR_2 >= 2)
  FUNC_1(VAR_2 - 1);

 while ((VAR_1 = FUNC_0()) < VAR_0 && VAR_0 - VAR_1 < 512)
  FUNC_2(1024*2);
}
