
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct of_irq {int dummy; } ;
struct device_node {int full_name; } ;


 int VAR_0 ;
 int* FUNC_0 (struct device_node*,char*,int*) ;
 struct device_node* FUNC_1 (struct device_node*) ;
 int FUNC_2 (struct device_node*,int const*,int,int const*,struct of_irq*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (char*,int const,int) ;

int FUNC_5(struct device_node *VAR_1,
   int VAR_2, struct of_irq *VAR_3)
{
 struct device_node *VAR_4;
 const u32 *VAR_5, *VAR_6, *VAR_7;
 u32 VAR_8, VAR_9;
 int VAR_10;

 FUNC_4("of_irq_map_one: dev=%s, index=%d\n",
   VAR_1->full_name, VAR_2);


 VAR_5 = FUNC_0(VAR_1, "interrupts", (int *) &VAR_9);
 if (VAR_5 == ((void*)0))
  return -VAR_0;
 VAR_9 /= sizeof(u32);

 FUNC_4(" intspec=%d intlen=%d\n", *VAR_5, VAR_9);


 VAR_7 = FUNC_0(VAR_1, "reg", ((void*)0));


 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4 == ((void*)0))
  return -VAR_0;


 VAR_6 = FUNC_0(VAR_4, "#interrupt-cells", ((void*)0));
 if (VAR_6 == ((void*)0)) {
  FUNC_3(VAR_4);
  return -VAR_0;
 }
 VAR_8 = *VAR_6;

 FUNC_4(" intsize=%d intlen=%d\n", VAR_8, VAR_9);


 if ((VAR_2 + 1) * VAR_8 > VAR_9)
  return -VAR_0;


 VAR_10 = FUNC_2(VAR_4, VAR_5 + VAR_2 * VAR_8, VAR_8,
    VAR_7, VAR_3);
 FUNC_3(VAR_4);
 return VAR_10;
}
