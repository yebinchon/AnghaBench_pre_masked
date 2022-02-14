
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_rdev {int corrected_errors; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 unsigned long FUNC_1 (char const*,char**,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct md_rdev *VAR_1, const char *VAR_2, size_t VAR_3)
{
 char *VAR_4;
 unsigned long VAR_5 = FUNC_1(VAR_2, &VAR_4, 10);
 if (*VAR_2 && (*VAR_4 == 0 || *VAR_4 == '\n')) {
  FUNC_0(&VAR_1->corrected_errors, VAR_5);
  return VAR_3;
 }
 return -VAR_0;
}
