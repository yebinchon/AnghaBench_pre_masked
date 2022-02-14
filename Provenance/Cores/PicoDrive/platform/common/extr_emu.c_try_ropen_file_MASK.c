
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_mtime; } ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,char*) ;
 scalar_t__ FUNC_3 (int ,struct stat*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_0, int *VAR_1)
{
 struct stat VAR_2;
 FILE *VAR_3;

 VAR_3 = FUNC_2(VAR_0, "rb");
 if (VAR_3) {
  if (VAR_1 != ((void*)0)) {
   *VAR_1 = 0;
   if (FUNC_3(FUNC_1(VAR_3), &VAR_2) == 0)
    *VAR_1 = (int)VAR_2.st_mtime;
  }
  FUNC_0(VAR_3);
  return 1;
 }
 return 0;
}
