
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,struct stat*) ;

int FUNC_1(const char *VAR_1)
{
 struct stat VAR_2;
 return FUNC_0(VAR_1, &VAR_2) == 0 && (VAR_2.st_mode & VAR_0);
}
