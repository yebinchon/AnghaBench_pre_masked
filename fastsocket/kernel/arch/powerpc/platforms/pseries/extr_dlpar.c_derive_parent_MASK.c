
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 struct device_node* FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,int) ;
 char* FUNC_4 (char const*,char) ;

__attribute__((used)) static struct device_node *FUNC_5(const char *VAR_1)
{
 struct device_node *VAR_2;
 char *VAR_3;

 VAR_3 = FUNC_4(VAR_1, '/');
 if (VAR_3 == VAR_1) {
  VAR_2 = FUNC_2("/");
 } else {
  char *VAR_4;
  int VAR_5 = VAR_3 - VAR_1 + 1;
  VAR_4 = FUNC_1(VAR_5, VAR_0);
  if (!VAR_4)
   return ((void*)0);

  FUNC_3(VAR_4, VAR_1, VAR_5);
  VAR_2 = FUNC_2(VAR_4);
  FUNC_0(VAR_4);
 }

 return VAR_2;
}
