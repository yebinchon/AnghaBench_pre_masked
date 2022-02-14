
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct childless {unsigned long storeme; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (char*,char**,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct childless *VAR_3,
           const char *VAR_4,
           size_t VAR_5)
{
 unsigned long VAR_6;
 char *VAR_7 = (char *) VAR_4;

 VAR_6 = FUNC_0(VAR_7, &VAR_7, 10);
 if (!VAR_7 || (*VAR_7 && (*VAR_7 != '\n')))
  return -VAR_0;

 if (VAR_6 > VAR_2)
  return -VAR_1;

 VAR_3->storeme = VAR_6;

 return VAR_5;
}
