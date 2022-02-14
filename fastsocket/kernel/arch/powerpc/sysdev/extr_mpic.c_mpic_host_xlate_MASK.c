
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct irq_host {int dummy; } ;
struct device_node {int dummy; } ;
typedef size_t irq_hw_number_t ;


 int FUNC_0 (char*,unsigned int,size_t,size_t,size_t,unsigned int) ;




 unsigned int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct irq_host *VAR_2, struct device_node *VAR_3,
      u32 *VAR_4, unsigned int VAR_5,
      irq_hw_number_t *VAR_6, unsigned int *VAR_7)

{
 static unsigned char VAR_8[4] = {
  130,
  128,
  129,
  131,
 };

 *VAR_6 = VAR_4[0];
 if (VAR_5 > 1) {
  u32 VAR_9 = 0x3;
  if (FUNC_1(VAR_1))
   VAR_9 = 0x1;
  *VAR_7 = VAR_8[VAR_4[1] & VAR_9];
 } else
  *VAR_7 = VAR_0;

 FUNC_0("mpic: xlate (%d cells: 0x%08x 0x%08x) to line 0x%lx sense 0x%x\n",
     VAR_5, VAR_4[0], VAR_4[1], *VAR_6, *VAR_7);

 return 0;
}
