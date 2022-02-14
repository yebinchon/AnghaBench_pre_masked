
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ) ;

int FUNC_3(struct device *VAR_1)
{
 if (!VAR_1) {
  FUNC_0(1);
  return -VAR_0;
 };

 FUNC_2("OMAP PM: returning context loss count for dev %s\n",
   FUNC_1(VAR_1));






 return 0;
}
