
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct class {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char const*,char*,unsigned long*) ;

__attribute__((used)) static
ssize_t FUNC_1(struct class *VAR_2,
    const char *VAR_3, size_t VAR_4)
{
 unsigned long VAR_5;
 ssize_t VAR_6;
 VAR_6 = FUNC_0(VAR_3, "%lu", &VAR_5);
 if (VAR_6 != 1)
  return -VAR_0;
 VAR_1 = VAR_5;
 return VAR_4;
}
