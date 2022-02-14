
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat64 {int st_mode; int st_rdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_6 (char const*,struct stat64*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

int FUNC_9(const char *VAR_8, int *VAR_9, int *VAR_10)
{
  struct stat64 VAR_11;

 if (FUNC_6(VAR_8, &VAR_11) < 0)
  return -VAR_7;




 if (VAR_9 != ((void*)0))
  *VAR_9 = FUNC_7(VAR_11.st_rdev);
 if (VAR_10 != ((void*)0))
  *VAR_10 = FUNC_8(VAR_11.st_rdev);

 if (FUNC_2(VAR_11.st_mode))
  return VAR_2;
 else if (FUNC_4(VAR_11.st_mode))
  return VAR_6;
 else if (FUNC_1(VAR_11.st_mode))
  return VAR_1;
 else if (FUNC_0(VAR_11.st_mode))
  return VAR_0;
 else if (FUNC_3(VAR_11.st_mode))
  return VAR_3;
 else if (FUNC_5(VAR_11.st_mode))
  return VAR_5;
 else return VAR_4;
}
