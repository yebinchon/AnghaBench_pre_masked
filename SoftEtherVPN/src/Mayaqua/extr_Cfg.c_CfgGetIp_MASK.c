
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct IP {int dummy; } ;
typedef int IP ;
typedef int FOLDER ;


 int FUNC_0 (int *,char*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct IP*,char*) ;
 int FUNC_2 (struct IP*,int) ;

bool FUNC_3(FOLDER *VAR_1, char *VAR_2, struct IP *VAR_3)
{
 char VAR_4[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 FUNC_2(VAR_3, sizeof(IP));

 if (FUNC_0(VAR_1, VAR_2, VAR_4, sizeof(VAR_4)) == 0)
 {
  return 0;
 }

 if (FUNC_1(VAR_3, VAR_4) == 0)
 {
  return 0;
 }

 return 1;
}
