
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cp_private {int lock; int regs; } ;


 struct cp_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0)
{
 struct cp_private *VAR_1 = FUNC_0(VAR_0);
 int VAR_2;

 FUNC_2(&VAR_1->lock);
 VAR_2 = FUNC_1(VAR_1->regs, 0, 8) == 0x8129 ? 256 : 128;
 FUNC_3(&VAR_1->lock);

 return VAR_2;
}
