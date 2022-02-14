
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct device_node* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t,int ) ;
 struct device_node* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char const*,char*) ;
 int FUNC_5 (char*,char const*,size_t) ;
 char const* FUNC_6 (char const*,char) ;

__attribute__((used)) static struct device_node *FUNC_7(const char *VAR_3)
{
 struct device_node *VAR_4 = ((void*)0);
 char *VAR_5 = "/";
 size_t VAR_6 = FUNC_6(VAR_3, '/') - VAR_3 + 1;


 if (!FUNC_4(VAR_3, "/"))
  return FUNC_0(-VAR_0);

 if (FUNC_6(VAR_3, '/') != VAR_3) {
  VAR_5 = FUNC_2(VAR_6, VAR_2);
  if (!VAR_5)
   return FUNC_0(-VAR_1);
  FUNC_5(VAR_5, VAR_3, VAR_6);
 }
 VAR_4 = FUNC_3(VAR_5);
 if (!VAR_4)
  return FUNC_0(-VAR_0);
 if (FUNC_4(VAR_5, "/"))
  FUNC_1(VAR_5);
 return VAR_4;
}
