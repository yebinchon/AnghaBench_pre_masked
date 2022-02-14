
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uml_stat {int dummy; } ;
struct stat64 {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct uml_stat*,struct stat64*) ;
 int VAR_0 ;
 int FUNC_2 (int const,struct stat64*) ;

int FUNC_3(const int VAR_1, struct uml_stat *VAR_2)
{
 struct stat64 VAR_3;
 int VAR_4;

 FUNC_0(VAR_4 = FUNC_2(VAR_1, &VAR_3));
 if (VAR_4 < 0)
  return -VAR_0;

 if (VAR_2 != ((void*)0))
  FUNC_1(VAR_2, &VAR_3);
 return VAR_4;
}
