
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,unsigned int) ;
 void* FUNC_1 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_2 (char const*,char*) ;

__attribute__((used)) static int FUNC_3(struct device_node *VAR_1)
{
 const char *VAR_2;
 const unsigned int *VAR_3;
 unsigned long VAR_4;
 unsigned int VAR_5;
 int VAR_6 = -VAR_0;




 VAR_2 = FUNC_1(VAR_1, "device_type", ((void*)0));
 if (VAR_2 == ((void*)0) || FUNC_2(VAR_2, "memory") != 0)
  return 0;




 VAR_3 = FUNC_1(VAR_1, "reg", ((void*)0));
 if (!VAR_3)
  return VAR_6;

 VAR_4 = *(unsigned long *)VAR_3;
 VAR_5 = VAR_3[3];




 VAR_6 = FUNC_0(VAR_4, VAR_5);
 return (VAR_6 < 0) ? -VAR_0 : 0;
}
