
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asic3 {int irq_base; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline int FUNC_0(struct asic3 *VAR_2, int VAR_3)
{
 int VAR_4;

 VAR_4 = (VAR_3 - VAR_2->irq_base) >> 4;

 return (VAR_4 * (VAR_1 - VAR_0));
}
