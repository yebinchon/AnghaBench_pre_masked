
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * eth_addr; } ;
struct sgiseeq_regs {TYPE_1__ rw; int tstat; } ;
struct sgiseeq_private {struct sgiseeq_regs* sregs; } ;
struct net_device {int * dev_addr; } ;


 int VAR_0 ;
 struct sgiseeq_private* FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_1(struct net_device *VAR_1)
{
 struct sgiseeq_private *VAR_2 = FUNC_0(VAR_1);
 struct sgiseeq_regs *VAR_3 = VAR_2->sregs;
 int VAR_4;

 VAR_3->tstat = VAR_0;
 for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
  VAR_3->rw.eth_addr[VAR_4] = VAR_1->dev_addr[VAR_4];
}
