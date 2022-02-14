
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (int *,char*) ;
 char* FUNC_1 (struct device_node*,char*,int *) ;
 int FUNC_2 (struct device_node*) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char const*,int ) ;

int FUNC_5(const char *VAR_0)
{
 struct device_node* VAR_1 = FUNC_0(((void*)0), "backlight");

 if (VAR_1) {
  const char *VAR_2 = FUNC_1(VAR_1,
    "backlight-control", ((void*)0));
  if (VAR_2 && FUNC_4(VAR_2, VAR_0, FUNC_3(VAR_0)) == 0) {
   FUNC_2(VAR_1);
   return 1;
  }
  FUNC_2(VAR_1);
 }

 return 0;
}
