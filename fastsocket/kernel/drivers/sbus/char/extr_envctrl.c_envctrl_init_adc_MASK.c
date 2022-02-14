
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_child_t {int dummy; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (struct i2c_child_t*,char const*,int ) ;
 void* FUNC_1 (struct device_node*,char*,int*) ;
 unsigned int VAR_0 ;
 int FUNC_2 (char const*) ;
 unsigned int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct i2c_child_t *VAR_2, struct device_node *VAR_3)
{
 int VAR_4 = 0, VAR_5;
 const char *VAR_6;
 const unsigned int *VAR_7;


 VAR_6 = FUNC_1(VAR_3, "channels-description", &VAR_5);

 while (VAR_5 > 0) {
  int VAR_8 = FUNC_2(VAR_6) + 1;
  FUNC_0(VAR_2, VAR_6, VAR_4++);
  VAR_5 -= VAR_8;
  VAR_6 += VAR_8;
 }


 VAR_7 = FUNC_1(VAR_3, "warning-temp", ((void*)0));
 if (VAR_7)
  VAR_1 = *VAR_7;

 VAR_7 = FUNC_1(VAR_3, "shutdown-temp", ((void*)0));
 if (VAR_7)
  VAR_0 = *VAR_7;
}
