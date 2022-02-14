
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct gfar_private {TYPE_1__* regs; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int ievent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,void*) ;
 int FUNC_3 (int,void*) ;
 struct gfar_private* FUNC_4 (struct net_device*) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 struct net_device *VAR_6 = VAR_5;
 struct gfar_private *VAR_7 = FUNC_4(VAR_6);


 u32 VAR_8 = FUNC_1(&VAR_7->regs->ievent);


 if (VAR_8 & VAR_1)
  FUNC_2(VAR_4, VAR_5);


 if (VAR_8 & VAR_2)
  FUNC_3(VAR_4, VAR_5);


 if (VAR_8 & VAR_0)
  FUNC_0(VAR_4, VAR_5);

 return VAR_3;
}
