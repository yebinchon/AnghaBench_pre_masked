
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mtime; } ;


 int FUNC_0 (char*,struct stat*) ;

int FUNC_1 (char *VAR_0)
{
  struct stat VAR_1;

  if (FUNC_0 (VAR_0,&VAR_1) == -1)
    return -1;

  return VAR_1.st_mtime;
}
