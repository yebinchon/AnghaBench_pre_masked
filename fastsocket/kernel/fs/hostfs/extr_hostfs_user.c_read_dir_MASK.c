
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; unsigned long long d_ino; } ;
typedef int DIR ;


 struct dirent* FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long long) ;
 int FUNC_2 (char*) ;
 unsigned long long FUNC_3 (int *) ;

char *FUNC_4(void *VAR_0, unsigned long long *VAR_1,
        unsigned long long *VAR_2, int *VAR_3)
{
 DIR *VAR_4 = VAR_0;
 struct dirent *VAR_5;

 FUNC_1(VAR_4, *VAR_1);
 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 *VAR_3 = FUNC_2(VAR_5->d_name);
 *VAR_2 = VAR_5->d_ino;
 *VAR_1 = FUNC_3(VAR_4);
 return VAR_5->d_name;
}
