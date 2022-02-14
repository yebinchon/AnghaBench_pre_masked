
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int FUNC_4(const char *VAR_3, struct kernel_param *VAR_4)
{




 int VAR_5 = FUNC_2(VAR_3);
 char VAR_6[VAR_0];

 while (VAR_5 && VAR_3[VAR_5-1] == '\n')
  VAR_5--;
 if (VAR_5 >= VAR_0)
  return -VAR_1;
 FUNC_1(VAR_6, VAR_3, VAR_5+1);
 if (FUNC_3(VAR_6, "md_", 3) != 0)
  return -VAR_2;
 return FUNC_0(0, VAR_6);
}
