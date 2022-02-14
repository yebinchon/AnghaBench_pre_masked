
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
struct dirent {int d_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int * VAR_4 ;
 struct dirent* FUNC_3 (int *) ;
 int FUNC_4 (char*,struct stat*) ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static int FUNC_6(char *VAR_5, int *VAR_6)
{
 struct dirent *VAR_7;
 char VAR_8[VAR_1];
 struct stat VAR_9;
 VAR_7 = FUNC_3(VAR_4);
 if (VAR_7 == ((void*)0)) {
  FUNC_2(VAR_4);
  VAR_4 = ((void*)0);
  return VAR_0;
 }
 FUNC_5(VAR_5, VAR_7->d_name);
 FUNC_1(VAR_8, VAR_3, VAR_7->d_name);
 FUNC_4(VAR_8, &VAR_9);
 *VAR_6 = FUNC_0(VAR_9.st_mode);
 return VAR_2;
}
