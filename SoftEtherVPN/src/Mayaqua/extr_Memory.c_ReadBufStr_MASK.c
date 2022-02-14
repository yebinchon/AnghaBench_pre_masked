
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int BUF ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int *) ;

bool FUNC_3(BUF *VAR_0, char *VAR_1, UINT VAR_2)
{
 UINT VAR_3;
 UINT VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0)
 {
  return 0;
 }


 VAR_3 = FUNC_2(VAR_0);
 if (VAR_3 == 0)
 {
  return 0;
 }
 VAR_3--;
 if (VAR_3 <= (VAR_2 - 1))
 {
  VAR_2 = VAR_3 + 1;
 }

 VAR_4 = FUNC_0(VAR_3, (VAR_2 - 1));


 if (FUNC_1(VAR_0, VAR_1, VAR_4) != VAR_4)
 {
  return 0;
 }
 if (VAR_4 < VAR_3)
 {
  FUNC_1(VAR_0, ((void*)0), VAR_3 - VAR_4);
 }
 VAR_1[VAR_4] = 0;

 return 1;
}
