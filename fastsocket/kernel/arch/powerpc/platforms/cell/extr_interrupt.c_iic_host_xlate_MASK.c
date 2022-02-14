
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct irq_host {int dummy; } ;
struct device_node {int dummy; } ;
typedef unsigned int irq_hw_number_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (struct device_node*,char*) ;
 int* FUNC_1 (struct device_node*,char*,int *) ;

__attribute__((used)) static int FUNC_2(struct irq_host *VAR_8, struct device_node *VAR_9,
      u32 *VAR_10, unsigned int VAR_11,
      irq_hw_number_t *VAR_12, unsigned int *VAR_13)

{
 unsigned int VAR_14, VAR_15, VAR_16, VAR_17;
 const u32 *VAR_18;

 if (!FUNC_0(VAR_9,
         "IBM,CBEA-Internal-Interrupt-Controller"))
  return -VAR_1;
 if (VAR_11 != 1)
  return -VAR_1;
 VAR_18 = FUNC_1(VAR_9, "#interrupt-cells", ((void*)0));
 if (VAR_18 == ((void*)0) || *VAR_18 != 1)
  return -VAR_1;

 VAR_14 = VAR_10[0] >> 24;
 VAR_15 = (VAR_10[0] >> 16) & 0xff;
 VAR_17 = (VAR_10[0] >> 8) & 0xff;
 VAR_16 = VAR_10[0] & 0xff;


 if (VAR_14 > 1)
  return -VAR_0;


 *VAR_12 = (VAR_14 << VAR_3);
 if (VAR_16 == VAR_6 && VAR_17 == 1)
  *VAR_12 |= VAR_4 | VAR_15;
 else
  *VAR_12 |= VAR_5 |
   (VAR_17 << VAR_2) | VAR_16;


 *VAR_13 = VAR_7;

 return 0;
}
