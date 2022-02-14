
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmp ;
struct IP {int dummy; } ;
typedef int ITEM ;
typedef int FOLDER ;


 int * FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*,int,struct IP*) ;
 int VAR_0 ;

ITEM *FUNC_2(FOLDER *VAR_1, char *VAR_2, struct IP *VAR_3)
{
 char VAR_4[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_1(VAR_4, sizeof(VAR_4), VAR_3);

 return FUNC_0(VAR_1, VAR_2, VAR_4);
}
