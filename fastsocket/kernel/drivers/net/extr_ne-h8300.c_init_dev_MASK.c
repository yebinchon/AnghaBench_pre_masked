
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int irq; int base_addr; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 size_t VAR_2 ;
 int * VAR_3 ;

__attribute__((used)) static inline int FUNC_1(struct net_device *VAR_4)
{
 if (VAR_2 < FUNC_0(VAR_1)) {
  VAR_4->base_addr = VAR_1[VAR_2];
  VAR_4->irq = VAR_3[VAR_2];
  VAR_2++;
  return 0;
 } else
  return -VAR_0;
}
