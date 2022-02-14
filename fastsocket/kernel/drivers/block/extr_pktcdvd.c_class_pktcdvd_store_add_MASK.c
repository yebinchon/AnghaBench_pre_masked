
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct class {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char const*,char*,unsigned int*,unsigned int*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct class *VAR_3, const char *VAR_4,
     size_t VAR_5)
{
 unsigned int VAR_6, VAR_7;

 if (FUNC_3(VAR_4, "%u:%u", &VAR_6, &VAR_7) == 2) {

  if (!FUNC_4(VAR_2))
   return -VAR_1;

  FUNC_2(FUNC_0(VAR_6, VAR_7), ((void*)0));

  FUNC_1(VAR_2);

  return VAR_5;
 }

 return -VAR_0;
}
