
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kernel_param {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(const char *VAR_2, struct kernel_param *VAR_3)
{
 VAR_1 = 0;

 if (!FUNC_0(VAR_2, "redraw"))
  VAR_1 = 0;
 else if (!FUNC_0(VAR_2, "ypan"))
  VAR_1 = 1;
 else if (!FUNC_0(VAR_2, "ywrap"))
  VAR_1 = 2;
 else
  return -VAR_0;

 return 0;
}
