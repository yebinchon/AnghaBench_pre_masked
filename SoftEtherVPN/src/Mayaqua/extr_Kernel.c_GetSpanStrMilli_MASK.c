
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
typedef int UINT64 ;
typedef int UINT ;


 int FUNC_0 (char*,int,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,char*) ;
 int FUNC_2 (char*) ;

void FUNC_3(char *VAR_1, UINT VAR_2, UINT64 VAR_3)
{
 char VAR_4[VAR_0];

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 FUNC_1(VAR_4, sizeof(VAR_4), "");
 if (VAR_3 >= (UINT64)(1000 * 3600 * 24))
 {
  FUNC_0(VAR_4, sizeof(VAR_4), "%u:", (UINT)(VAR_3 / (UINT64)(1000 * 3600 * 24)));
 }

 FUNC_0(VAR_4, sizeof(VAR_4), "%s%02u:%02u:%02u.%03u", VAR_4,
  (UINT)(VAR_3 % (UINT64)(1000 * 60 * 60 * 24)) / (1000 * 60 * 60),
  (UINT)(VAR_3 % (UINT64)(1000 * 60 * 60)) / (1000 * 60),
  (UINT)(VAR_3 % (UINT64)(1000 * 60)) / 1000,
  (UINT)(VAR_3 % (UINT64)(1000)));

 FUNC_2(VAR_4);
 FUNC_1(VAR_1, VAR_2, VAR_4);
}
