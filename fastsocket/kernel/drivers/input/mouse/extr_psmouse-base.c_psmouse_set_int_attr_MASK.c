
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct psmouse {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int,unsigned long*) ;

__attribute__((used)) static ssize_t FUNC_1(struct psmouse *VAR_1, void *VAR_2, const char *VAR_3, size_t VAR_4)
{
 unsigned int *VAR_5 = (unsigned int *)((char *)VAR_1 + (size_t)VAR_2);
 unsigned long VAR_6;

 if (FUNC_0(VAR_3, 10, &VAR_6))
  return -VAR_0;

 if ((unsigned int)VAR_6 != VAR_6)
  return -VAR_0;

 *VAR_5 = VAR_6;

 return VAR_4;
}
