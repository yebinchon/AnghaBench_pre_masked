
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int IP ;


 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (int *,char*,int ,int*) ;
 scalar_t__ FUNC_2 (int *,char*,int ,int*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

bool FUNC_8(IP *VAR_0, IP *VAR_1, char *VAR_2, UINT VAR_3, bool *VAR_4)
{
 IP VAR_5, VAR_6;
 bool VAR_7, VAR_8;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_6(VAR_0);
 FUNC_7(VAR_1);

 VAR_7 = VAR_8 = 0;

 if (FUNC_2(&VAR_5, VAR_2, VAR_3, VAR_4))
 {
  VAR_7 = 1;
 }

 if (FUNC_1(&VAR_6, VAR_2, VAR_3, VAR_4))
 {
  VAR_8 = 1;
 }

 if (VAR_7)
 {
  if (FUNC_3(&VAR_5))
  {
   FUNC_0(VAR_0, &VAR_5, sizeof(IP));
  }
 }
 if (VAR_8)
 {
  if (FUNC_3(&VAR_6))
  {
   FUNC_0(VAR_0, &VAR_6, sizeof(IP));
  }

  if (FUNC_4(&VAR_6))
  {
   FUNC_0(VAR_1, &VAR_6, sizeof(IP));
  }
 }
 if (VAR_7)
 {
  if (FUNC_4(&VAR_5))
  {
   FUNC_0(VAR_1, &VAR_5, sizeof(IP));
  }
 }

 if (FUNC_5(VAR_0) && FUNC_5(VAR_1))
 {
  return 0;
 }

 return 1;
}
