
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct class {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,char*,unsigned int*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_3(struct class *VAR_1, const char *VAR_2,
     size_t VAR_3)
{
 unsigned int VAR_4, VAR_5;
 if (FUNC_2(VAR_2, "%u:%u", &VAR_4, &VAR_5) == 2) {
  FUNC_1(FUNC_0(VAR_4, VAR_5));
  return VAR_3;
 }
 return -VAR_0;
}
