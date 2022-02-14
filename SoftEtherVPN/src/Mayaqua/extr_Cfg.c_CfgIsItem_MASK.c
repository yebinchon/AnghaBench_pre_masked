
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ITEM ;
typedef int FOLDER ;


 int * FUNC_0 (int *,char*) ;

bool FUNC_1(FOLDER *VAR_0, char *VAR_1)
{
 ITEM *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return 0;
 }

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
 {
  return 0;
 }

 return 1;
}
