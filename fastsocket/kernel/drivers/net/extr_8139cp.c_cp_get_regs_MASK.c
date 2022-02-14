
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_regs {scalar_t__ len; int version; } ;
struct cp_private {int lock; int regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int ,scalar_t__) ;
 struct cp_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2, struct ethtool_regs *VAR_3,
          void *VAR_4)
{
 struct cp_private *VAR_5 = FUNC_1(VAR_2);
 unsigned long VAR_6;

 if (VAR_3->len < VAR_0)
  return ;

 VAR_3->version = VAR_1;

 FUNC_2(&VAR_5->lock, VAR_6);
 FUNC_0(VAR_4, VAR_5->regs, VAR_0);
 FUNC_3(&VAR_5->lock, VAR_6);
}
