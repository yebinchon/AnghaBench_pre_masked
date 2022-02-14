
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_size; } ;
typedef int int64 ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,struct stat*) ;

int64
FUNC_2(char *VAR_0)
{
 char *VAR_1 = ((void*)0);
 struct stat VAR_2;
 int VAR_3 = 0;

 VAR_1 = FUNC_0(VAR_0);
 VAR_3 = FUNC_1(VAR_1, &VAR_2);
 if (VAR_3 < 0)
 {
  return -1;
 }

 return (int64) VAR_2.st_size;
}
