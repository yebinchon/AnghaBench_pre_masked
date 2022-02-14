
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int irq; } ;
struct ethoc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct net_device*) ;
 int FUNC_1 (struct ethoc*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct ethoc* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 struct ethoc *VAR_2 = FUNC_3(VAR_1);
 u32 VAR_3 = FUNC_1(VAR_2, VAR_0);
 if (FUNC_2(VAR_3))
  FUNC_0(VAR_1->irq, VAR_1);
}
