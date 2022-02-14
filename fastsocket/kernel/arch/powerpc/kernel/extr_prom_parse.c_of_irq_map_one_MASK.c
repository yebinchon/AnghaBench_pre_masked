
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct of_irq {int dummy; } ;
struct device_node {int full_name; } ;


 int FUNC_0 (char*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_1 (struct device_node*,char*,int*) ;
 struct device_node* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*,int,struct of_irq*) ;
 int FUNC_4 (struct device_node*,int const*,int,int const*,struct of_irq*) ;
 int VAR_2 ;
 int FUNC_5 (struct device_node*) ;

int FUNC_6(struct device_node *VAR_3, int VAR_4, struct of_irq *VAR_5)
{
 struct device_node *VAR_6;
 const u32 *VAR_7, *VAR_8, *VAR_9;
 u32 VAR_10, VAR_11;
 int VAR_12 = -VAR_0;

 FUNC_0("of_irq_map_one: dev=%s, index=%d\n", VAR_3->full_name, VAR_4);


 if (VAR_2 & VAR_1)
  return FUNC_3(VAR_3, VAR_4, VAR_5);


 VAR_7 = FUNC_1(VAR_3, "interrupts", &VAR_11);
 if (VAR_7 == ((void*)0))
  return -VAR_0;
 VAR_11 /= sizeof(u32);


 VAR_9 = FUNC_1(VAR_3, "reg", ((void*)0));


 VAR_6 = FUNC_2(VAR_3);
 if (VAR_6 == ((void*)0))
  return -VAR_0;


 VAR_8 = FUNC_1(VAR_6, "#interrupt-cells", ((void*)0));
 if (VAR_8 == ((void*)0))
  goto out;
 VAR_10 = *VAR_8;

 FUNC_0(" intsize=%d intlen=%d\n", VAR_10, VAR_11);


 if ((VAR_4 + 1) * VAR_10 > VAR_11)
  goto out;


 VAR_12 = FUNC_4(VAR_6, VAR_7 + VAR_4 * VAR_10, VAR_10,
        VAR_9, VAR_5);
out:
 FUNC_5(VAR_6);
 return VAR_12;
}
