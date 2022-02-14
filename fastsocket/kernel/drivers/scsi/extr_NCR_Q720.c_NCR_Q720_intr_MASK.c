
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NCR_Q720_private {int irq_enable; int siops; int * hosts; scalar_t__ mem_base; } ;
typedef int irqreturn_t ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static irqreturn_t
FUNC_3(int VAR_2, void *VAR_3)
{
 struct NCR_Q720_private *VAR_4 = (struct NCR_Q720_private *)VAR_3;
 __u8 VAR_5 = (FUNC_2(VAR_4->mem_base + 0x0d) & 0xf0) >> 4;
 __u8 VAR_6;

 VAR_5 |= ~VAR_4->irq_enable;

 if(VAR_5 == 0xff)
  return VAR_1;


 while((VAR_6 = FUNC_0(VAR_5)) < VAR_4->siops) {
  VAR_5 |= 1<<VAR_6;
  FUNC_1(VAR_2, VAR_4->hosts[VAR_6]);
 }
 return VAR_0;
}
