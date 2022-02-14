
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cp_private {scalar_t__ regs; } ;


 scalar_t__* VAR_0 ;
 struct cp_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, int VAR_2, int VAR_3)
{
 struct cp_private *VAR_4 = FUNC_0(VAR_1);

 return VAR_3 < 8 && VAR_0[VAR_3] ?
        FUNC_1(VAR_4->regs + VAR_0[VAR_3]) : 0;
}
