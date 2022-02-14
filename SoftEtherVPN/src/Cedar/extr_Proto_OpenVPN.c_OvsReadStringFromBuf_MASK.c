
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef int UINT ;
typedef int BUF ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,...) ;
 int FUNC_2 (char*,int,char*) ;

bool FUNC_3(BUF *VAR_0, char *VAR_1, UINT VAR_2)
{
 USHORT VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_1(VAR_0, &VAR_3, sizeof(USHORT)) != sizeof(USHORT))
 {
  return 0;
 }

 VAR_3 = FUNC_0(VAR_3);

 if (VAR_3 == 0)
 {
  FUNC_2(VAR_1, VAR_2, "");
  return 1;
 }

 if (VAR_3 > VAR_2)
 {
  return 0;
 }

 if (FUNC_1(VAR_0, VAR_1, VAR_3) != VAR_3)
 {
  return 0;
 }

 if (VAR_1[VAR_3 - 1] != 0)
 {
  return 0;
 }

 return 1;
}
