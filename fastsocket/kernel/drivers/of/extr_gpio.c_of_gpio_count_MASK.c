
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device_node*,char*,char*,unsigned int,int *,int *) ;

unsigned int FUNC_1(struct device_node *VAR_1)
{
 unsigned int VAR_2 = 0;

 do {
  int VAR_3;

  VAR_3 = FUNC_0(VAR_1, "gpios", "#gpio-cells",
        VAR_2, ((void*)0), ((void*)0));

  if (VAR_3 < 0 && VAR_3 != -VAR_0)
   break;
 } while (++VAR_2);

 return VAR_2;
}
