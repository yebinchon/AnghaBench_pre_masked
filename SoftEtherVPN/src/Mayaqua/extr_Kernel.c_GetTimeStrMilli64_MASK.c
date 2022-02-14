
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT64 ;
typedef int UINT ;
typedef int SYSTEMTIME ;


 int FUNC_0 (char*,int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;

void FUNC_5(char *VAR_0, UINT VAR_1, UINT64 VAR_2)
{
 SYSTEMTIME VAR_3;
 if (VAR_2 == 0 || FUNC_3(VAR_2) == 0 || FUNC_1(VAR_2) == 0)
 {
  FUNC_2(VAR_0, VAR_1, "(Unknown)");
  return;
 }
 FUNC_4(&VAR_3, VAR_2);
 FUNC_0(VAR_0, VAR_1, &VAR_3);
}
